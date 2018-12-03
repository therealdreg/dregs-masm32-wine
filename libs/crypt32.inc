; --------------------------------------------------------------------------------------------------
;                           crypt32.inc Copyright The MASM32 SDK 1998-2010
; --------------------------------------------------------------------------------------------------

IFNDEF CRYPT32_INC
CRYPT32_INC equ <1>

CertAddCRLContextToStore PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertAddCRLLinkToStore PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertAddCTLContextToStore PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertAddCTLLinkToStore PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertAddCertificateContextToStore PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertAddCertificateLinkToStore PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertAddEncodedCRLToStore PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertAddEncodedCTLToStore PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertAddEncodedCertificateToStore PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD

CertAddEncodedCertificateToSystemStoreA PROTO STDCALL :DWORD,:DWORD,:DWORD
IFNDEF __UNICODE__
  CertAddEncodedCertificateToSystemStore equ <CertAddEncodedCertificateToSystemStoreA>
ENDIF

CertAddEncodedCertificateToSystemStoreW PROTO STDCALL :DWORD,:DWORD,:DWORD
IFDEF __UNICODE__
  CertAddEncodedCertificateToSystemStore equ <CertAddEncodedCertificateToSystemStoreW>
ENDIF

CertAddEnhancedKeyUsageIdentifier PROTO STDCALL :DWORD,:DWORD
CertAddSerializedElementToStore PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertAddStoreToCollection PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertAlgIdToOID PROTO STDCALL :DWORD
CertCloseStore PROTO STDCALL :DWORD,:DWORD
CertCompareCertificate PROTO STDCALL :DWORD,:DWORD,:DWORD
CertCompareCertificateName PROTO STDCALL :DWORD,:DWORD,:DWORD
CertCompareIntegerBlob PROTO STDCALL :DWORD,:DWORD
CertComparePublicKeyInfo PROTO STDCALL :DWORD,:DWORD,:DWORD
CertControlStore PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertCreateCRLContext PROTO STDCALL :DWORD,:DWORD,:DWORD
CertCreateCTLContext PROTO STDCALL :DWORD,:DWORD,:DWORD
CertCreateCTLEntryFromCertificateContextProperties PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertCreateCertificateChainEngine PROTO STDCALL :DWORD,:DWORD
CertCreateCertificateContext PROTO STDCALL :DWORD,:DWORD,:DWORD
CertCreateContext PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertCreateSelfSignCertificate PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertDeleteCRLFromStore PROTO STDCALL :DWORD
CertDeleteCTLFromStore PROTO STDCALL :DWORD
CertDeleteCertificateFromStore PROTO STDCALL :DWORD
CertDuplicateCRLContext PROTO STDCALL :DWORD
CertDuplicateCTLContext PROTO STDCALL :DWORD
CertDuplicateCertificateChain PROTO STDCALL :DWORD
CertDuplicateCertificateContext PROTO STDCALL :DWORD
CertDuplicateStore PROTO STDCALL :DWORD
CertEnumCRLContextProperties PROTO STDCALL :DWORD,:DWORD
CertEnumCRLsInStore PROTO STDCALL :DWORD,:DWORD
CertEnumCTLContextProperties PROTO STDCALL :DWORD,:DWORD
CertEnumCTLsInStore PROTO STDCALL :DWORD,:DWORD
CertEnumCertificateContextProperties PROTO STDCALL :DWORD,:DWORD
CertEnumCertificatesInStore PROTO STDCALL :DWORD,:DWORD
CertEnumPhysicalStore PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertEnumSubjectInSortedCTL PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertEnumSystemStore PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertEnumSystemStoreLocation PROTO STDCALL :DWORD,:DWORD,:DWORD
CertFindAttribute PROTO STDCALL :DWORD,:DWORD,:DWORD
CertFindCRLInStore PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertFindCTLInStore PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertFindCertificateInCRL PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertFindCertificateInStore PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertFindChainInStore PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertFindExtension PROTO STDCALL :DWORD,:DWORD,:DWORD
CertFindRDNAttr PROTO STDCALL :DWORD,:DWORD
CertFindSubjectInCTL PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertFindSubjectInSortedCTL PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertFreeCRLContext PROTO STDCALL :DWORD
CertFreeCTLContext PROTO STDCALL :DWORD
CertFreeCertificateChain PROTO STDCALL :DWORD
CertFreeCertificateChainEngine PROTO STDCALL :DWORD
CertFreeCertificateContext PROTO STDCALL :DWORD
CertGetCRLContextProperty PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertGetCRLFromStore PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertGetCTLContextProperty PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertGetCertificateChain PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertGetCertificateContextProperty PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertGetEnhancedKeyUsage PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertGetIntendedKeyUsage PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertGetIssuerCertificateFromStore PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD

