Note:
the CMake version I used is 3.30-rc3, you may try your own version.
Atleast v3.11 is required for "FetchContent" that I use to get sfml from github but it doesn't support VS22 so I wasn't able to test if it works. Cheers!

Problem:
 I discovered my SFML (and other c++ projects) don't work out of the box on other machines.

Plan of Action:
 Learn about makefiles, CMake
 Create a system such that my executable can be up and running with minimal effort on another pc.
 Also learn how to, so that I can solve this problem on any project.

Why such a weird project structure? main.cpp didn't need to be this far inside!
 I am learning this to organize another project and have it running on any pc. I just wanted to experiment enough to fail & learn more, and not follow tutorials to the T.