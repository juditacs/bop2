# Basics of Programming 2

We'll be using Github Classroom for remote assignment handling.

# Setting up Github access

You'll need push access to your own repositories. I recommend [setting up an
SSH
connection](https://help.github.com/en/github/authenticating-to-github/connecting-to-github-with-ssh).

# Using git via command line

Since you only need basic git commands, the easiest way is to use git via the
command line (Linux/OSX terminal, Windows Powershell, Git BASH). You are free
to use a git client such as Git Extensions.

The most helpful command is `git status`. I recommend using it often and
reading its full output.

Git works through **commits**. A git commit is a collection of changes that you
want to insert into the repository.

Git has three levels:

1. the **working directory** contains your local changes (saved files)
1. the **staging area** contains the changes you want to add to the repository.
   These changes can include new files, modifications of existing files, file
   deletions and file moving (renaming). The staging area is used for preparing
   the next commit. Whatever is in this area, will be included in the next
   commit.
1. the **repository** contains all history that is actually under version
   control.

The standard steps of version controlling your changes is:

    git add MySuperSource.cpp MyOtherSource.cpp
    git commit -m "meaninful commit message"

At this point your changes should be under version control.

**IMPORTANT** these are local changes at the moment. You need to push them to
Github by using `git push`

# Using Github Classroom

Each assignment has an invitation URL that will be announced via Microsoft Teams.

1. Click on the assignment invitation URL and choose your name from the student
   list. This will create your own assignment repository, its name will be:
   `youruser/assignment-youruser`
1. Clone the repository to your local computer. You can find the clone url on
   the repository page (Clone or Download - Green button on the right). Do not
   use Download, get used to cloning the repository. You'll thank me later.
1. Solve the assignment.
1. Add your modification to the git repo (see previous section).
1. Push your changes. The last commit before the deadline will be considered
   your submission. You are free to commit/push multiple times before the
   deadline.

# Old stuff

This repository contains starter code and other supplementary material for the
[Basics of Programming 2](https://www.aut.bme.hu/Course/bop2) laboratory class.

## Git usage

You need to clone the repository for the first time by running:

    git clone https://github.com/juditacs/bop2.git

After this you can pull the newest changes by entering the directory and
running `git pull`.

    cd path/to/directory
    git pull

You can learn more about git [here](https://git-scm.com/book/en/v2) and
[here](https://try.github.io/).

## Using files from this repo in a Visual Studio project

One easy way to use files from this repository in a VS Project is to create and
empty C++ project and add the source files one by one. You can do this by right
clicking on Source Files and choosing Existing File from the Add menu.

