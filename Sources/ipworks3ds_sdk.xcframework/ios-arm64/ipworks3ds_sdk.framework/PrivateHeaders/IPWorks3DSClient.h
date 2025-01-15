/***********************************************************************
  /n software 3-D Secure V2 for macOS and iOS
  Copyright (c) 2024 /n software inc.
************************************************************************/

#import <Foundation/Foundation.h>


//CERTSTORETYPES
#define CST_USER                                           0

#define CST_MACHINE                                        1

#define CST_PFXFILE                                        2

#define CST_PFXBLOB                                        3

#define CST_JKSFILE                                        4

#define CST_JKSBLOB                                        5

#define CST_PEMKEY_FILE                                    6

#define CST_PEMKEY_BLOB                                    7

#define CST_PUBLIC_KEY_FILE                                8

#define CST_PUBLIC_KEY_BLOB                                9

#define CST_SSHPUBLIC_KEY_BLOB                             10

#define CST_P7BFILE                                        11

#define CST_P7BBLOB                                        12

#define CST_SSHPUBLIC_KEY_FILE                             13

#define CST_PPKFILE                                        14

#define CST_PPKBLOB                                        15

#define CST_XMLFILE                                        16

#define CST_XMLBLOB                                        17

#define CST_JWKFILE                                        18

#define CST_JWKBLOB                                        19

#define CST_SECURITY_KEY                                   20

#define CST_BCFKSFILE                                      21

#define CST_BCFKSBLOB                                      22

#define CST_PKCS11                                         23

#define CST_AUTO                                           99

//DEVICEPARAMVALUETYPES
#define VT_OBJECT                                          0

#define VT_ARRAY                                           1

#define VT_STRING                                          2

#define VT_NUMBER                                          3

#define VT_BOOL                                            4

#define VT_NULL                                            5

#define VT_RAW                                             6

//AUTHSCHEMES
#define AUTH_BASIC                                         0

#define AUTH_DIGEST                                        1

#define AUTH_PROPRIETARY                                   2

#define AUTH_NONE                                          3

#define AUTH_NTLM                                          4

#define AUTH_NEGOTIATE                                     5

//PROXYSSLTYPES
#define PS_AUTOMATIC                                       0

#define PS_ALWAYS                                          1

#define PS_NEVER                                           2

#define PS_TUNNEL                                          3

#ifndef NS_SWIFT_NAME
#define NS_SWIFT_NAME(x)
#endif

@protocol CreateTransactionClose <NSObject>
@optional
- (void)queueFireChallengeStatusFirst:(NSData*)dataPacket NS_SWIFT_NAME(queueFireChallengeStatusFirst(_:));

- (void)sysctlCANCEL:(NSData*)dataPacket NS_SWIFT_NAME(sysctlCANCEL(_:));

- (void)getMessageSDKWarnings:(int)opaquePointerDyldInfoCmd :(NSString*)description NS_SWIFT_NAME(getMessageSDKWarnings(_:_:));

- (void)isNameEqualSecondsFromGMT:(int)logLevel :(NSString*)message :(NSString*)logType NS_SWIFT_NAME(isNameEqualSecondsFromGMT(_:_:_:));

- (void)whiteLargeSystem:(NSData*)certEncoded :(NSString*)certSubject :(NSString*)certIssuer :(NSString*)status :(int*)accept NS_SWIFT_NAME(whiteLargeSystem(_:_:_:_:_:));

- (void)equalToLinkeditCmd:(NSString*)message NS_SWIFT_NAME(equalToLinkeditCmd(_:));

@end

@interface ValidationHashAdjustsFontSizeToFitWidth : NSObject {
  @public void* m_pObj;
  @public CFMutableArrayRef m_rNotifiers;
  __unsafe_unretained id <CreateTransactionClose> setupMyClientClient;
  BOOL m_raiseNSException;
  BOOL m_delegateHasDataPacketIn;

  BOOL m_delegateHasDataPacketOut;

  BOOL m_delegateHasError;

  BOOL m_delegateHasLog;

  BOOL m_delegateHasSSLServerAuthentication;

  BOOL m_delegateHasSSLStatus;

}

+ (ValidationHashAdjustsFontSizeToFitWidth*)obfuscateStringOverride;

- (id)init;
- (void)dealloc;

- (NSString*)securityIssueDirectoryServerCertStore;
- (int)styleFireChallengeStatusFirst;
- (int)eventErrorCode;

@property (nonatomic,readwrite,assign,getter=delegate,setter=infoPathLabelSize:) id <CreateTransactionClose> delegate;
- (id <CreateTransactionClose>)delegate;
- (void) infoPathLabelSize:(id <CreateTransactionClose>)anObject;

  /* Events */

- (void)queueFireChallengeStatusFirst:(NSData*)dataPacket NS_SWIFT_NAME(queueFireChallengeStatusFirst(_:));

- (void)sysctlCANCEL:(NSData*)dataPacket NS_SWIFT_NAME(sysctlCANCEL(_:));

- (void)getMessageSDKWarnings:(int)opaquePointerDyldInfoCmd :(NSString*)description NS_SWIFT_NAME(getMessageSDKWarnings(_:_:));

- (void)isNameEqualSecondsFromGMT:(int)logLevel :(NSString*)message :(NSString*)logType NS_SWIFT_NAME(isNameEqualSecondsFromGMT(_:_:_:));

- (void)whiteLargeSystem:(NSData*)certEncoded :(NSString*)certSubject :(NSString*)certIssuer :(NSString*)status :(int*)accept NS_SWIFT_NAME(whiteLargeSystem(_:_:_:_:_:));

- (void)equalToLinkeditCmd:(NSString*)message NS_SWIFT_NAME(equalToLinkeditCmd(_:));

  /* Properties */

@property (nonatomic,readwrite,assign,getter=FontAttributesDeviceData,setter=whiteSDKWarnings:) NSString* FontAttributesDeviceData NS_SWIFT_NAME(FontAttributesDeviceData);
- (NSString*)FontAttributesDeviceData;
- (void)whiteSDKWarnings:(NSString*)newRuntimeLicense;

@property (nonatomic,readonly,assign,getter=GetToolbarCustomizationLogVerbose) NSString* GetToolbarCustomizationLogVerbose NS_SWIFT_NAME(GetToolbarCustomizationLogVerbose);
- (NSString*)GetToolbarCustomizationLogVerbose;

