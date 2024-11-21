# JUCE Template
This is a Juce template made to streamline the process.

`modules/JUCE` holds the JUCE library as a git submodule. It's in 
```
rm -rf modules/
git init
git submodule add https://github.com/juce-framework/juce modules/JUCE # If you want to change the path, change the path on line 9 of your CMakeLists.txt as well.
git add .gitmodules modules/JUCE
git commit -m "message"
git remote add origin <your-new-repo-url>
git push -u origin main
```
