//
//  ASLayoutSpec+FluentChildren.h
//  ASDKFluentExtensions
//
//  Copyright © 2017 Cesar Estebanez Tascon.
//  This software may be modified and distributed under the terms
//  of the MIT license.  See the LICENSE file for details.
//

#import <AsyncDisplayKit/AsyncDisplayKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * @abstract Extension of ASLayoutSpec that enables writting layout code using a fluent API.
 * @discussion Methods of this category will modify the children property of the caller and return 
 * self. This enables a composable idiom for layout and styling code. Since the return value is
 * always an ASLayoutElement, calls to fluent methods can be composed with other calls to create 
 * complex layouts in a very readable style:
 *
 * @code ASStackLayoutSpec
  .vertical()
  .withSpacing(20)
  .withJustifyContent(.center)
  .withChildren([
    topSeparator
      .withFlexGrow(1.0),
    textNode
      .withAlignSelf(.center),
    bottomSeparator
      .withFlexGrow(1.0)
    ])
  .withInset(UIEdgeInsets(top: 60, left: 0, bottom: 60, right: 0))
 *
 */
@interface ASLayoutSpec (FluentChildren)

/**
 * Adds the provided ASLayoutElement's as children of the caller and returns self.
 */
- (instancetype)withChildren:(NSArray<id<ASLayoutElement>> *)children;

@end

NS_ASSUME_NONNULL_END
