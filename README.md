# ReasonML

# Follow the following steps 
1. Create a folder and run "npm i bs-platform -g"
2. Go to that folder and run "bsb init <project name> -theme basic-reason" and this will create the folder structure for you.
3. If you are using VS Code then you can install "reason-vscode" extension 1.7.7 to start with.


# How to build and run the project
1. Go to your project folder and run "bsb -make-world".
2. After running step 1 , you will see that bsb has compiled your code (if there is no error) and there is one new file with extension ".bs.js" . For example for "Demo.re" it will generate "Demo.bs.js".
3. Once compilation happen successfully, run node <File name>.bs.js