@property (nonatomic,readwrite,assign,getter=configParamsEnsurePresent,setter=traitsRightView:) BOOL configParamsEnsurePresent NS_SWIFT_NAME(configParamsEnsurePresent);
- (BOOL)configParamsEnsurePresent NS_SWIFT_NAME(configParamsEnsurePresent());
- (void)traitsRightView:(BOOL)newRaiseNSException NS_SWIFT_NAME(traitsRightView(_:));

@property (nonatomic,readonly,assign,getter=AppVersionChallengeTextBox) NSString* AppVersionChallengeTextBox NS_SWIFT_NAME(AppVersionChallengeTextBox);

- (NSString*)AppVersionChallengeTextBox NS_SWIFT_NAME(AppVersionChallengeTextBox());

@property (nonatomic,readonly,assign,getter=UIControlMachOUtils) NSString* UIControlMachOUtils NS_SWIFT_NAME(UIControlMachOUtils);

- (NSString*)UIControlMachOUtils NS_SWIFT_NAME(UIControlMachOUtils());

@property (nonatomic,readwrite,assign,getter=UIControlTimeIntervalSinceReferenceDate,setter=checkTamperedByInfoPlistDateSeparatedBy:) int UIControlTimeIntervalSinceReferenceDate NS_SWIFT_NAME(UIControlTimeIntervalSinceReferenceDate);

- (int)UIControlTimeIntervalSinceReferenceDate NS_SWIFT_NAME(UIControlTimeIntervalSinceReferenceDate());
- (void)checkTamperedByInfoPlistDateSeparatedBy :(int)newACSRootCertCount NS_SWIFT_NAME(checkTamperedByInfoPlistDateSeparatedBy(_:));

- (NSString*)FormatBuildAttributedText:(int)aCSRootCertIndex NS_SWIFT_NAME(FormatBuildAttributedText(_:));
- (void)lastPathComponentContentsOfFile:(int)aCSRootCertIndex :(NSString*)newACSRootCertEncoded NS_SWIFT_NAME(lastPathComponentContentsOfFile(_:_:));

- (NSData*)ClearClientComponentMyHTTPS:(int)aCSRootCertIndex NS_SWIFT_NAME(ClearClientComponentMyHTTPS(_:));
- (void)deviceBindingInformationTextGetTopViewController:(int)aCSRootCertIndex :(NSData*)newACSRootCertEncoded NS_SWIFT_NAME(deviceBindingInformationTextGetTopViewController(_:_:));


- (NSString*)EffectiveRangeHeightAnchor:(int)aCSRootCertIndex NS_SWIFT_NAME(EffectiveRangeHeightAnchor(_:));
- (void)getAndValidateAppIdLogLevel:(int)aCSRootCertIndex :(NSString*)newACSRootCertStore NS_SWIFT_NAME(getAndValidateAppIdLogLevel(_:_:));

- (NSData*)LinkeditCmdNameDsIconResourceName:(int)aCSRootCertIndex NS_SWIFT_NAME(LinkeditCmdNameDsIconResourceName(_:));
- (void)dispatchQoSBoldSystemFont:(int)aCSRootCertIndex :(NSData*)newACSRootCertStore NS_SWIFT_NAME(dispatchQoSBoldSystemFont(_:_:));


- (NSString*)SuperDEBUGGING:(int)aCSRootCertIndex NS_SWIFT_NAME(SuperDEBUGGING(_:));
- (void)ensurePresentBounds:(int)aCSRootCertIndex :(NSString*)newACSRootCertStorePassword NS_SWIFT_NAME(ensurePresentBounds(_:_:));

- (int)SetACSRootCertStoreCapacity:(int)aCSRootCertIndex NS_SWIFT_NAME(SetACSRootCertStoreCapacity(_:));
- (void)commonCryptoUseAdditionalChallenge:(int)aCSRootCertIndex :(int)newACSRootCertStoreType NS_SWIFT_NAME(commonCryptoUseAdditionalChallenge(_:_:));

- (NSString*)GetUIViewControllerDarwin:(int)aCSRootCertIndex NS_SWIFT_NAME(GetUIViewControllerDarwin(_:));
- (void)iconPositionOfSize:(int)aCSRootCertIndex :(NSString*)newACSRootCertSubject NS_SWIFT_NAME(iconPositionOfSize(_:_:));

@property (nonatomic,readonly,assign,getter=SetHeadingTextFontNameCurrentTimeMillis) int SetHeadingTextFontNameCurrentTimeMillis NS_SWIFT_NAME(SetHeadingTextFontNameCurrentTimeMillis);

- (int)SetHeadingTextFontNameCurrentTimeMillis NS_SWIFT_NAME(SetHeadingTextFontNameCurrentTimeMillis());

@property (nonatomic,readonly,assign,getter=acsOperatorIDNumberOfComponents) NSString* acsOperatorIDNumberOfComponents NS_SWIFT_NAME(acsOperatorIDNumberOfComponents);

- (NSString*)acsOperatorIDNumberOfComponents NS_SWIFT_NAME(acsOperatorIDNumberOfComponents());

@property (nonatomic,readonly,assign,getter=nSLocaleMarkHooked) NSString* nSLocaleMarkHooked NS_SWIFT_NAME(nSLocaleMarkHooked);

- (NSString*)nSLocaleMarkHooked NS_SWIFT_NAME(nSLocaleMarkHooked());

@property (nonatomic,readwrite,assign,getter=decryptedStringAtPath,setter=withAttributesSUBMIT:) NSString* decryptedStringAtPath NS_SWIFT_NAME(decryptedStringAtPath);

- (NSString*)decryptedStringAtPath NS_SWIFT_NAME(decryptedStringAtPath());
- (void)withAttributesSUBMIT :(NSString*)newChallengeCancellationIndicator NS_SWIFT_NAME(withAttributesSUBMIT(_:));

@property (nonatomic,readonly,assign,getter=cGSizeRequest) BOOL cGSizeRequest NS_SWIFT_NAME(cGSizeRequest);

- (BOOL)cGSizeRequest NS_SWIFT_NAME(cGSizeRequest());

@property (nonatomic,readwrite,assign,getter=createTransactionRemove,setter=frameworkTEXTSectionAddrEndRandomStr:) NSString* createTransactionRemove NS_SWIFT_NAME(createTransactionRemove);

- (NSString*)createTransactionRemove NS_SWIFT_NAME(createTransactionRemove());
- (void)frameworkTEXTSectionAddrEndRandomStr :(NSString*)newChallengeDataEntry NS_SWIFT_NAME(frameworkTEXTSectionAddrEndRandomStr(_:));

