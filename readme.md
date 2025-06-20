## Note 
This is morning shift git demo 

```bash 
git init 

git add . 
git status

git commit -m "message" 

# git repo = repository 


# to see your origin ( repository url )
git remote show origin 
git remote -v 

# to add origin (git repo url )
    # to create url, we will need to create github project 
gh auth status
gh auth login # login into github account 
gh auth logout # logout 


gh repo create sampleproject-gitdemo-morning  --public
git remote add origin url 


# git branch (different version of git project )


git branch 
git branch development 
git checkout development 
# modify your project and push your code 

# keoKAY


git pull 
git pull origin branch-name 

# check status of your git 
git status


git stash 
git stash list 
git stash pop # unstash
git stash apply stash-id 
```