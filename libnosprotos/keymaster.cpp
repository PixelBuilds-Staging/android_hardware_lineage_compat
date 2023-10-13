#include "nugget/app/keymaster/keymaster.pb.h"

#define SHIM_C1Ev(class_name, number) \
extern "C" void _ZN6nugget3app9keymaster##number##class_name##C1Ev(nugget::app::keymaster::class_name* obj) { \
    new (obj) nugget::app::keymaster::class_name; \
}

#define SHIM_D1Ev(class_name, number) \
extern "C" void _ZN6nugget3app9keymaster##number##class_name##D1Ev(nugget::app::keymaster::class_name* obj) { \
    obj->~class_name(); \
}

SHIM_C1Ev(DeleteKeyRequest, 16)
SHIM_C1Ev(ExportKeyRequest, 16)
SHIM_C1Ev(ImportKeyRequest, 16)
SHIM_C1Ev(DeleteKeyResponse, 17)
SHIM_C1Ev(ExportKeyResponse, 17)
SHIM_C1Ev(ImportKeyResponse, 17)
SHIM_C1Ev(UpgradeKeyRequest, 17)
SHIM_C1Ev(GenerateKeyRequest, 18)
SHIM_C1Ev(GetBootInfoRequest, 18)
SHIM_C1Ev(UpgradeKeyResponse, 18)
SHIM_C1Ev(DeviceLockedRequest, 19)
SHIM_C1Ev(GenerateKeyResponse, 19)
SHIM_C1Ev(GetBootInfoResponse, 19)
SHIM_C1Ev(AddRngEntropyRequest, 20)
SHIM_C1Ev(DeleteAllKeysRequest, 20)
SHIM_C1Ev(DeviceLockedResponse, 20)
SHIM_C1Ev(AbortOperationRequest, 21)
SHIM_C1Ev(AddRngEntropyResponse, 21)
SHIM_C1Ev(BeginOperationRequest, 21)
SHIM_C1Ev(DeleteAllKeysResponse, 21)
SHIM_C1Ev(EarlyBootEndedRequest, 21)
SHIM_C1Ev(StartAttestKeyRequest, 21)
SHIM_C1Ev(AbortOperationResponse, 22)
SHIM_C1Ev(BeginOperationResponse, 22)
SHIM_C1Ev(EarlyBootEndedResponse, 22)
SHIM_C1Ev(FinishAttestKeyRequest, 22)
SHIM_C1Ev(FinishOperationRequest, 22)
SHIM_C1Ev(ReadCertificateRequest, 22)
SHIM_C1Ev(StartAttestKeyResponse, 22)
SHIM_C1Ev(UpdateOperationRequest, 22)
SHIM_C1Ev(FinishAttestKeyResponse, 22)
SHIM_C1Ev(FinishOperationResponse, 22)
SHIM_C1Ev(ImportWrappedKeyRequest, 23)
SHIM_C1Ev(ReadCertificateResponse, 23)
SHIM_C1Ev(UpdateOperationResponse, 23)
SHIM_C1Ev(ComputeSharedHmacRequest, 24)
SHIM_C1Ev(ContinueAttestKeyRequest, 24)
SHIM_C1Ev(ComputeSharedHmacResponse, 24)
SHIM_C1Ev(ContinueAttestKeyResponse, 25)
SHIM_C1Ev(SetSystemVersionInfoRequest, 27)
SHIM_C1Ev(DestroyAttestationIdsRequest, 28)
SHIM_C1Ev(GetKeyCharacteristicsRequest, 28)
SHIM_C1Ev(SetSystemVersionInfoResponse, 28)
SHIM_C1Ev(DestroyAttestationIdsResponse, 29)
SHIM_C1Ev(GetKeyCharacteristicsResponse, 29)
SHIM_C1Ev(GetHmacSharingParametersRequest, 31)
SHIM_C1Ev(GetHmacSharingParametersResponse, 32)

SHIM_D1Ev(GetBootInfoRequest, 18)
SHIM_D1Ev(DeleteAllKeysRequest, 20)
SHIM_D1Ev(EarlyBootEndedRequest, 21)
SHIM_D1Ev(DestroyAttestationIdsRequest, 28)
SHIM_D1Ev(GetHmacSharingParametersRequest, 31)