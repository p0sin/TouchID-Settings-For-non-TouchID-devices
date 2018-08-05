/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSRow : NSObject <_UISettingsKeyPathObserver> {
    PTSRowAction * _action;
    int  _allowedEditingTypes;
    NSPredicate * _condition;
    _UISettings * _groupChild;
    NSString * _groupKeyPath;
    NSString * _imageKeyPath;
    NSHashTable * _observers;
    PTSSection * _section;
    _UISettings * _settings;
    UIImage * _staticImage;
    NSString * _staticTitle;
    NSString * _titleKeyPath;
    id /* block */  _valueFormatter;
    NSString * _valueKeyPath;
    id /* block */  _valueValidatator;
}

@property (nonatomic, copy) PTSRowAction *action;
@property (nonatomic) int allowedEditingTypes;
@property (nonatomic, copy) NSPredicate *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _UISettings *groupChild;
@property (nonatomic, retain) NSString *groupKeyPath;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *imageKeyPath;
@property (nonatomic) PTSSection *section;
@property (nonatomic, retain) _UISettings *settings;
@property (nonatomic, retain) UIImage *staticImage;
@property (nonatomic, copy) NSString *staticTitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *titleKeyPath;
@property (nonatomic, retain) id value;
@property (nonatomic, copy) id /* block */ valueFormatter;
@property (nonatomic, copy) NSString *valueKeyPath;
@property (nonatomic, copy) id /* block */ valueValidatator;

// Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools

+ (id)row;
+ (id)rowWithTitle:(id)arg1 valueKeyPath:(id)arg2;

- (void).cxx_destruct;
- (void)_sendImageChanged;
- (void)_sendTitleChanged;
- (void)_sendValueChanged;
- (id)action;
- (id)action:(id)arg1;
- (void)addObserver:(id)arg1;
- (int)allowedEditingTypes;
- (id)allowedEditingTypes:(int)arg1;
- (BOOL)allowsDelete;
- (BOOL)allowsDuplicate;
- (BOOL)allowsReorder;
- (BOOL)allowsShare;
- (id)childSettingsForKeyPath:(id)arg1;
- (id)concreteCopyWithIndex:(unsigned int)arg1;
- (id)condition;
- (id)condition:(id)arg1;
- (id)conditionFormat:(id)arg1;
- (void)dealloc;
- (id)group;
- (id)groupChild;
- (id)groupKeyPath;
- (id)groupKeyPath:(id)arg1;
- (id)image;
- (id)imageKeyPath;
- (id)imageKeyPath:(id)arg1;
- (id)init;
- (void)removeObserver:(id)arg1;
- (void)resolveTemplatesWithIndex:(unsigned int)arg1;
- (Class)rowTableViewCellClass;
- (id)section;
- (void)setAction:(id)arg1;
- (void)setAllowedEditingTypes:(int)arg1;
- (void)setCondition:(id)arg1;
- (void)setGroupChild:(id)arg1;
- (void)setGroupKeyPath:(id)arg1;
- (void)setImageKeyPath:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setStaticImage:(id)arg1;
- (void)setStaticTitle:(id)arg1;
- (void)setTitleKeyPath:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueFormatter:(id /* block */)arg1;
- (void)setValueKeyPath:(id)arg1;
- (void)setValueValidatator:(id /* block */)arg1;
- (id)settings;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)staticImage;
- (id)staticImage:(id)arg1;
- (id)staticTitle;
- (id)staticTitle:(id)arg1;
- (id)title;
- (id)titleKeyPath;
- (id)titleKeyPath:(id)arg1;
- (void)updateWithRow:(id)arg1;
- (id)value;
- (id /* block */)valueFormatter;
- (id)valueFormatter:(id /* block */)arg1;
- (id)valueKeyPath;
- (id)valueKeyPath:(id)arg1;
- (id /* block */)valueValidatator;
- (id)valueValidator:(id /* block */)arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (id)pu_rowWithTitle:(id)arg1 action:(id /* block */)arg2;
+ (id)pu_rowWithTitle:(id)arg1 asynchronousOutputProducer:(id /* block */)arg2;
+ (id)pu_rowWithTitle:(id)arg1 output:(id /* block */)arg2;
+ (id)pu_rowWithTitle:(id)arg1 settings:(id)arg2;
+ (id)pu_rowWithTitle:(id)arg1 settingsProvider:(id /* block */)arg2;
+ (id)pu_rowWithTitle:(id)arg1 settingsProvider:(id /* block */)arg2 isTransient:(BOOL)arg3;

- (id)pu_increment:(float)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer

- (id)is_increment:(double)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_rowWithTitle:(id)arg1 action:(id /* block */)arg2;
+ (id)px_rowWithTitle:(id)arg1 asynchronousOutputProducer:(id /* block */)arg2;
+ (id)px_rowWithTitle:(id)arg1 continuousOutputProducer:(id /* block */)arg2;
+ (id)px_rowWithTitle:(id)arg1 output:(id /* block */)arg2;
+ (id)px_rowWithTitle:(id)arg1 postDismissalAction:(id /* block */)arg2;

- (id)px_conditionFormat:(id)arg1 possibleValues:(id)arg2;
- (id)px_increment:(float)arg1;

@end