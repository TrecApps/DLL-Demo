# DLL-Demo

This repo is intended to demonstrate the use of DLLs that export classes to projects that declare them as a dependency.

This solution is referenced in the *Programming Dunce* YouTube Video: https://youtu.be/_4t6yvnSrwc

Basically, for projects that use a DLL, you need to update three settings:

1. Library Directories
2. Include Directories
3. Additional Dependencies

## Important settings to know (Note: that these settings should already be set)

### Important Settings for the HighLibrary

The *HighLibrary* is a DLL that uses LowLibrary as a dependency. 

![Directories for High Library](https://github.com/TrecApps/DLL-Demo/blob/master/Pictures/High%20Library%20directories.PNG)

Because the Projects start in the same directory, i.e. the root directory of the solution (and repo), it is easy to refer to the directories via a Releative directory path.

The Include directories are where to find the source files for the library and the Library Directories are where to find the .lib file.

Now, to use the .lib file from the LowLibrary:

![Dependency for the HighLibrary](https://github.com/TrecApps/DLL-Demo/blob/master/Pictures/High%20Library%20Dependencies.PNG)

Clicking on this field should give you this window:

![Dependency Window for High Library](https://github.com/TrecApps/DLL-Demo/blob/master/Pictures/High%20Library%20Lib.PNG)

### Important Settings for the App

The Console app uses the High Library directly. Because files in the *HighLibrary* reference those in the *LowLibrary*, you need to reference them both:

![Directories for the App](https://github.com/TrecApps/DLL-Demo/blob/master/Pictures/App%20Directories.PNG)

Like before, you need to add an additional dependency. Because the App doesn't use the *LowLibrary* directly, you merely need to list the *HighLibrary*.

![Dependency for the App](https://github.com/TrecApps/DLL-Demo/blob/master/Pictures/App%20Dependencies.PNG)
