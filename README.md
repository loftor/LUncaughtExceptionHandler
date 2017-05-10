# LUncaughtExceptionHandler
实现异常捕获

# 引用方式
pod 'LUncaughtExceptionHandler', :git => 'https://github.com/loftor/LUncaughtExceptionHandler.git', :tag => 'v1.0'

# 使用方式

```objc
  InstallUncaughtExceptionHandler().exceptionBlock = ^(NSException * exception,BOOL * finished){
        UIAlertController *alertController = [UIAlertController alertControllerWithTitle:@"抱歉，程序出现了异常" message:@"\n如果点击继续，程序有可能会出现其他的问题，建议您还是点击退出按钮并重新打开\n" preferredStyle:UIAlertControllerStyleAlert];
        
        UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"退出" style:UIAlertActionStyleCancel handler:^(UIAlertAction * _Nonnull action) {
            *finished = YES;
        }];
        [alertController addAction:cancelAction];
        
        UIAlertAction *continueAction = [UIAlertAction actionWithTitle:@"继续" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
        }];
        [alertController addAction:continueAction];
        
        [self.window.rootViewController presentViewController:alertController animated:YES completion:nil];
    };
```