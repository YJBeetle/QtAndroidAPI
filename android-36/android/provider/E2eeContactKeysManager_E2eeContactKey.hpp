#pragma once

#include "../../JByteArray.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./E2eeContactKeysManager_E2eeContactKey.def.hpp"

namespace android::provider
{
	// Fields
	inline JObject E2eeContactKeysManager_E2eeContactKey::CREATOR()
	{
		return getStaticObjectField(
			"android.provider.E2eeContactKeysManager$E2eeContactKey",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint E2eeContactKeysManager_E2eeContactKey::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean E2eeContactKeysManager_E2eeContactKey::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString E2eeContactKeysManager_E2eeContactKey::getAccountId() const
	{
		return callObjectMethod(
			"getAccountId",
			"()Ljava/lang/String;"
		);
	}
	inline JString E2eeContactKeysManager_E2eeContactKey::getDeviceId() const
	{
		return callObjectMethod(
			"getDeviceId",
			"()Ljava/lang/String;"
		);
	}
	inline JString E2eeContactKeysManager_E2eeContactKey::getDisplayName() const
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		);
	}
	inline JString E2eeContactKeysManager_E2eeContactKey::getEmailAddress() const
	{
		return callObjectMethod(
			"getEmailAddress",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray E2eeContactKeysManager_E2eeContactKey::getKeyValue() const
	{
		return callObjectMethod(
			"getKeyValue",
			"()[B"
		);
	}
	inline jint E2eeContactKeysManager_E2eeContactKey::getLocalVerificationState() const
	{
		return callMethod<jint>(
			"getLocalVerificationState",
			"()I"
		);
	}
	inline JString E2eeContactKeysManager_E2eeContactKey::getOwnerPackageName() const
	{
		return callObjectMethod(
			"getOwnerPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline JString E2eeContactKeysManager_E2eeContactKey::getPhoneNumber() const
	{
		return callObjectMethod(
			"getPhoneNumber",
			"()Ljava/lang/String;"
		);
	}
	inline jint E2eeContactKeysManager_E2eeContactKey::getRemoteVerificationState() const
	{
		return callMethod<jint>(
			"getRemoteVerificationState",
			"()I"
		);
	}
	inline jlong E2eeContactKeysManager_E2eeContactKey::getTimeUpdated() const
	{
		return callMethod<jlong>(
			"getTimeUpdated",
			"()J"
		);
	}
	inline jint E2eeContactKeysManager_E2eeContactKey::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void E2eeContactKeysManager_E2eeContactKey::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
