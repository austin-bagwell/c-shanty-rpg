# c-shanty-rpg

A text-based adventure written in C

# About The Game

In which we describe the game and how we created it.

# How To Play

## Installation

In which we include important details that will be needed to get and run the code.
Might be as simple as:

- `git clone` the project to get it onto your local machine
- compile the code with your handy dandy C compiler
  - this is `gcc game.c -o game` on my machine - A
- run the code as you would any other C program
  - this is `./game` on my machine - A

## Gameplay

In which we give a brief tutorial on how to actually play the game.

# Design Notes

In which we talk about any relevant things used to create the project. Probably specific to software design (memory management? ASCII art generator? Super powered machine learning models?) but also whatever we want.

## git Workflow

### Common Commands

These are the bare bone basics. Definitely watch some videos and maybe do some reading for more and better detail.

Pull the latest changes from the remote branch into your local branch
`git pull <source, default=origin> <branch>`

Creates a new local branch and switches to it
`git checkout -b <new_branch_name`

Switches to an existing local branch
`git switch <branch_name>`

Add a file that will be tracked for changes and/or track new changes you made
`git add <file_name>`

Create a new commit, with a short but descriptive summary of what the changes are
`git commit -m "<commit_message>"`

Sends your local branch to the remote branch
`git push <source, default=origin> <branch>`

### Common Workflows

This section will describe the series of steps that will need to be done with git commands before adding new code. I'm not really super solid on 'professional' workflows, but some general ideas are below:

- Don't do your work on the main branch. Create new branches to work on changes, new features, bug fixes, whatever. Usually, this means you do something like this:

```
// on main branch
// get any changes from remote main
git pull origin main

// create a new branch
git checkout -b add_new_dialogue

// ./dialouge.c is the path/name of the file you're working on
// write a bunch of new code for dialog
... code ... code ... code ...

// this stages your dialogue changes so you can commit them
git add ./dialogue.c

// the message should summarize what all you did
git commit -m "add new dialogue options for Rat King Roger"


// send your local branch to the remote repo (GitHub). Creates a new branch if one with that name doesn't exist already.
// generally a good idea to keep the name of the remote the same as the name of the local
git push origin add_new_dialogue
```

After you send your new branch off into the interwebs, the next step would be to open a pull request on GitHub. This will let your merge the changes from your new branch into the main branch. It allows you to see any conflicts that may arise due to the changes. Typically, code is reviewed by other team members before it is merged into the main branch.

- Always remember to `git pull` into the main branch before you make any changes. The more accurate thing to say is that you need to make sure that if there may be changes to the 'upstream' branch (like the GitHub repo that lives online) you need to make sure that you have the most recent version available. Pulling remote/main into local/main is pretty common.