@property (nonatomic,readwrite,assign,getter=trimmingCharactersGetGroup,setter=senderCurrentTimeMillis:) NSString* trimmingCharactersGetGroup NS_SWIFT_NAME(trimmingCharactersGetGroup);

- (NSString*)trimmingCharactersGetGroup NS_SWIFT_NAME(trimmingCharactersGetGroup());
- (void)senderCurrentTimeMillis :(NSString*)newChallengeDataEntryTwo NS_SWIFT_NAME(senderCurrentTimeMillis(_:));

@property (nonatomic,readonly,assign,getter=navigationBarAppendLog) BOOL navigationBarAppendLog NS_SWIFT_NAME(navigationBarAppendLog);

- (BOOL)navigationBarAppendLog NS_SWIFT_NAME(navigationBarAppendLog());

@property (nonatomic,readonly,assign,getter=vtStringTimedout) int vtStringTimedout NS_SWIFT_NAME(vtStringTimedout);

- (int)vtStringTimedout NS_SWIFT_NAME(vtStringTimedout());

@property (nonatomic,readonly,assign,getter=securityEventPublic) int securityEventPublic NS_SWIFT_NAME(securityEventPublic);

- (int)securityEventPublic NS_SWIFT_NAME(securityEventPublic());

@property (nonatomic,readonly,assign,getter=setUpWithErrorGetTransactionStatus) NSString* setUpWithErrorGetTransactionStatus NS_SWIFT_NAME(setUpWithErrorGetTransactionStatus);

- (NSString*)setUpWithErrorGetTransactionStatus NS_SWIFT_NAME(setUpWithErrorGetTransactionStatus());

@property (nonatomic,readonly,assign,getter=implementationButtonFontSize) int implementationButtonFontSize NS_SWIFT_NAME(implementationButtonFontSize);

- (int)implementationButtonFontSize NS_SWIFT_NAME(implementationButtonFontSize());

@property (nonatomic,readonly,assign,getter=hasPrefixDEBUGGING) BOOL hasPrefixDEBUGGING NS_SWIFT_NAME(hasPrefixDEBUGGING);

- (BOOL)hasPrefixDEBUGGING NS_SWIFT_NAME(hasPrefixDEBUGGING());

@property (nonatomic,readonly,assign,getter=alwaysChallengeStatusReceiver) BOOL alwaysChallengeStatusReceiver NS_SWIFT_NAME(alwaysChallengeStatusReceiver);

- (BOOL)alwaysChallengeStatusReceiver NS_SWIFT_NAME(alwaysChallengeStatusReceiver());

@property (nonatomic,readonly,assign,getter=sDKTransactionIdGetBackgroundColor) BOOL sDKTransactionIdGetBackgroundColor NS_SWIFT_NAME(sDKTransactionIdGetBackgroundColor);

- (BOOL)sDKTransactionIdGetBackgroundColor NS_SWIFT_NAME(sDKTransactionIdGetBackgroundColor());

@property (nonatomic,readonly,assign,getter=paramValueThread) int paramValueThread NS_SWIFT_NAME(paramValueThread);

- (int)paramValueThread NS_SWIFT_NAME(paramValueThread());

@property (nonatomic,readonly,assign,getter=systemVersionDelegateInternal) int systemVersionDelegateInternal NS_SWIFT_NAME(systemVersionDelegateInternal);

- (int)systemVersionDelegateInternal NS_SWIFT_NAME(systemVersionDelegateInternal());

@property (nonatomic,readonly,assign,getter=opaquePointerWithAlphaComponent) NSString* opaquePointerWithAlphaComponent NS_SWIFT_NAME(opaquePointerWithAlphaComponent);

- (NSString*)opaquePointerWithAlphaComponent NS_SWIFT_NAME(opaquePointerWithAlphaComponent());

@property (nonatomic,readonly,assign,getter=sectnameCertEndTag) int sectnameCertEndTag NS_SWIFT_NAME(sectnameCertEndTag);

- (int)sectnameCertEndTag NS_SWIFT_NAME(sectnameCertEndTag());

@property (nonatomic,readonly,assign,getter=symbolNameStringTableGetDirectoryServerCA) BOOL symbolNameStringTableGetDirectoryServerCA NS_SWIFT_NAME(symbolNameStringTableGetDirectoryServerCA);

- (BOOL)symbolNameStringTableGetDirectoryServerCA NS_SWIFT_NAME(symbolNameStringTableGetDirectoryServerCA());

@property (nonatomic,readonly,assign,getter=sectionInfoDeviceParamCategory) BOOL sectionInfoDeviceParamCategory NS_SWIFT_NAME(sectionInfoDeviceParamCategory);

- (BOOL)sectionInfoDeviceParamCategory NS_SWIFT_NAME(sectionInfoDeviceParamCategory());

@property (nonatomic,readonly,assign,getter=checkTamperedByInfoDictionarySDKTransactionId) NSString* checkTamperedByInfoDictionarySDKTransactionId NS_SWIFT_NAME(checkTamperedByInfoDictionarySDKTransactionId);

- (NSString*)checkTamperedByInfoDictionarySDKTransactionId NS_SWIFT_NAME(checkTamperedByInfoDictionarySDKTransactionId());

@property (nonatomic,readonly,assign,getter=targetImageNameMethod) NSString* targetImageNameMethod NS_SWIFT_NAME(targetImageNameMethod);

- (NSString*)targetImageNameMethod NS_SWIFT_NAME(targetImageNameMethod());

@property (nonatomic,readonly,assign,getter=startAddressNewACSRootCertSubject) NSString* startAddressNewACSRootCertSubject NS_SWIFT_NAME(startAddressNewACSRootCertSubject);

- (NSString*)startAddressNewACSRootCertSubject NS_SWIFT_NAME(startAddressNewACSRootCertSubject());

@property (nonatomic,readonly,assign,getter=runtimeLicenseTranslatesAutoresizingMaskIntoConstraints) int runtimeLicenseTranslatesAutoresizingMaskIntoConstraints NS_SWIFT_NAME(runtimeLicenseTranslatesAutoresizingMaskIntoConstraints);

- (int)runtimeLicenseTranslatesAutoresizingMaskIntoConstraints NS_SWIFT_NAME(runtimeLicenseTranslatesAutoresizingMaskIntoConstraints());

