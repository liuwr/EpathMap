//
//  EpathmapViewController.m
//  EapthMap
//
//  Created by liuwr1992@163.com on 12/27/2018.
//  Copyright (c) 2018 liuwr1992@163.com. All rights reserved.
//

#import "EpathmapViewController.h"
#import <EpathmapSDK/EpathmapSDK.h>
#define MapId @"kF8icl6NYW"//南证商务中心
@interface EpathmapViewController ()

@end

@implementation EpathmapViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    self.view.backgroundColor = [UIColor whiteColor];
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.backgroundColor = [UIColor redColor];
    btn.frame = CGRectMake(15, 150, [UIScreen mainScreen].bounds.size.width-30, 50);
    [btn setTitle:@"前往“南证商务中心”>>" forState:UIControlStateNormal];
    [btn addTarget:self action:@selector(btnClick) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:btn];
}

-(void)btnClick
{
    EpathMapViewController *vc = [[EpathMapViewController alloc] initWithMapId:MapId];
    UINavigationController *nav = [[UINavigationController alloc]initWithRootViewController:vc];
    [self presentViewController:nav animated:YES completion:nil];
    //    [self.navigationController pushViewController:vc animated:YES];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
