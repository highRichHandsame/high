//
//  Dog.h
//  A1property
//
//  Created by MS on 15-6-2.
//  Copyright (c) 2015年 qf. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Dog : NSObject

@property int age;

//第一组
//nonatomic(不考虑线程安全)/atomic（默认的，考虑线程安全)
@property (nonatomic) int height;

//第二组
//readwrite(默认的)/readonly（只生成getter方法，不生成setter方法）
@property (readonly) int weith;

//第三组(setter和getter改名)
//这一组修饰符是四组里唯一可以共存的一组
@property (setter = setNnnn:, getter = nnnn) int name;

//最后一组（copy,retain,assign）(三种区别只是在setter方法的实现部分不一样，在内存管理方面)
//基础数据类型用assign，字符串用copy，其它（自定义对象，数组，字典）用retain
//理论上在自动内存管理中这一组应该写成strong/weak。但实际上编译器对这块比较松
@property (copy) NSString *job;


//工作中一般会这样用（nonatomic, assign/copy/retain）
@property (nonatomic, assign) float scroll;


@end