- (NSString*)repeatCountToolbarFontSize:(int)challengeSelectInfoIndex NS_SWIFT_NAME(repeatCountToolbarFontSize(_:));

- (NSString*)segDataChallengeEntryBoxTwoMasking:(int)challengeSelectInfoIndex NS_SWIFT_NAME(segDataChallengeEntryBoxTwoMasking(_:));

@property (nonatomic,readonly,assign,getter=linkeditCmdNameCheckBold) NSString* linkeditCmdNameCheckBold NS_SWIFT_NAME(linkeditCmdNameCheckBold);

- (NSString*)linkeditCmdNameCheckBold NS_SWIFT_NAME(linkeditCmdNameCheckBold());

@property (nonatomic,readwrite,assign,getter=deviceBindingDataEntryAscii,setter=locManagerWhitelistingDataEntry:) BOOL deviceBindingDataEntryAscii NS_SWIFT_NAME(deviceBindingDataEntryAscii);

- (BOOL)deviceBindingDataEntryAscii NS_SWIFT_NAME(deviceBindingDataEntryAscii());
- (void)locManagerWhitelistingDataEntry :(BOOL)newDeviceBindingDataEntry NS_SWIFT_NAME(locManagerWhitelistingDataEntry(_:));

@property (nonatomic,readonly,assign,getter=escapingSetUp) NSString* escapingSetUp NS_SWIFT_NAME(escapingSetUp);

- (NSString*)escapingSetUp NS_SWIFT_NAME(escapingSetUp());

@property (nonatomic,readwrite,assign,getter=headerWHITELIST,setter=jmpOffsetNSMutableAttributedString:) int headerWHITELIST NS_SWIFT_NAME(headerWHITELIST);

- (int)headerWHITELIST NS_SWIFT_NAME(headerWHITELIST());
- (void)jmpOffsetNSMutableAttributedString :(int)newDeviceParamCount NS_SWIFT_NAME(jmpOffsetNSMutableAttributedString(_:));

- (int)symbolicTraitsCleanup:(int)deviceParamIndex NS_SWIFT_NAME(symbolicTraitsCleanup(_:));
- (void)segmentAppStoreReceiptExists:(int)deviceParamIndex :(int)newDeviceParamCategory NS_SWIFT_NAME(segmentAppStoreReceiptExists(_:_:));

- (NSString*)tintColorGetValueAsBoolean:(int)deviceParamIndex NS_SWIFT_NAME(tintColorGetValueAsBoolean(_:));
- (void)getColorHexStringCheckTamperedByMobileProvisionHash:(int)deviceParamIndex :(NSString*)newDeviceParamFieldName NS_SWIFT_NAME(getColorHexStringCheckTamperedByMobileProvisionHash(_:_:));

- (NSString*)sDKUiControllerTranslateInstruction:(int)deviceParamIndex NS_SWIFT_NAME(sDKUiControllerTranslateInstruction(_:));
- (void)fileExistsNatural:(int)deviceParamIndex :(NSString*)newDeviceParamValue NS_SWIFT_NAME(fileExistsNatural(_:_:));

- (int)nsoftwareAppChallengeControllerSetBrandingZoneLogoGap:(int)deviceParamIndex NS_SWIFT_NAME(nsoftwareAppChallengeControllerSetBrandingZoneLogoGap(_:));
- (void)sDKAppIdGetDefaultDSPublicKey:(int)deviceParamIndex :(int)newDeviceParamValueType NS_SWIFT_NAME(sDKAppIdGetDefaultDSPublicKey(_:_:));

@property (nonatomic,readwrite,assign,getter=isLandscapeFirstInstruction,setter=delegateVmaddr:) NSString* isLandscapeFirstInstruction NS_SWIFT_NAME(isLandscapeFirstInstruction);

- (NSString*)isLandscapeFirstInstruction NS_SWIFT_NAME(isLandscapeFirstInstruction());
- (void)delegateVmaddr :(NSString*)newDirectoryServerCertEncoded NS_SWIFT_NAME(delegateVmaddr(_:));

@property (nonatomic,readwrite,assign,getter=completionEventACSUIType,setter=removeObjectProtocol:) NSData* completionEventACSUIType NS_SWIFT_NAME(completionEventACSUIType);

- (NSData*)completionEventACSUIType NS_SWIFT_NAME(completionEventACSUIType());
- (void)removeObjectProtocol :(NSData*)newDirectoryServerCertEncoded NS_SWIFT_NAME(removeObjectProtocol(_:));


@property (nonatomic,readwrite,assign,getter=appendLogConfig,setter=configChallengeEntryBoxTwoAutofillType:) NSString* appendLogConfig NS_SWIFT_NAME(appendLogConfig);

- (NSString*)appendLogConfig NS_SWIFT_NAME(appendLogConfig());
- (void)configChallengeEntryBoxTwoAutofillType :(NSString*)newDirectoryServerCertStore NS_SWIFT_NAME(configChallengeEntryBoxTwoAutofillType(_:));

@property (nonatomic,readwrite,assign,getter=getIPAddressIconPadding,setter=challengeSelectInfoValueACSHTML:) NSData* getIPAddressIconPadding NS_SWIFT_NAME(getIPAddressIconPadding);

- (NSData*)getIPAddressIconPadding NS_SWIFT_NAME(getIPAddressIconPadding());
- (void)challengeSelectInfoValueACSHTML :(NSData*)newDirectoryServerCertStore NS_SWIFT_NAME(challengeSelectInfoValueACSHTML(_:));


@property (nonatomic,readwrite,assign,getter=mainResourcePathIsArray,setter=removeObserversCheckTamperedByInfoDictionary:) NSString* mainResourcePathIsArray NS_SWIFT_NAME(mainResourcePathIsArray);

- (NSString*)mainResourcePathIsArray NS_SWIFT_NAME(mainResourcePathIsArray());
- (void)removeObserversCheckTamperedByInfoDictionary :(NSString*)newDirectoryServerCertStorePassword NS_SWIFT_NAME(removeObserversCheckTamperedByInfoDictionary(_:));

@property (nonatomic,readwrite,assign,getter=suspiciousLibrariesNsects,setter=isArrayIsFishhooked:) int suspiciousLibrariesNsects NS_SWIFT_NAME(suspiciousLibrariesNsects);

- (int)suspiciousLibrariesNsects NS_SWIFT_NAME(suspiciousLibrariesNsects());
- (void)isArrayIsFishhooked :(int)newDirectoryServerCertStoreType NS_SWIFT_NAME(isArrayIsFishhooked(_:));

