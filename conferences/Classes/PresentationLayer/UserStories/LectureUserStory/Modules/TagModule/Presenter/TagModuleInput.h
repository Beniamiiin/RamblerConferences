// Copyright (c) 2015 RAMBLER&Co
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>
#import <ViperMcFlurry.h>

@protocol TagModuleOutput;
@class TagModuleConfig;

@protocol TagModuleInput <RamblerViperModuleInput>

/**
 @author Golovko Mikhail

 Метод инициирует стартовую конфигурацию текущего модуля
 */
- (void)configureModuleWithModuleConfig:(TagModuleConfig *)moduleConfig
                           moduleOutput:(id <TagModuleOutput>)moduleOutput;

/**
 @author Golovko Mikhail
 
 Метод обновляет модуль для поиска по тексту.
 
 @param searchText Текст поиска.
 */
- (void)updateModuleWithSearchText:(NSString *)searchText;

/**
 @author Golovko Mikhail
 
 Метод отображает кнопку добавить тег
 */
- (void)showAddButton;

/**
 @author Golovko Mikhail
 
 Метод скрывает кнопку добавить тег
 */
- (void)hideAddButton;

/**
 @author Golovko Mikhail
 
 Метод добавляет тег
 
 @param name Имя тега
 */
- (void)addTagWithName:(NSString *)name;

@end