# setup
## heads up
This template is using SDL2 as a backend for everything

Archeus is still well within its infanicy, and as such I would advise against installing it as a cmake package. This template is extreemly likely to change, so please keep that in mind if you decide to try archeus out.

The C archeus lib is a bit more set, and anything with documentation is less likely to change, though the C++ overlay is extreemly volatile. the config class has comments for multithreading (I'll get around to fixing that up one of these days), while I will probs delete the sprite and entity classes.

## what is archeus?
I plan to keep working on archeus as it is a passon project. archeus put simply is a game engine. Though at this stage it is more like a game framework. I plan to have vulkan and opengl as part of rendering options you can choose from. There are global headers which contain functions that at some point in the probably distant future will run regardless of the backend you have chosen, so if you say `ARC_Sprite_Render(...)` it will render a 2d sprite in sdl, opengl, volkan, or in a package that you create if you want to

## linux setup
Using your distro's package manager please install `SDL2, SDL2_image, SDL2_ttf, and SDL2_mixer`, then clone the project (or however you do that with a template), and you should be able to build easily. If you run into any trouble please let me know on discrod my username is `herbglitch`. (I'll update this when I create a matrix account and figure out that software).

## windows setup
I suggest using msys2 for this. Please install msys2 (if you don't know which option I would suggest using the UCRT version cuz that is what they have you install on the homepage). then please install `SDL, SDL2_image, SDL2_ttf, SDL2_mixer, gdb, make (or ninja)` all for your selected version of mingw. And please make sure that version of mingw is added to your path. Then clone the proejct, and you should be able to build it with cmake (fingers crossed though as windows hates me and I develop on linux, so there might be some issues if the engine gets updated. thoguh I try to only update archeus' main branch with versions I have tested and got working on my windows vm).

# documentation
The archeus c lib is mostly documented using doxygen. I plan on putting the docs up on archeus.io when I feel like the engine is ready for an alpha release

I am still trying to figure out how to document c++ in a way that makes sense to me (I'll be using doxygen as well). When I figure that out and solidfy the cpp overlay I'll work on getting documentation added. Documentation is extreemly important to me, so it will be added when the program is a bit more fleshed out.