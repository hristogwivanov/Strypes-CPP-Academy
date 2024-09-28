# Linux commands

1. Създайте празната директория day1. Създайте празните файлове test1, test2, test3<br />

<font color="green">mkdir day1<br /> 
ls<br /> 
cd day1<br /> 
touch test{1..3}<br /> 
ls</font><br />

2. Сложете текстовете:<br />
- "Hello Bash" във файла test1<br />

<font color="green">echo "Hello Bash" > test1</font><br />

- текущата дата във файла test2<br />

<font color="green">date > test2</font><br />

- името на текущата директория във файла test3.<br />

<font color="green">basename "$(pwd)" > test3</font><br />

3. В директорията day1, създайте директорията testDir. Копирайте в нея файловете test1, test2, test3.<br />

<font color="green">mkdir testDir<br /> 
cp test{1..3} testDir<br /> 
ls<br /> 
cd testDir<br /> 
ls</font><br />

4. В директорията testDir, създайте директорията testNested. В нея - копирайте файловете test1, test2.<br />

<font color="green">mkdir testNested<br /> 
cp test{1..2} testNested<br /> 
cd testNested<br /> 
ls</font><br />

5. Изтрийте файловете test1,test2,test3 от директорията day1.<br />

<font color="green">../..<br /> 
rm test{1..3}<br /> 
ls</font><br />

6. В директорията day1 - копирайте цялото съдържание на директорията testDir в новата директория testDirCopy.<br />

<font color="green">mkdir testDirCopy<br /> 
cp -r testDir/* testDirCopy<br /> 
cd testDirCopy<br /> 
ls<br /> 
cd testNested<br /> 
ls</font><br />

7. Докато се намирате в директорията day1, изтрийте файла test1 (от директорията testDir).<br />

<font color="green">cd ../..<br /> 
rm testDir/test1<br /> 
cd testDir<br /> 
ls</font><br />

8. Изтрийте цялото съдържание на директорията testDirCopy.<br />

<font color="green">cd ..<br /> 
rm -r testDirCopy/*<br /> 
cd testDirCopy<br /> 
ls</font><br />
