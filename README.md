# Note: Currently being updated for Pro Micro. PCB is done, but a new keyboard case is necessary

# Split-Print
This is a split, top-mounted, ortholinear keyboard I built to use with QMK firmware and the Pro Micro compatible Bit-C. This repo contains step files for the keyboard case, gerber files for the PCB, and the keymap I'm currently using. Read further for building instructions, parts list, and tips I recommend while building this keyboard.

## Repo Contents
Here's a quick breakdown of what you'll find here:

+ 3D print models
    + case
        - base_hotswap_v*.stl -> single case base, version number might vary
        - plate_hotswap_v*.stl -> switch plate, version number might vary
    + misc
        - keycap_standard.stl -> custom cherry chiclet keycap (I don't recommend using these)
        - keycap_with_nub.stl -> same as keycap_standard but with F and J nub to identify home row
        - wrist_rest.stl -> optional wrist rest
- split_print -> keymap and make files to build firmware with QMK
- pics -> pictures of my own build
- Keyboard_pcb_gerber.zip -> all necessary gerber files to fabricate PCB

## Printing Components
For a full build of this keyboard you'll need to print:

- 2 base_hotswap_v*
- 2 plate_hotswap_v*
- 2 wrist_rests (optional)
- 58 keycap_standard (optional, not recommended)
- 2 keycap_with_nub for F and J keys (optional, not recommended)

General Notes:

- Remember to *hollow out* the wrist rest to your desired thickness or you'll waste a lot of material.
- I found the case parts print best with support structures interfacing mainly with the bottom face of the case. The flat bottom face is much easier to sand than the interior of the case.
- The keycaps print better with the stem pointing toward the build plate. This provided for a smooth typing surface and helps keep the stem from warping.
- If you don't intend to paint them, quick rub-down with some mineral oil can help give the parts a nice finish after sanding.

## Printing PCBs
Okay so you probably won't be printing this PCB yourself, but it also shouldn't be expensive to order it from one of the many fabrication shops. I used [JLCPCB](https://jlcpcb.com) because they linked directly from [EasyEDA](https://easyeda.com), the design software I used to create the layout. In all 10 boards cost me less than $30, but your mileage may vary. **You'll need 2 PCBs total**, one for each half of the keyboard.

## Electronics and Other Hardware
The build obviously requires more hardware and electrical components than I can provide in this repo. You'll need a **soldering iron** for the electrical components, but I'm assuming you already have one. Here are the other necessary components with the respective DigiKey, McMaster-Carr, etc part I used:

- (2) Bit-C [nullbits.co/bit-c](https://nullbits.co/bit-c/) or any equivalent [Pro Micro](https://www.sparkfun.com/products/12640)
- (2) IC Sockets (optional) [ICS-624-T](https://www.digikey.com/en/products/detail/adam-tech/ICS-624-T/9832867)
- (4) 12pos 1 row headers for Pro Micro [DK# 2057-PH1-12-UA-ND](https://www.digikey.com/product-detail/en/adam-tech/PH1-12-UA/2057-PH1-12-UA-ND/9830395)
- (2) Reset Buttons [TS02-66-55-BK-160-LCR-D](https://www.digikey.com/en/products/detail/cui-devices/TS02-66-55-BK-160-LCR-D/15634374)
- (4) 4.7kOhm Resistors, for pullup on I2C [DK# S4.7KCACT-ND](https://www.digikey.com/product-detail/en/stackpole-electronics-inc/RNMF14FTC4K70/S4.7KCACT-ND/2617510)
- (2) TRRS Jacks [DK# CP-43515TS-ND](https://www.digikey.com/product-detail/en/cui-devices/SJ-43515TS/CP-43515TS-ND/368147)
- (60) 1N4148 Diodes [DK# 1N4148FS-ND](https://www.digikey.com/product-detail/en/on-semiconductor/1N4148/1N4148FS-ND/458603)
- (8) M3 x 0.5mm thread 12mm long standard pan-head screw [MMC# 91200A118](https://www.mcmaster.com/catalog/91200A118)
- (8) M3 x 0.5mm thread nut [MMC# 91828A211](https://www.mcmaster.com/catalog/91828A211)

You'll need a **USB-C cable** to connect the left half to the computer and a **TRRS cable** to connect the two halves of the keyboard. I recommend a right-angled USB cable since the microcontroller is sideways on the PCB, and a coiled TRRS cable. These can be found at most electronics stores or Amazon.

You may also want rubber feet on the bottom of the keyboard and wrist rests. I recommend clear picture bumpers because they're cheap and provide decent grip on most desk surfaces.

## Keyswitches? Keycaps?
Oh yeah, your keyboard won't work without keyswitches. But If you're going to all this effort, you probably knew that. If you know what you're doing,  be sure to get **60 Cherry Mx-style, plate-mount switches**. Note if you want to try the chiclet keycaps, I only tested them with the standard cherry stem; I can't guarantee they will work with box or similar switch stems. Also the PCB doesn't support any RGB, sorry gamers.

If you're less familiar with keyswitches, I suggest grabbing a keyswitch tester and checking out [this switch intro article](https://www.keyboardco.com/blog/index.php/2012/12/an-introduction-to-cherry-mx-mechanical-switches/) to get an idea of what you will want. It's important to determine the tactility you prefer ahead of buying an entire set of switches, although the hotswap sockets in this board make it easier to replace them in the future.

I used linear Gateron Black switches for this build and have tactile "Holy Panda"-style switches in my work keyboard. If you want to go that extra mile, grab some Krytox 205G0 lubricant and find a tutorial on how to lube the switches. It takes time and some patience, but your fingers will appreciate it.

You'll also need keycaps, but I'll let you explore this. These are incredibly subjective since they'll help drive the aesthetic and sound of the board. I recommend [reading a guide on keycaps](https://switchandclick.com/ultimate-guide-to-picking-a-keycap-set-for-your-mechanical-keyboard/) to better understand how the shapes and materials affect the typing experience. 

## Building Keyboard
Once you have all the components, I suggest following this order to assemble the keyboard for the easiest build. Going forward, the "Designed By" label will signify the top of the PCB:

1. Solder the hotswap sockets to the pads on the bottom of the PCB. I recommend adding a small amount of solder to the pad before laying the socket down.
2. Solder 30 of the diodes into the through-holes in the top right section of the PCB. The diodes should be on the top, with the legs going through to the bottom. Be sure to orient each diode so the cathode (side with the black ring) is pointed away from the keyswitch area.
3. Solder the TRRS jack to the 5 through-holes to the left of the diode array. You can use electrical tape to hold it flat to the PCB while you solder.
4. Solder the reset button below the TRRS jack. I had to straighten the legs with pliers before they would fit into the holes.
5. Solder two 4.7k resistors to the left of the TRRS jack. Orientation doesn't matter, but I like to match the direction of the colored rings so it looks nice.
6. Solder headers to the Pro Micro and solder it (or the IC Socket) to the top-left of the PCB so the USB port is pointing away from the diodes. If you are using the IC Socket, you can stick the headers in the socket to stabilize them while soldering them to the Pro Micro.
7. Place the top plate onto the PCB and snap in 30 switches onto the board. Be careful that you don't bend the legs of the switches doing this.
8. Put plate half onto the case and bolt them together. 


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

- Ergonomics could be a greater consideration, with the case angled to improve the typing experience. I'm toying with printable tenting pieces that could adjust the typing angle. A metal plate in the case and magnets embedded in the printable tent accessories could make this easily customizable.
