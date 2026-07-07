#pragma once

#include "../../JByteArray.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./E2eeContactKeysManager_E2eeSelfKey.def.hpp"

namespace android::provider
{
	// Fields
	inline JObject E2eeContactKeysManager_E2eeSelfKey::CREATOR()
	{
		return getStaticObjectField(
			"android.provider.E2eeContactKeysManager$E2eeSelfKey",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint E2eeContactKeysManager_E2eeSelfKey::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean E2eeContactKeysManager_E2eeSelfKey::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString E2eeContactKeysManager_E2eeSelfKey::getAccountId() const
	{
		return callObjectMethod(
			"getAccountId",
			"()Ljava/lang/String;"
		);
	}
	inline JString E2eeContactKeysManager_E2eeSelfKey::getDeviceId() const
	{
		return callObjectMethod(
			"getDeviceId",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray E2eeContactKeysManager_E2eeSelfKey::getKeyValue() const
	{
		return callObjectMethod(
			"getKeyValue",
			"()[B"
		);
	}
	inline JString E2eeContactKeysManager_E2eeSelfKey::getOwnerPackageName() const
	{
		return callObjectMethod(
			"getOwnerPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline jint E2eeContactKeysManager_E2eeSelfKey::getRemoteVerificationState() const
	{
		return callMethod<jint>(
			"getRemoteVerificationState",
			"()I"
		);
	}
	inline jlong E2eeContactKeysManager_E2eeSelfKey::getTimeUpdated() const
	{
		return callMethod<jlong>(
			"getTimeUpdated",
			"()J"
		);
	}
	inline jint E2eeContactKeysManager_E2eeSelfKey::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void E2eeContactKeysManager_E2eeSelfKey::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
