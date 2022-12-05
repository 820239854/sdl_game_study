

```bash
mkdir build
cmake -S . -B build
```

入口函数必须写成

```c
int main(int argc, char * argv[])
```

项目属性-配置属性-链接器-系统：子系统（选控制台 (/SUBSYSTEM:CONSOLE)或 窗口 (/SUBSYSTEM:WINDOWS)）

>  <SubSystem>Console</SubSystem> 改成  <SubSystem>Windows</SubSystem>

