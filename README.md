# Note: Currently being updated for Pro Micro. PCB is done, but a new keyboard case is necessary

# Split-Print
This is a split, top-mounted, ortholinear keyboard I built to use with QMK firmware and the Pro Micro compatible Bit-C. This repo contains step files for the keyboard case, gerber files for the PCB, and the keymap I'm currently using. Read further for building instructions, parts list, and tips I recommend while building this keyboard.

## Repo Contents
Here's a quick breakdown of what you'll find here:

+ 3D print models
    + rev1
        - case_v1_left_dovetail.stl -> left half of the case v1
        - case_v1_right_dovetail.stl -> right half of the case v1
        - plate_v1.stl -> top plate of case to attach keyswitches
    + rev2
        - base_v2_single.stl -> single, whole base with hardware tolerace adjustments
        - plate_v2.stl -> switch plate with hardware tolerance adjustments
    + misc
        - keycap_standard.stl -> custom cherry chiclet keycap (I don't recommend using these)
        - keycap_with_nub.stl -> same as keycap_standard but with F and J nub to identify home row
        - wrist_rest.stl -> optional wrist rest
- Keyboard_pcb_gerber.zip -> all necessary gerber files to fabricate PCB
- split_print -> keymap and make files to build firmware with QMK
- pics -> pictures of my own build

## Printing Components
For a full build of this keyboard you'll need to print:

- 2 base_v2_single OR  
    - 2 case_v1_left_dovetail
    - 2 case_v1_right_dovetail
- 2 plate_v2 OR
    - 2 plate_v1
- 58 keycap_standard (optional)
- 2 keycap_with_nub (optional, for F and J)
- 2 wrist_rests (optional)

If you have a large enough build area on your printer, use the rev2 case components and you'll have a better build experience. 

General Notes:

- Remember to *hollow out* the wrist rest to your desired thickness or you'll waste a lot of material.
- I found the case parts print best with support structures interfacing mainly with the bottom face of the case. The flat bottom face is much easier to sand than the interior of the case.
- The keycaps print better with the stem pointing toward the build plate. This provided for a smooth typing surface and helps keep the stem from warping.
- A quick rub-down with some mineral oil can help give the parts a nice finish after sanding.

REV1 NOTE:

I printed the rev1 build with a MSLA resin printer (Elegoo Mars), which has a restricted build volume of 120mm x 68mm x 155mm. To fit the components in the space, I had to get creative with part positioning and split the case into the two halves that will be joined later. Maybe I got a little too creative... I neglected any tolerance in the dovetails and ended up sanding the tolerance into the dovetails so the two parts could fit cleanly. I don't recommend this version of the case unless it's the only version that fits on your printer.

## Printing PCBs
Okay so you probably won't be printing this PCB yourself, but it also shouldn't be expensive to order it from one of the many fabrication shops. I used [JLCPCB](https://jlcpcb.com) because they linked directly from [EasyEDA](https://easyeda.com), the design software I used to create the layout. In all 10 boards cost me less than $30, but your mileage may vary. **You'll need 2 PCBs total**, one for each half of the keyboard.

## Other Hardware
The build obviously requires more hardware and electrical components than I can provide in this repo. You'll need a **soldering iron** for the electrical components, but I'm assuming you already have one. Here are the other necessary components with the respective DigiKey, McMaster-Carr, etc part I used:

- (2) Bit-C [nullbits.co/bit-c](https://nullbits.co/bit-c/) or any equivalent [Pro Micro](https://www.sparkfun.com/products/12640)
- (2) IC Sockets (optional) [ICS-624-T](https://www.digikey.com/en/products/detail/adam-tech/ICS-624-T/9832867)
- (2) Reset Buttons [TS02-66-55-BK-160-LCR-D](https://www.digikey.com/en/products/detail/cui-devices/TS02-66-55-BK-160-LCR-D/15634374)
- (4) 12pos 1 row headers for Pro Micro [DK# 2057-PH1-12-UA-ND](https://www.digikey.com/product-detail/en/adam-tech/PH1-12-UA/2057-PH1-12-UA-ND/9830395)
- (4) 4.7kOhm Resistors, for pullup on I2C [DK# S4.7KCACT-ND](https://www.digikey.com/product-detail/en/stackpole-electronics-inc/RNMF14FTC4K70/S4.7KCACT-ND/2617510)
- (2) TRRS Jacks [DK# CP-43515TS-ND](https://www.digikey.com/product-detail/en/cui-devices/SJ-43515TS/CP-43515TS-ND/368147)
- (60) 1N4148 Diodes [DK# 1N4148FS-ND](https://www.digikey.com/product-detail/en/on-semiconductor/1N4148/1N4148FS-ND/458603)
- (8) M3 x 0.5mm thread 12mm long standard pan-head screw [MMC# 91200A118](https://www.mcmaster.com/catalog/91200A118)
- (8) M3 x 0.5mm thread nut [MMC# 91828A211](https://www.mcmaster.com/catalog/91828A211)

You'll need a **USB-C cable** to connect the left half to the computer and a **TRRS cable** to connect the two halves of the keyboard. I recommend a right-angled USB cable since the microcontroller is sideways on the PCB, and a coiled TRRS cable. These can be found at most electronics stores or Amazon.

You may also want rubber feet on the bottom of the keyboard and wrist rests. I recommend clear picture bumpers because they're cheap and provide decent grip on most desk surfaces.

## Keyswitches?
Oh yeah, your keyboard won't work without keyswitches. But If you're going to all this effort, you probably knew that. If you know what you're doing,  be sure to get **60 Cherry Mx-style, plate-mount switches**. Note if you want to try the chiclet keycaps, I only tested them with the standard cherry stem; I can't guarantee they will work with box or similar switch stems. Also the PCB doesn't support any RGB, sorry gamers.

If you're less familiar with keyswitches, I suggest grabbing a keyswitch tester and checking out [this switch intro article](https://www.keyboardco.com/blog/index.php/2012/12/an-introduction-to-cherry-mx-mechanical-switches/) to get an idea of what you will want.

I used Cherry Mx Black switches for this build and am partial to Cherry Mx Clear switches, but you can never go wrong with the standard Cherry Mx Blue, Cherry Mx Browns, or any Cherry-style clones for the tactility you prefer. If you want to go that extra mile, grab some Krytox lube and find a tutorial on how to lubricate the switches. It takes time and some patience, but your fingers will appreciate it.

## Building Keyboard
Once you have all the components, I suggest following this order to assemble the keyboard for the easiest build. Going forward, the "Designed By" label will signify the top of the PCB:

1. Solder the hotswap sockets to the pads on the bottom of the PCB. I recommend adding a small amount of solder to the pad before laying the socket down.
2. Solder 30 of the diodes into the through-holes in the top right section of the PCB. The diodes should be on the top, with the legs going through to the bottom. Be sure to orient each diode so the cathode (side with the black ring) is pointed away from the keyswitch area.
3. Solder the TRRS jack to the 5 through-holes to the left of the diode array. You can use electrical tape to hold it flat to the PCB while you solder.
4. Solder the reset button below the TRRS jack. I had to straighten the legs with pliers before they would fit into the holes.
5. Solder two 4.7k resistors to the left of the TRRS jack. Orientation doesn't matter, but I like to match the direction of the colored rings so it looks nice.
6. Solder headers to the Pro Micro and solder it (or the IC Socket) to the top-left of the PCB so the USB port is pointing away from the diodes. If you are using the IC Socket, you can stick the headers in the socket to stabilize them while soldering them to the Pro Micro.
7. Place the top plate onto the PCB and snap in 30 switches onto the board. Be careful that you don't bend the legs of the switches doing this.
8. For rev2 builds, you can proceed to bolt the plate onto the base. For rev1 builds, see these additional notes:
    - Assemble the case by sliding the dovetails of a right and left half together. I needed to sand the dovetails to fit because of warping in the printing process. You can adhere the pieces with super glue. Fill any remaining gaps with resin from your printer, wiping the surface clean around them, and curing under a UV lamp for a more permanent hold.
    - Due a limitation of my original design, you will also need to file a space on the case for the TRRS jack since it fits below the edge of the base. Check the diameter of your TRRS cable and be sure to file enough to accomodate the jack and whatever cable you have chosen to use.


## Building Firmware
Once the keyboard is built, you'll need to program it. To use the keymap I've included, you'll need to setup the [QMK Firmware project](https://github.com/qmk/qmk_firmware) to build and flash the firmware to your Bit-C or Pro Micro. Once this is done, you'll need to manually copy the layout and config files to the appropriate location in qmk_firmware:

1. Copy the split_print folder to /qmk_firmware/keyboards

2. Build the firmware in /qmk_firmware:

```qmk compile -kb split_print -km default```


3. Flash the firmware in /qmk_firmware to each keyboard half:

```qmk flash -kb split_print -km default ```

If you want to modify the keymap.c for your own custom layout, checkout the [QMK keycodes](https://beta.docs.qmk.fm/using-qmk/simple-keycodes/keycodes_basic) so you know what to add into the keymap.

## Areas of Improvement
This will be an evolving project with each keyboard I build, so I'm tracking things to address in future builds below.

- Ergonomics could be a greater consideration, with the case angled in whatever direction necessary to improve the typing experience.