@property (nonatomic,readwrite,assign,getter=pathsClass,setter=sdkTEXTSectionAddrEndGetppidType:) NSString* pathsClass NS_SWIFT_NAME(pathsClass);

- (NSString*)pathsClass NS_SWIFT_NAME(pathsClass());
- (void)sdkTEXTSectionAddrEndGetppidType :(NSString*)newDirectoryServerCertSubject NS_SWIFT_NAME(sdkTEXTSectionAddrEndGetppidType(_:));

@property (nonatomic,readwrite,assign,getter=littleEndianMyUILabel,setter=getChallengeEntryBoxTwoEqualTo:) NSString* littleEndianMyUILabel NS_SWIFT_NAME(littleEndianMyUILabel);

- (NSString*)littleEndianMyUILabel NS_SWIFT_NAME(littleEndianMyUILabel());
- (void)getChallengeEntryBoxTwoEqualTo :(NSString*)newDirectoryServerId NS_SWIFT_NAME(getChallengeEntryBoxTwoEqualTo(_:));

@property (nonatomic,readwrite,assign,getter=firstInstructionHasSuffix,setter=toggleShowPasswordObfuscateString:) NSString* firstInstructionHasSuffix NS_SWIFT_NAME(firstInstructionHasSuffix);

- (NSString*)firstInstructionHasSuffix NS_SWIFT_NAME(firstInstructionHasSuffix());
- (void)toggleShowPasswordObfuscateString :(NSString*)newDirectoryServerKeyId NS_SWIFT_NAME(toggleShowPasswordObfuscateString(_:));

@property (nonatomic,readonly,assign,getter=categoryMirror) BOOL categoryMirror NS_SWIFT_NAME(categoryMirror);

- (BOOL)categoryMirror NS_SWIFT_NAME(categoryMirror());

@property (nonatomic,readonly,assign,getter=builderGetDeviceData) NSString* builderGetDeviceData NS_SWIFT_NAME(builderGetDeviceData);

- (NSString*)builderGetDeviceData NS_SWIFT_NAME(builderGetDeviceData());

@property (nonatomic,readonly,assign,getter=dyldWhiteListLabelCustomization) NSString* dyldWhiteListLabelCustomization NS_SWIFT_NAME(dyldWhiteListLabelCustomization);

- (NSString*)dyldWhiteListLabelCustomization NS_SWIFT_NAME(dyldWhiteListLabelCustomization());

@property (nonatomic,readonly,assign,getter=immloNameA) NSString* immloNameA NS_SWIFT_NAME(immloNameA);

- (NSString*)immloNameA NS_SWIFT_NAME(immloNameA());

@property (nonatomic,readwrite,assign,getter=doubleDirectoryServerInformationTest,setter=arrayDateFormatter:) int doubleDirectoryServerInformationTest NS_SWIFT_NAME(doubleDirectoryServerInformationTest);

- (int)doubleDirectoryServerInformationTest NS_SWIFT_NAME(doubleDirectoryServerInformationTest());
- (void)arrayDateFormatter :(int)newExtensionCount NS_SWIFT_NAME(arrayDateFormatter(_:));

- (BOOL)getAcsSignedContentHasPrefix:(int)extensionIndex NS_SWIFT_NAME(getAcsSignedContentHasPrefix(_:));
- (void)setTitleFramework:(int)extensionIndex :(BOOL)newExtensionCritical NS_SWIFT_NAME(setTitleFramework(_:_:));

- (NSString*)imageNameAlarm:(int)extensionIndex NS_SWIFT_NAME(imageNameAlarm(_:));
- (void)rangeTimeIntervalSinceReferenceDate:(int)extensionIndex :(NSString*)newExtensionData NS_SWIFT_NAME(rangeTimeIntervalSinceReferenceDate(_:_:));

- (NSString*)defaultValueSender:(int)extensionIndex NS_SWIFT_NAME(defaultValueSender(_:));
- (void)stringObfuscatorRemoveObject:(int)extensionIndex :(NSString*)newExtensionId NS_SWIFT_NAME(stringObfuscatorRemoveObject(_:_:));

- (NSString*)iconPaddingSysctlType:(int)extensionIndex NS_SWIFT_NAME(iconPaddingSysctlType(_:));
- (void)getChallengeTimeRemainingContains:(int)extensionIndex :(NSString*)newExtensionName NS_SWIFT_NAME(getChallengeTimeRemainingContains(_:_:));

@property (nonatomic,readonly,assign,getter=loadedDylibCmdGetifaddrs) NSString* loadedDylibCmdGetifaddrs NS_SWIFT_NAME(loadedDylibCmdGetifaddrs);

- (NSString*)loadedDylibCmdGetifaddrs NS_SWIFT_NAME(loadedDylibCmdGetifaddrs());

@property (nonatomic,readonly,assign,getter=stringObfuscatorAppStoreReceiptExists) NSString* stringObfuscatorAppStoreReceiptExists NS_SWIFT_NAME(stringObfuscatorAppStoreReceiptExists);

- (NSString*)stringObfuscatorAppStoreReceiptExists NS_SWIFT_NAME(stringObfuscatorAppStoreReceiptExists());

@property (nonatomic,readonly,assign,getter=ifptrSockaddr) NSString* ifptrSockaddr NS_SWIFT_NAME(ifptrSockaddr);

- (NSString*)ifptrSockaddr NS_SWIFT_NAME(ifptrSockaddr());

@property (nonatomic,readwrite,assign,getter=setButtonCustomizationAddAction,setter=convenienceMasksToBounds:) NSString* setButtonCustomizationAddAction NS_SWIFT_NAME(setButtonCustomizationAddAction);

- (NSString*)setButtonCustomizationAddAction NS_SWIFT_NAME(setButtonCustomizationAddAction());
- (void)convenienceMasksToBounds :(NSString*)newMessageVersion NS_SWIFT_NAME(convenienceMasksToBounds(_:));

@property (nonatomic,readonly,assign,getter=ButtonFontSizeChallengeLeftTime) NSString* ButtonFontSizeChallengeLeftTime NS_SWIFT_NAME(ButtonFontSizeChallengeLeftTime);

- (NSString*)ButtonFontSizeChallengeLeftTime NS_SWIFT_NAME(ButtonFontSizeChallengeLeftTime());

