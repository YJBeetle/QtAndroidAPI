#pragma once

#include "../os/Parcel.def.hpp"
#include "./RangingConfig.def.hpp"
#include "./SessionConfig.def.hpp"
#include "../../JString.hpp"
#include "./RangingPreference.def.hpp"

namespace android::ranging
{
	// Fields
	inline JObject RangingPreference::CREATOR()
	{
		return getStaticObjectField(
			"android.ranging.RangingPreference",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint RangingPreference::DEVICE_ROLE_INITIATOR()
	{
		return getStaticField<jint>(
			"android.ranging.RangingPreference",
			"DEVICE_ROLE_INITIATOR"
		);
	}
	inline jint RangingPreference::DEVICE_ROLE_RESPONDER()
	{
		return getStaticField<jint>(
			"android.ranging.RangingPreference",
			"DEVICE_ROLE_RESPONDER"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RangingPreference::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint RangingPreference::getDeviceRole() const
	{
		return callMethod<jint>(
			"getDeviceRole",
			"()I"
		);
	}
	inline android::ranging::RangingConfig RangingPreference::getRangingParams() const
	{
		return callObjectMethod(
			"getRangingParams",
			"()Landroid/ranging/RangingConfig;"
		);
	}
	inline android::ranging::SessionConfig RangingPreference::getSessionConfig() const
	{
		return callObjectMethod(
			"getSessionConfig",
			"()Landroid/ranging/SessionConfig;"
		);
	}
	inline JString RangingPreference::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void RangingPreference::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::ranging

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging;
#endif
