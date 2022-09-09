# Converts AR codes for use with the melonDS emulator

This is primarily aimed at the standalone desktop version of the emulator since the RetroArch core version of melonDS uses a different format for the cheats.

All this does is simply converts an AR code that came from RetroArch's cheats folder which would look something like this:

    94000130+FFFB0000+B2000024+00000000+00021A20+0098967F+D2000000+00000000

And turn it into this:

    94000130 FFFB0000
    B2000024 00000000
    00021A20 0098967F
    D2000000 00000000

So it may easily copied and pasted into the melonDS cheats menu

## Where to find the cheats
You likely already have the cheat files if you have RetroArch set up already, but you can make sure by using RetroArch's built-in online updater to download latest the cheats.

If you don't have RetroArch installed, you can get the [latest Libretro database](https://github.com/libretro/libretro-database/releases/latest) which includes the cheat files.
Then once you've downloaded and extracted the database, the files you are looking for are in the cht folder.

However, if you already have them, then the file path is going to vary based on OS and where you installed RetroArch to, but all that matters is that you know where RetroArch's root folder is.

> path_to_retroarch_root/Cheats

In the instance that you are using the Flatpak of RetroArch then it will likely be here:

> /var/lib/flatpak/app/org.libretro.RetroArch/current/active/files/share/libretro/database/cht

Once you are in that folder you can find the cheats folder for the NDS and inside should be a lot of files with the extension ".cht"
After you've found the game's .cht file that you're looking for, simply copy the text of the cheat that you want and paste it into the terminal and hit enter. After you do that, it should give you a nicely formatted AR code that works with the melonDS standalone emulator's cheat menu.

## Why I wrote this?
I'm new to writing C and thought this would be a good thing for me to write for practice so I can get more familiar with the language so I might be able to work on more complex things later on. My code is probably not perfect and I'm always trying to improve.

Another reason is that every time I've personally tried to use the cheats in RetroArch for the melonDS core it hasn't worked, it could have changed now, but I've not tested it recently though there are other reasons to not use the core.
I instead just use the standalone desktop version and copy the codes over to its cheat menu, however it is an annoying task to reformat the codes so that they work (especially the longer codes). 

RetroArch's database has a lot of cheats for games in one easy to access spot which is really nice and saves time instead of looking up the codes elsewhere. 