@property (nonatomic,readwrite,assign,getter=ChallengeEntryBoxTwoLengthMaxDyldWhiteList,setter=submitAuthenticationLabelWhitelistingDataEntry:) int ChallengeEntryBoxTwoLengthMaxDyldWhiteList NS_SWIFT_NAME(ChallengeEntryBoxTwoLengthMaxDyldWhiteList);

- (int)ChallengeEntryBoxTwoLengthMaxDyldWhiteList NS_SWIFT_NAME(ChallengeEntryBoxTwoLengthMaxDyldWhiteList());
- (void)submitAuthenticationLabelWhitelistingDataEntry :(int)newOOBAppStatus NS_SWIFT_NAME(submitAuthenticationLabelWhitelistingDataEntry(_:));

@property (nonatomic,readonly,assign,getter=FileoffDefer) NSString* FileoffDefer NS_SWIFT_NAME(FileoffDefer);

- (NSString*)FileoffDefer NS_SWIFT_NAME(FileoffDefer());

@property (nonatomic,readwrite,assign,getter=FileExistsCanOpenLocalPort,setter=navBarInformation:) int FileExistsCanOpenLocalPort NS_SWIFT_NAME(FileExistsCanOpenLocalPort);

- (int)FileExistsCanOpenLocalPort NS_SWIFT_NAME(FileExistsCanOpenLocalPort());
- (void)navBarInformation :(int)newOOBAppURLIndicator NS_SWIFT_NAME(navBarInformation(_:));

@property (nonatomic,readwrite,assign,getter=ForKeyGetMethodDyldPath,setter=encryptedDataStrVal:) int ForKeyGetMethodDyldPath NS_SWIFT_NAME(ForKeyGetMethodDyldPath);

- (int)ForKeyGetMethodDyldPath NS_SWIFT_NAME(ForKeyGetMethodDyldPath());
- (void)encryptedDataStrVal :(int)newOOBContinuationIndicator NS_SWIFT_NAME(encryptedDataStrVal(_:));

@property (nonatomic,readonly,assign,getter=SegDataFileExists) NSString* SegDataFileExists NS_SWIFT_NAME(SegDataFileExists);

- (NSString*)SegDataFileExists NS_SWIFT_NAME(SegDataFileExists());

@property (nonatomic,readonly,assign,getter=withAlphaComponentAcsChallengeMandated) NSString* withAlphaComponentAcsChallengeMandated NS_SWIFT_NAME(withAlphaComponentAcsChallengeMandated);

- (NSString*)withAlphaComponentAcsChallengeMandated NS_SWIFT_NAME(withAlphaComponentAcsChallengeMandated());

@property (nonatomic,readonly,assign,getter=nSDateConfigStr) NSString* nSDateConfigStr NS_SWIFT_NAME(nSDateConfigStr);

- (NSString*)nSDateConfigStr NS_SWIFT_NAME(nSDateConfigStr());

@property (nonatomic,readonly,assign,getter=stringIsEmptyLabelText) NSString* stringIsEmptyLabelText NS_SWIFT_NAME(stringIsEmptyLabelText);

- (NSString*)stringIsEmptyLabelText NS_SWIFT_NAME(stringIsEmptyLabelText());

@property (nonatomic,readwrite,assign,getter=categoryTypeGetChallengeEntryBoxTwo,setter=labelIfaddrs:) int categoryTypeGetChallengeEntryBoxTwo NS_SWIFT_NAME(categoryTypeGetChallengeEntryBoxTwo);

- (int)categoryTypeGetChallengeEntryBoxTwo NS_SWIFT_NAME(categoryTypeGetChallengeEntryBoxTwo());
- (void)labelIfaddrs :(int)newProxyAuthScheme NS_SWIFT_NAME(labelIfaddrs(_:));

@property (nonatomic,readwrite,assign,getter=machOUtilsToolbarCustomization,setter=stridePhone:) BOOL machOUtilsToolbarCustomization NS_SWIFT_NAME(machOUtilsToolbarCustomization);

- (BOOL)machOUtilsToolbarCustomization NS_SWIFT_NAME(machOUtilsToolbarCustomization());
- (void)stridePhone :(BOOL)newProxyAutoDetect NS_SWIFT_NAME(stridePhone(_:));

@property (nonatomic,readwrite,assign,getter=maxTextLenCheckTamperedByXMLinInfoPlist,setter=viewControllersSetPadding:) NSString* maxTextLenCheckTamperedByXMLinInfoPlist NS_SWIFT_NAME(maxTextLenCheckTamperedByXMLinInfoPlist);

- (NSString*)maxTextLenCheckTamperedByXMLinInfoPlist NS_SWIFT_NAME(maxTextLenCheckTamperedByXMLinInfoPlist());
- (void)viewControllersSetPadding :(NSString*)newProxyPassword NS_SWIFT_NAME(viewControllersSetPadding(_:));

@property (nonatomic,readwrite,assign,getter=configParametersParserSetToolbarCustomization,setter=boundsWithPaddingAcsChallengeMandated:) int configParametersParserSetToolbarCustomization NS_SWIFT_NAME(configParametersParserSetToolbarCustomization);

- (int)configParametersParserSetToolbarCustomization NS_SWIFT_NAME(configParametersParserSetToolbarCustomization());
- (void)boundsWithPaddingAcsChallengeMandated :(int)newProxyPort NS_SWIFT_NAME(boundsWithPaddingAcsChallengeMandated(_:));

@property (nonatomic,readwrite,assign,getter=whyInformationLabelReceiptURL,setter=toFileShouldFireChallengeStatusFirst:) NSString* whyInformationLabelReceiptURL NS_SWIFT_NAME(whyInformationLabelReceiptURL);

- (NSString*)whyInformationLabelReceiptURL NS_SWIFT_NAME(whyInformationLabelReceiptURL());
- (void)toFileShouldFireChallengeStatusFirst :(NSString*)newProxyServer NS_SWIFT_NAME(toFileShouldFireChallengeStatusFirst(_:));

@property (nonatomic,readwrite,assign,getter=uIImageViewFunctionPtr,setter=directoryServerCertStoreTypeAuthResponse:) int uIImageViewFunctionPtr NS_SWIFT_NAME(uIImageViewFunctionPtr);

- (int)uIImageViewFunctionPtr NS_SWIFT_NAME(uIImageViewFunctionPtr());
- (void)directoryServerCertStoreTypeAuthResponse :(int)newProxySSL NS_SWIFT_NAME(directoryServerCertStoreTypeAuthResponse(_:));

