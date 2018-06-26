try.github.io [codeschool]

Git allows groups of people to work on the same documents (often code) at the same time, and without stepping on each other's toes. It's a distributed version control system.

Our Terminal is currently in a directory we want to use (octobox)
To Initialize a Git repository, type:

1. "git init"

(octobox) directory now has an empty reposityory in /.git/ The repository is a hidden directory where Git operates

2. "git status"       [command to seee what the current state of our project is]

Added a new file to the directory. 'git status' shows 'untracked files'

3. "git add <file>"

Git is now tracking the file. file is now in the 'Staging Area' and isn't in the repository yet. yo ucan add or remove files from the stage before storing them in the repository.

4. "git commit -m "Add Cute File""

Stores our staged changes with a message [-m] describing what we've changed

5. "git add '*.txt'""

This adds all text files in your directory to the Staging Area

6. "git commit -m 'Add all the other text files'"

7. "git log"

Type git log to view all changes you've committed so far, in the order they were committed.

To push our local repo(sitory) to the GitHub server we'll need a remote repository "origin"

8. "git remote add origin https://github.com/try-git/try_git.git"

The push command tells git where to put your commits when ready. 

9. "git push -u origin master"

The name of the remote repo is "origin" and the default local branch name is "master". "-u" tells Git to remember the parameters, so the next time you can simply run "git push"


Let's pretend some time ahs passed. We've invited other people to our GitHub project who have pulled your changes, made their own commits, and pushed them. We can check for changes on our GitHub repository and pull down any new changes by running:

10. "git pull origin master"

Take a look at what is different from your most recent commit, which can be referred to as the HEAD pointer.

11. "git diff HEAD"

12. "git diff --staged

13. "git reset <file>"

'reset' unstages files.

14. "git checkout -- <file>"

Files can be changed back to how they were at the last commit by using 
    checkout -- <target>
    
BRANCHING
When Devs are working on a feature or bug they'll often create a copy (aka "branch") of their code they can make separate commits to. Then when they're done they can merge this branch back into their main "master" branch.

15. "git branch clean_up"

creates a branch off of Main called "clean_up"

16. "git branch "

You'll see your two local branches. "clean_up" and "master"

17. "git checkout clean_up"

switch branches using the "git checkout <branch>" command

18. "git rm '*.txt'" removes all .txt files

19. "git commit -m 'remove all .txt" commit changes

20. "git checkout master" switch back to master branch

21. "git merge clean_up" Preparing to merge clean_up and master branch

22.  "git branch -d clean_up" deletes the clean_up branch

23. "git push"

push everything you've been working on to your remote repo!