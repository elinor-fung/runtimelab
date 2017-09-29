//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.
//

//----------------------------------------------------------
// lwmlist.h - List of all LightWeightMap in MethodContext.
// To use, #define LWM(map, key, value) to something.
// If you need to distinguish DenseLightWeightMap, #define DENSELWM(map, value) as well.
//----------------------------------------------------------

#ifndef LWM
#error Define LWM before including this file.
#endif

// If the key is needed, then DENSELWM must be defined.
#ifndef DENSELWM
#define DENSELWM(map, value) LWM(map, this_is_an_error, value)
#endif

LWM(AppendClassName, Agnostic_AppendClassName, DWORD)
LWM(AreTypesEquivalent, DLDL, DWORD)
LWM(AsCorInfoType, DWORDLONG, DWORD)
LWM(CanAccessClass, Agnostic_CanAccessClassIn, Agnostic_CanAccessClassOut)
LWM(CanAccessFamily, DLDL, DWORD)
LWM(CanCast, DLDL, DWORD)
LWM(CanGetCookieForPInvokeCalliSig, CanGetCookieForPInvokeCalliSigValue, DWORD)
LWM(CanGetVarArgsHandle, CanGetVarArgsHandleValue, DWORD)
LWM(CanInline, DLDL, Agnostic_CanInline)
LWM(CanInlineTypeCheckWithObjectVTable, DWORDLONG, DWORD)
LWM(CanSkipMethodVerification, DLD, DWORD)
LWM(CanTailCall, Agnostic_CanTailCall, DWORD)
LWM(CheckMethodModifier, Agnostic_CheckMethodModifier, DWORD)
LWM(CompileMethod, DWORD, Agnostic_CompileMethod)
LWM(ConstructStringLiteral, DLD, DLD)
LWM(EmbedClassHandle, DWORDLONG, DLDL)
LWM(EmbedFieldHandle, DWORDLONG, DLDL)
LWM(EmbedGenericHandle, Agnostic_EmbedGenericHandle, Agnostic_CORINFO_GENERICHANDLE_RESULT)
LWM(EmbedMethodHandle, DWORDLONG, DLDL)
LWM(EmbedModuleHandle, DWORDLONG, DLDL)
DENSELWM(EmptyStringLiteral, DLD)
DENSELWM(Environment, Agnostic_Environment)
DENSELWM(ErrorList, DWORD)
LWM(FilterException, DWORD, DWORD)
LWM(FindCallSiteSig, Agnostic_FindCallSiteSig, Agnostic_CORINFO_SIG_INFO)
LWM(FindNameOfToken, DLD, DLD)
LWM(FindSig, Agnostic_FindSig, Agnostic_CORINFO_SIG_INFO)
LWM(GetAddressOfPInvokeFixup, DWORDLONG, DLDL)
LWM(GetAddressOfPInvokeTarget, DWORDLONG, DLD)
LWM(GetAddrOfCaptureThreadGlobal, DWORD, DLDL)
LWM(GetArgClass, GetArgClassValue, Agnostic_GetArgClass_Value)
LWM(GetArgNext, DWORDLONG, DWORDLONG)
LWM(GetArgType, GetArgTypeValue, Agnostic_GetArgType_Value)
LWM(GetArrayInitializationData, DLD, DWORDLONG)
LWM(GetArrayRank, DWORDLONG, DWORD)
LWM(GetBBProfileData, DWORDLONG, Agnostic_GetBBProfileData)
LWM(GetBoundaries, DWORDLONG, Agnostic_GetBoundaries)
LWM(GetBoxHelper, DWORDLONG, DWORD)
LWM(GetBuiltinClass, DWORD, DWORDLONG)
LWM(GetCallInfo, Agnostic_GetCallInfo, Agnostic_CORINFO_CALL_INFO)
LWM(GetCastingHelper, Agnostic_GetCastingHelper, DWORD)
LWM(GetChildType, DWORDLONG, DLD)
LWM(GetClassAlignmentRequirement, DLD, DWORD)
LWM(GetClassAttribs, DWORDLONG, DWORD)
LWM(GetClassDomainID, DWORDLONG, DLD)
LWM(GetClassGClayout, DWORDLONG, Agnostic_GetClassGClayout)
LWM(GetClassModuleIdForStatics, DWORDLONG, Agnostic_GetClassModuleIdForStatics)
LWM(GetClassName, DWORDLONG, DWORD)
LWM(GetClassNumInstanceFields, DWORDLONG, DWORD)
LWM(GetClassSize, DWORDLONG, DWORD)
LWM(GetCookieForPInvokeCalliSig, GetCookieForPInvokeCalliSigValue, DLDL)
LWM(GetDefaultEqualityComparerClass,  DWORDLONG, DWORDLONG)
LWM(GetDelegateCtor, Agnostic_GetDelegateCtorIn, Agnostic_GetDelegateCtorOut)
LWM(GetEEInfo, DWORD, Agnostic_CORINFO_EE_INFO)
LWM(GetEHinfo, DLD, Agnostic_CORINFO_EH_CLAUSE)
LWM(GetFieldAddress, DWORDLONG, Agnostic_GetFieldAddress)
LWM(GetFieldClass, DWORDLONG, DWORDLONG)
LWM(GetFieldInClass, DLD, DWORDLONG)
LWM(GetFieldInfo, Agnostic_GetFieldInfo, Agnostic_CORINFO_FIELD_INFO)
LWM(GetFieldName, DWORDLONG, DD)
LWM(GetFieldOffset, DWORDLONG, DWORD)
LWM(GetFieldThreadLocalStoreID, DWORDLONG, DLD)
LWM(GetFieldType, DLDL, DLD)
LWM(GetFunctionEntryPoint, DLD, DLD)
LWM(GetFunctionFixedEntryPoint, DWORDLONG, Agnostic_CORINFO_CONST_LOOKUP)
LWM(GetGSCookie, DWORD, DLDL)
LWM(GetHelperFtn, DWORD, DLDL)
LWM(GetHelperName, DWORD, DWORD)
LWM(GetHFAType, DWORDLONG, DWORD)
LWM(GetInlinedCallFrameVptr, DWORD, DLDL)
LWM(GetIntConfigValue, Agnostic_ConfigIntInfo, DWORD)
LWM(GetIntrinsicID, DWORDLONG, DD)
LWM(GetJitFlags, DWORD, DD)
LWM(GetJitTimeLogFilename, DWORD, DWORD)
LWM(GetJustMyCodeHandle, DWORDLONG, DLDL)
LWM(GetLazyStringLiteralHelper, DWORDLONG, DWORD)
LWM(GetLocationOfThisType, DWORDLONG, Agnostic_CORINFO_LOOKUP_KIND)
LWM(GetMethodAttribs, DWORDLONG, DWORD)
LWM(GetMethodClass, DWORDLONG, DWORDLONG)
LWM(GetMethodDefFromMethod, DWORDLONG, DWORD)
LWM(GetMethodHash, DWORDLONG, DWORD)
LWM(GetMethodInfo, DWORDLONG, Agnostic_GetMethodInfo)
LWM(GetMethodName, DLD, DD)
LWM(GetMethodNameFromMetadata, DLDD, DDD)
LWM(GetMethodSig, DLDL, Agnostic_CORINFO_SIG_INFO)
LWM(GetMethodSync, DWORDLONG, DLDL)
LWM(GetMethodVTableOffset, DWORDLONG, DDD)
LWM(GetNewArrHelper, DWORDLONG, DWORD)
LWM(GetNewHelper, Agnostic_GetNewHelper, DWORD)
LWM(GetParentType, DWORDLONG, DWORDLONG)
LWM(GetPInvokeUnmanagedTarget, DWORDLONG, DLDL)
LWM(GetProfilingHandle, DWORD, Agnostic_GetProfilingHandle)
LWM(GetReadyToRunHelper, GetReadyToRunHelper_TOKENin, GetReadyToRunHelper_TOKENout)
LWM(GetReadyToRunDelegateCtorHelper, GetReadyToRunDelegateCtorHelper_TOKENIn, Agnostic_CORINFO_LOOKUP)
LWM(GetRelocTypeHint, DWORDLONG, DWORD)
LWM(GetSecurityPrologHelper, DWORDLONG, DWORD)
LWM(GetSharedCCtorHelper, DWORDLONG, DWORD)
LWM(GetStringConfigValue, DWORD, DWORD)
LWM(GetSystemVAmd64PassStructInRegisterDescriptor, DWORDLONG, Agnostic_GetSystemVAmd64PassStructInRegisterDescriptor)
LWM(GetTailCallCopyArgsThunk, Agnostic_GetTailCallCopyArgsThunk, DWORDLONG)
LWM(GetThreadTLSIndex, DWORD, DLD)
LWM(GetTokenTypeAsHandle, GetTokenTypeAsHandleValue, DWORDLONG)
LWM(GetTypeForBox, DWORDLONG, DWORDLONG)
LWM(GetTypeForPrimitiveValueClass, DWORDLONG, DWORD)
LWM(GetUnBoxHelper, DWORDLONG, DWORD)
LWM(GetUnmanagedCallConv, DWORDLONG, DWORD)
LWM(GetVarArgsHandle, GetVarArgsHandleValue, DLDL)
LWM(GetVars, DWORDLONG, Agnostic_GetVars)
DENSELWM(HandleException, DWORD)
LWM(InitClass, Agnostic_InitClass, DWORD)
LWM(InitConstraintsForVerification, DWORDLONG, DD)
LWM(IsCompatibleDelegate, Agnostic_IsCompatibleDelegate, DD)
LWM(IsDelegateCreationAllowed, DLDL, DWORD)
LWM(IsFieldStatic, DWORDLONG, DWORD)
LWM(IsInSIMDModule, DWORDLONG, DWORD)
LWM(IsInstantiationOfVerifiedGeneric, DWORDLONG, DWORD)
LWM(IsSDArray, DWORDLONG, DWORD)
LWM(IsStructRequiringStackAllocRetBuf, DWORDLONG, DWORD)
LWM(IsValidStringRef, DLD, DWORD)
LWM(IsValidToken, DLD, DWORD)
LWM(IsValueClass, DWORDLONG, DWORD)
LWM(IsWriteBarrierHelperRequired, DWORDLONG, DWORD)
LWM(MergeClasses, DLDL, DWORDLONG)
LWM(PInvokeMarshalingRequired, PInvokeMarshalingRequiredValue, DWORD)
LWM(ResolveToken, Agnostic_CORINFO_RESOLVED_TOKENin, ResolveTokenValue)
LWM(ResolveVirtualMethod, Agnostic_ResolveVirtualMethod, DWORDLONG)
LWM(TryResolveToken, Agnostic_CORINFO_RESOLVED_TOKENin, TryResolveTokenValue)
LWM(SatisfiesClassConstraints, DWORDLONG, DWORD)
LWM(SatisfiesMethodConstraints, DLDL, DWORD)
LWM(ShouldEnforceCallvirtRestriction, DWORDLONG, DWORD)

#undef LWM
#undef DENSELWM
