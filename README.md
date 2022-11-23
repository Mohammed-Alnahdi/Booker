# Booker
Booker - Quick Access Software

## Introduction of The Idea

As definitions from Oxford, Booker is a person employed to engage performers for a theatre or similar. The Idea of this program is comes generate window that shows quick access of launching other program and will exit directlly.

The program easy to config, you just to put the name of program for showing in button and put the command to execute the program. 

## Before Installation

To take full advantage of Booker, you must follow the steps below:

**1)Make Shortcut by Keyboard**

You can run program by dmenu but you connot find it in dashboard inGnome, KDE Plasma, xfce ...etc. you must configure custom shortcut for Booker by add *booker* by lowcase letters.

In additional, if you use WM such as i3 or DWM from suckless, it does not mean you didn't need to make shortcut. Booker made to guick launching and give you quick access without searching in dmenu. 

**2) Make configuration of Button**

After git Booker you must configure button name and what this button will execute. 

***For Example***

You will find in file *config.def.h* look like:

```c++
static char first_program_name[] = "name_app";
static char call_first_program[] = "app";
```

you can change *name_app* to button title that you want, like *VLC Player* for example, and you can change *app* by command that call your program such as *vlc*.

It will look like 

```c++
static char first_program_name[] = "VLC Player";
static char call_first_program[] = "vlc";
```

**3) Install gtk+3 Development Kit**

You couldn't compile the installation without without *gtk3-devel*. You must install it for install. 

## Installation

**1) Git The Repository**

Ofcource you make this step to install Booker. and you run the command 

```bash
git clone https://github.com/Mohammed-Alnahdi/Booker.git
```

**2) Make The Configration**

As mentioned above, you must configre your button and app in *config.def.h* file then run the command:

```bash
sudo cp config.def.h config.h
```

**3) Install the application**
to install you can run command 

```bash
sudo make install
```

> if you want uninstall run:

```bash
sudo make uninstall
```

### License
[MIT](https://opensource.org/licenses/MIT)