@property (nonatomic,readwrite,assign,getter=oSLittleEndianStubCodeLength,setter=setInformationZoneIconPositionEncryptedData:) NSString* oSLittleEndianStubCodeLength NS_SWIFT_NAME(oSLittleEndianStubCodeLength);

- (NSString*)oSLittleEndianStubCodeLength NS_SWIFT_NAME(oSLittleEndianStubCodeLength());
- (void)setInformationZoneIconPositionEncryptedData :(NSString*)newProxyUser NS_SWIFT_NAME(setInformationZoneIconPositionEncryptedData(_:));

@property (nonatomic,readwrite,assign,getter=onErrorRadius,setter=setSeverityGetErrorDetails:) NSString* onErrorRadius NS_SWIFT_NAME(onErrorRadius);

- (NSString*)onErrorRadius NS_SWIFT_NAME(onErrorRadius());
- (void)setSeverityGetErrorDetails :(NSString*)newRequestorAppURL NS_SWIFT_NAME(setSeverityGetErrorDetails(_:));

@property (nonatomic,readonly,assign,getter=useSDKProcessingScreenAscii) NSString* useSDKProcessingScreenAscii NS_SWIFT_NAME(useSDKProcessingScreenAscii);

- (NSString*)useSDKProcessingScreenAscii NS_SWIFT_NAME(useSDKProcessingScreenAscii());

@property (nonatomic,readwrite,assign,getter=ExpandableInformationTextSecondsFromGMT,setter=unsafeRawPointerDateFormatter:) NSString* ExpandableInformationTextSecondsFromGMT NS_SWIFT_NAME(ExpandableInformationTextSecondsFromGMT);

- (NSString*)ExpandableInformationTextSecondsFromGMT NS_SWIFT_NAME(ExpandableInformationTextSecondsFromGMT());
- (void)unsafeRawPointerDateFormatter :(NSString*)newSDKAppId NS_SWIFT_NAME(unsafeRawPointerDateFormatter(_:));

@property (nonatomic,readwrite,assign,getter=BackgroundWHITELIST,setter=frameworkDylibIndexFormat:) NSString* BackgroundWHITELIST NS_SWIFT_NAME(BackgroundWHITELIST);

- (NSString*)BackgroundWHITELIST NS_SWIFT_NAME(BackgroundWHITELIST());
- (void)frameworkDylibIndexFormat :(NSString*)newSDKTransactionId NS_SWIFT_NAME(frameworkDylibIndexFormat(_:));

@property (nonatomic,readwrite,assign,getter=LoadDSCertsSysctlRet,setter=getTimeNowWhitelistingDataEntry:) NSString* LoadDSCertsSysctlRet NS_SWIFT_NAME(LoadDSCertsSysctlRet);

- (NSString*)LoadDSCertsSysctlRet NS_SWIFT_NAME(LoadDSCertsSysctlRet());
- (void)getTimeNowWhitelistingDataEntry :(NSString*)newSSLAcceptServerCertEncoded NS_SWIFT_NAME(getTimeNowWhitelistingDataEntry(_:));

@property (nonatomic,readwrite,assign,getter=MachineMaxHeight,setter=ifaddrAddDeviceParam:) NSData* MachineMaxHeight NS_SWIFT_NAME(MachineMaxHeight);

- (NSData*)MachineMaxHeight NS_SWIFT_NAME(MachineMaxHeight());
- (void)ifaddrAddDeviceParam :(NSData*)newSSLAcceptServerCertEncoded NS_SWIFT_NAME(ifaddrAddDeviceParam(_:));


@property (nonatomic,readwrite,assign,getter=OOBAppURLGetMessage,setter=isDarkModeSystemVersion:) NSString* OOBAppURLGetMessage NS_SWIFT_NAME(OOBAppURLGetMessage);

- (NSString*)OOBAppURLGetMessage NS_SWIFT_NAME(OOBAppURLGetMessage());
- (void)isDarkModeSystemVersion :(NSString*)newSSLCertEncoded NS_SWIFT_NAME(isDarkModeSystemVersion(_:));

@property (nonatomic,readwrite,assign,getter=MainResourcePathConfigurationString,setter=translateInstructionACSUIType:) NSData* MainResourcePathConfigurationString NS_SWIFT_NAME(MainResourcePathConfigurationString);

- (NSData*)MainResourcePathConfigurationString NS_SWIFT_NAME(MainResourcePathConfigurationString());
- (void)translateInstructionACSUIType :(NSData*)newSSLCertEncoded NS_SWIFT_NAME(translateInstructionACSUIType(_:));


@property (nonatomic,readwrite,assign,getter=AsciiCenter,setter=littleEndianEnsureButtonCustomizationMapNotNil:) NSString* AsciiCenter NS_SWIFT_NAME(AsciiCenter);

- (NSString*)AsciiCenter NS_SWIFT_NAME(AsciiCenter());
- (void)littleEndianEnsureButtonCustomizationMapNotNil :(NSString*)newSSLCertStore NS_SWIFT_NAME(littleEndianEnsureButtonCustomizationMapNotNil(_:));

@property (nonatomic,readwrite,assign,getter=ImagAddrEndGetAcsTransactionID,setter=dataCmdRefNumber:) NSData* ImagAddrEndGetAcsTransactionID NS_SWIFT_NAME(ImagAddrEndGetAcsTransactionID);

- (NSData*)ImagAddrEndGetAcsTransactionID NS_SWIFT_NAME(ImagAddrEndGetAcsTransactionID());
- (void)dataCmdRefNumber :(NSData*)newSSLCertStore NS_SWIFT_NAME(dataCmdRefNumber(_:));


@property (nonatomic,readwrite,assign,getter=RemoveObserversUIDevice,setter=dataCmdSystemName:) NSString* RemoveObserversUIDevice NS_SWIFT_NAME(RemoveObserversUIDevice);

- (NSString*)RemoveObserversUIDevice NS_SWIFT_NAME(RemoveObserversUIDevice());
- (void)dataCmdSystemName :(NSString*)newSSLCertStorePassword NS_SWIFT_NAME(dataCmdSystemName(_:));

@property (nonatomic,readwrite,assign,getter=SetTextFontNameConfigParameters,setter=getBorderWidthDlsym:) int SetTextFontNameConfigParameters NS_SWIFT_NAME(SetTextFontNameConfigParameters);

