Задача 1:

Linux commands
1. Създайте празната директория day1. Създайте празните файлове test1, test2, test3

mkdir day1
ls
cd day1
touch test{1..3}
ls


2. Сложете текстовете:
- "Hello Bash" във файла test1 

 echo "Hello Bash" > test1

- текущата дата във файла test2

date > test2

- името на текущата директория във файла test3.

basename "$(pwd)" > test3

3. В директорията day1, създайте директорията testDir. Копирайте в нея файловете test1, test2, test3.

mkdir testDir
cp test{1..3} testDir
ls
cd testDir
ls

4. В директорията testDir, създайте директорията testNested. В нея - копирайте файловете test1, test2.

mkdir testNested
cp test{1..2} testNested
cd testNested
ls

5. Изтрийте файловете test1,test2,test3 от директорията day1.

../..
rm test{1..3}
ls

6. В директорията day1 - копирайте цялото съдържание на директорията testDir в новата директория testDirCopy.

mkdir testDirCopy
cp -r testDir/* testDirCopy
cd testDirCopy
ls
cd testNested
ls

7. Докато се намирате в директорията day1, изтрийте файла test1(от директорията testDir)

cd ../..
rm testDir/test1
cd testDir
ls

8. Изтрийте цялото съдържание на директорията testDirCopy

cd ..
rm -r testDirCopy/*
cd testDirCopy
ls