CertGetNameStringA PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IFNDEF __UNICODE__
  CertGetNameString equ <CertGetNameStringA>
ENDIF

CertGetNameStringW PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IFDEF __UNICODE__
  CertGetNameString equ <CertGetNameStringW>
ENDIF

CertGetPublicKeyLength PROTO STDCALL :DWORD,:DWORD
CertGetStoreProperty PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertGetSubjectCertificateFromStore PROTO STDCALL :DWORD,:DWORD,:DWORD
CertGetValidUsages PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertIsRDNAttrsInCertificateName PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertIsValidCRLForCertificate PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD

CertNameToStrA PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IFNDEF __UNICODE__
  CertNameToStr equ <CertNameToStrA>
ENDIF

CertNameToStrW PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IFDEF __UNICODE__
  CertNameToStr equ <CertNameToStrW>
ENDIF

CertOIDToAlgId PROTO STDCALL :DWORD
CertOpenStore PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD

CertOpenSystemStoreA PROTO STDCALL :DWORD,:DWORD
IFNDEF __UNICODE__
  CertOpenSystemStore equ <CertOpenSystemStoreA>
ENDIF

CertOpenSystemStoreW PROTO STDCALL :DWORD,:DWORD
IFDEF __UNICODE__
  CertOpenSystemStore equ <CertOpenSystemStoreW>
ENDIF

CertRDNValueToStrA PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
IFNDEF __UNICODE__
  CertRDNValueToStr equ <CertRDNValueToStrA>
ENDIF

CertRDNValueToStrW PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
IFDEF __UNICODE__
  CertRDNValueToStr equ <CertRDNValueToStrW>
ENDIF

CertRegisterPhysicalStore PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertRegisterSystemStore PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertRemoveEnhancedKeyUsageIdentifier PROTO STDCALL :DWORD,:DWORD
CertRemoveStoreFromCollection PROTO STDCALL :DWORD,:DWORD
CertResyncCertificateChainEngine PROTO STDCALL :DWORD
CertSaveStore PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertSerializeCRLStoreElement PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertSerializeCTLStoreElement PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertSerializeCertificateStoreElement PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertSetCRLContextProperty PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertSetCTLContextProperty PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertSetCertificateContextPropertiesFromCTLEntry PROTO STDCALL :DWORD,:DWORD,:DWORD
CertSetCertificateContextProperty PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertSetEnhancedKeyUsage PROTO STDCALL :DWORD,:DWORD
CertSetStoreProperty PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD

CertStrToNameA PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IFNDEF __UNICODE__
  CertStrToName equ <CertStrToNameA>
ENDIF

CertStrToNameW PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IFDEF __UNICODE__
  CertStrToName equ <CertStrToNameW>
ENDIF

CertUnregisterPhysicalStore PROTO STDCALL :DWORD,:DWORD,:DWORD
CertUnregisterSystemStore PROTO STDCALL :DWORD,:DWORD
CertVerifyCRLRevocation PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertVerifyCRLTimeValidity PROTO STDCALL :DWORD,:DWORD
CertVerifyCTLUsage PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertVerifyCertificateChainPolicy PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CertVerifyRevocation PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CertVerifySubjectCertificateContext PROTO STDCALL :DWORD,:DWORD,:DWORD
CertVerifyTimeValidity PROTO STDCALL :DWORD,:DWORD
CertVerifyValidityNesting PROTO STDCALL :DWORD,:DWORD
CryptAcquireCertificatePrivateKey PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD

CryptBinaryToStringA PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IFNDEF __UNICODE__
  CryptBinaryToString equ <CryptBinaryToStringA>
ENDIF

CryptBinaryToStringW PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IFDEF __UNICODE__
  CryptBinaryToString equ <CryptBinaryToStringW>
ENDIF