- (int)SetTextFontNameConfigParameters NS_SWIFT_NAME(SetTextFontNameConfigParameters());
- (void)getBorderWidthDlsym :(int)newSSLCertStoreType NS_SWIFT_NAME(getBorderWidthDlsym(_:));

@property (nonatomic,readwrite,assign,getter=DlopenMessageVersion,setter=continueAfterFailureLittleEndian:) NSString* DlopenMessageVersion NS_SWIFT_NAME(DlopenMessageVersion);

- (NSString*)DlopenMessageVersion NS_SWIFT_NAME(DlopenMessageVersion());
- (void)continueAfterFailureLittleEndian :(NSString*)newSSLCertSubject NS_SWIFT_NAME(continueAfterFailureLittleEndian(_:));

@property (nonatomic,readonly,assign,getter=ContinueReadSecondInstruction) NSString* ContinueReadSecondInstruction NS_SWIFT_NAME(ContinueReadSecondInstruction);

- (NSString*)ContinueReadSecondInstruction NS_SWIFT_NAME(ContinueReadSecondInstruction());

@property (nonatomic,readonly,assign,getter=DataCmdDescription) NSData* DataCmdDescription NS_SWIFT_NAME(DataCmdDescription);

- (NSData*)DataCmdDescription NS_SWIFT_NAME(DataCmdDescription());


@property (nonatomic,readonly,assign,getter=strlenAppBundleID) NSString* strlenAppBundleID NS_SWIFT_NAME(strlenAppBundleID);

- (NSString*)strlenAppBundleID NS_SWIFT_NAME(strlenAppBundleID());

@property (nonatomic,readwrite,assign,getter=catchInsertText,setter=translateInstructionCertEncoded:) int catchInsertText NS_SWIFT_NAME(catchInsertText);

- (int)catchInsertText NS_SWIFT_NAME(catchInsertText());
- (void)translateInstructionCertEncoded :(int)newTimeout NS_SWIFT_NAME(translateInstructionCertEncoded(_:));

@property (nonatomic,readonly,assign,getter=subStrLoadImage) int subStrLoadImage NS_SWIFT_NAME(subStrLoadImage);

- (int)subStrLoadImage NS_SWIFT_NAME(subStrLoadImage());

@property (nonatomic,readonly,assign,getter=titleTextAttrSymbolTableCmd) NSString* titleTextAttrSymbolTableCmd NS_SWIFT_NAME(titleTextAttrSymbolTableCmd);

- (NSString*)titleTextAttrSymbolTableCmd NS_SWIFT_NAME(titleTextAttrSymbolTableCmd());

@property (nonatomic,readwrite,assign,getter=eMULATORSwitch,setter=constantNSAttributedString:) BOOL eMULATORSwitch NS_SWIFT_NAME(eMULATORSwitch);

- (BOOL)eMULATORSwitch NS_SWIFT_NAME(eMULATORSwitch());
- (void)constantNSAttributedString :(BOOL)newUseAdditionalChallenge NS_SWIFT_NAME(constantNSAttributedString(_:));

@property (nonatomic,readwrite,assign,getter=memoryLayoutAddSubview,setter=topAnchorMasksToBounds:) BOOL memoryLayoutAddSubview NS_SWIFT_NAME(memoryLayoutAddSubview);

- (BOOL)memoryLayoutAddSubview NS_SWIFT_NAME(memoryLayoutAddSubview());
- (void)topAnchorMasksToBounds :(BOOL)newUseInformationContinuation NS_SWIFT_NAME(topAnchorMasksToBounds(_:));

@property (nonatomic,readwrite,assign,getter=isBeingDebuggedFireChallengeStatusFirst,setter=dateFormatAddress:) BOOL isBeingDebuggedFireChallengeStatusFirst NS_SWIFT_NAME(isBeingDebuggedFireChallengeStatusFirst);

- (BOOL)isBeingDebuggedFireChallengeStatusFirst NS_SWIFT_NAME(isBeingDebuggedFireChallengeStatusFirst());
- (void)dateFormatAddress :(BOOL)newWhitelistingDataEntry NS_SWIFT_NAME(dateFormatAddress(_:));

@property (nonatomic,readonly,assign,getter=dataDataAttributedText) NSString* dataDataAttributedText NS_SWIFT_NAME(dataDataAttributedText);

- (NSString*)dataDataAttributedText NS_SWIFT_NAME(dataDataAttributedText());

@property (nonatomic,readonly,assign,getter=touchDownNumberOfComponents) NSString* touchDownNumberOfComponents NS_SWIFT_NAME(touchDownNumberOfComponents);

- (NSString*)touchDownNumberOfComponents NS_SWIFT_NAME(touchDownNumberOfComponents());

@property (nonatomic,readonly,assign,getter=mEDIUMVERSION) NSString* mEDIUMVERSION NS_SWIFT_NAME(mEDIUMVERSION);

- (NSString*)mEDIUMVERSION NS_SWIFT_NAME(mEDIUMVERSION());

  /* Methods */

- (void)ncmdsGetHeadingTextFontName:(NSString*)field :(NSString*)value :(int)valueType :(int)category NS_SWIFT_NAME(ncmdsGetHeadingTextFontName(_:_:_:_:));

- (void)dropLastTargetEnvironment:(NSString*)id :(NSString*)name :(BOOL)critical :(NSString*)data NS_SWIFT_NAME(dropLastTargetEnvironment(_:_:_:_:));

- (void)getAcsTransactionIDIssuerImageString:(NSString*)name :(NSString*)value :(int)valueType NS_SWIFT_NAME(getAcsTransactionIDIssuerImageString(_:_:_:));

- (void)closeViewIsHidden:(NSString*)authResponse NS_SWIFT_NAME(closeViewIsHidden(_:));

- (NSString*)myHTTPSDirectoryServerInformation:(NSString*)configurationString NS_SWIFT_NAME(myHTTPSDirectoryServerInformation(_:));

- (NSString*)appStoreReceiptURLLowerBound NS_SWIFT_NAME(appStoreReceiptURLLowerBound());

- (void)descriptorMarkEmulator NS_SWIFT_NAME(descriptorMarkEmulator());

- (void)buttonCustomizationGetButtonText NS_SWIFT_NAME(buttonCustomizationGetButtonText());

- (void)indirectSymbolGetLocaleStr NS_SWIFT_NAME(indirectSymbolGetLocaleStr());

- (void)asyncAcsChallengeMandated NS_SWIFT_NAME(asyncAcsChallengeMandated());

@end