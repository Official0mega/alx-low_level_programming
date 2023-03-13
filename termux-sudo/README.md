 # termux-sudo
A bash script that provides sudo for Termux  
Termux is a terminal emulator and Linux environment for Android

**Note**

termux-sudo was originally hosted on GitHub.  
Due to the fact that Microsoft is purchasing GitHub, I have decided to move it here.

**Requirements**

Rooted phone with su binary  
SUDO WILL NOT WORK WITHOUT SU

**Installing sudo**

1. Clone termux-sudo or download to phone and extract
2. Open Termux
3. Install a dependency needed for sudo:
   ```pkg install ncurses-utils```
4. Change to cloned or extraction directory
5. Execute the following commands to place sudo into the correct directory with the proper permissions and ownership

```
cat sudo > /data/data/com.termux/files/usr/bin/sudo
chmod 700 /data/data/com.termux/files/usr/bin/sudo
```

**Features**

- Sets up its environment automatically on first run, no need to do anything but use it
- Creates a root folder ```.suroot``` in the Termux home folder with proper root permissions and ownership
- Creates ```.bashrc``` file in root folder with proper PATH and LD_LIBRARY_PATH variables set so all binaries function correctly
- Bash prompt PS1 variable is also set so you don't have ```bash-4.4#``` as prompt just ```#```
- Automatically creates ```.bash_history``` in root folder when you drop to a root shell so root shell history is preserved
- Can be used like ordinary sudo (but only as root, no other user)
- Can drop to root shell ```sudo su [-]```
- Runs built in Termux binaries and exteral binaries with optional arguments as root in current directory
- Generates output in shell currently using
- Can be used in other bash scripts
- [option] Can turn off colored error messages be editing the variable ```colored``` at the beginning of sudo file

```
Usage:

sudo su [-]  
  Drop to root shell

sudo <command> [<args>]  
  Run command as root with optional arguments
```