CryptCloseAsyncHandle PROTO STDCALL :DWORD
CryptCreateAsyncHandle PROTO STDCALL :DWORD,:DWORD
CryptCreateKeyIdentifierFromCSP PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptDecodeMessage PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptDecodeObject PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptDecodeObjectEx PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptDecryptAndVerifyMessageSignature PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptDecryptMessage PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptEncodeObject PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptEncodeObjectEx PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptEncryptMessage PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptEnumKeyIdentifierProperties PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptEnumOIDFunction PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptEnumOIDInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CryptExportPKCS8 PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptExportPublicKeyInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptExportPublicKeyInfoEx PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptFindCertificateKeyProvInfo PROTO STDCALL :DWORD,:DWORD,:DWORD
CryptFindLocalizedName PROTO STDCALL :DWORD
CryptFindOIDInfo PROTO STDCALL :DWORD,:DWORD,:DWORD
CryptFormatObject PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptFreeOIDFunctionAddress PROTO STDCALL :DWORD,:DWORD
CryptGetAsyncParam PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CryptGetDefaultOIDDllList PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CryptGetDefaultOIDFunctionAddress PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptGetKeyIdentifierProperty PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptGetMessageCertificates PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptGetMessageSignerCount PROTO STDCALL :DWORD,:DWORD,:DWORD
CryptGetOIDFunctionAddress PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptGetOIDFunctionValue PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptHashCertificate PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptHashMessage PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptHashPublicKeyInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptHashToBeSigned PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptImportPKCS8 PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptImportPublicKeyInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CryptImportPublicKeyInfoEx PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptInitOIDFunctionSet PROTO STDCALL :DWORD,:DWORD
CryptInstallDefaultContext PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptInstallOIDFunctionAddress PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptLoadSip PROTO STDCALL :DWORD,:DWORD,:DWORD
CryptMemAlloc PROTO STDCALL :DWORD
CryptMemFree PROTO STDCALL :DWORD
CryptMemRealloc PROTO STDCALL :DWORD,:DWORD
CryptMsgCalculateEncodedLength PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgClose PROTO STDCALL :DWORD
CryptMsgControl PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CryptMsgCountersign PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CryptMsgCountersignEncoded PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgDuplicate PROTO STDCALL :DWORD
CryptMsgEncodeAndSignCTL PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgGetAndVerifySigner PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgGetParam PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgOpenToDecode PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgOpenToEncode PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgSignCTL PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgUpdate PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CryptMsgVerifyCountersignatureEncoded PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptMsgVerifyCountersignatureEncodedEx PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptProtectData PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptQueryObject PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptRegisterDefaultOIDFunction PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CryptRegisterOIDFunction PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptRegisterOIDInfo PROTO STDCALL :DWORD,:DWORD
CryptSIPAddProvider PROTO STDCALL :DWORD
CryptSIPCreateIndirectData PROTO STDCALL :DWORD,:DWORD,:DWORD
CryptSIPGetSignedDataMsg PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSIPLoad PROTO STDCALL :DWORD,:DWORD,:DWORD
CryptSIPPutSignedDataMsg PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSIPRemoveProvider PROTO STDCALL :DWORD
CryptSIPRemoveSignedDataMsg PROTO STDCALL :DWORD,:DWORD
CryptSIPRetrieveSubjectGuid PROTO STDCALL :DWORD,:DWORD,:DWORD
CryptSIPRetrieveSubjectGuidForCatalogFile PROTO STDCALL :DWORD,:DWORD,:DWORD
CryptSIPVerifyIndirectData PROTO STDCALL :DWORD,:DWORD
CryptSetAsyncParam PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CryptSetKeyIdentifierProperty PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSetOIDFunctionValue PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSignAndEncodeCertificate PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSignAndEncryptMessage PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSignCertificate PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSignMessage PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptSignMessageWithKey PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD

CryptStringToBinaryA PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IFNDEF __UNICODE__
  CryptStringToBinary equ <CryptStringToBinaryA>
ENDIF

CryptStringToBinaryW PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IFDEF __UNICODE__
  CryptStringToBinary equ <CryptStringToBinaryW>
ENDIF

CryptUninstallDefaultContext PROTO STDCALL :DWORD,:DWORD,:DWORD
CryptUnprotectData PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptUnregisterDefaultOIDFunction PROTO STDCALL :DWORD,:DWORD,:DWORD
CryptUnregisterOIDFunction PROTO STDCALL :DWORD,:DWORD,:DWORD
CryptUnregisterOIDInfo PROTO STDCALL :DWORD
CryptVerifyCertificateSignature PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptVerifyCertificateSignatureEx PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptVerifyDetachedMessageHash PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptVerifyDetachedMessageSignature PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptVerifyMessageHash PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptVerifyMessageSignature PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CryptVerifyMessageSignatureWithKey PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DbgInitOSS PROTO STDCALL :DWORD
DbgPrintf PROTO C :VARARG
PFXExportCertStore PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
PFXExportCertStoreEx PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PFXImportCertStore PROTO STDCALL :DWORD,:DWORD,:DWORD
PFXIsPFXBlob PROTO STDCALL :DWORD
PFXVerifyPassword PROTO STDCALL :DWORD,:DWORD,:DWORD

ELSE
  echo ------------------------------------------
  echo WARNING duplicate include file crypt32.inc
  echo ------------------------------------------
ENDIF