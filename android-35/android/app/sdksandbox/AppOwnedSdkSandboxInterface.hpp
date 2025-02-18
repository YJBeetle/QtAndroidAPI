#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./AppOwnedSdkSandboxInterface.def.hpp"

namespace android::app::sdksandbox
{
	// Fields
	inline JObject AppOwnedSdkSandboxInterface::CREATOR()
	{
		return getStaticObjectField(
			"android.app.sdksandbox.AppOwnedSdkSandboxInterface",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline AppOwnedSdkSandboxInterface::AppOwnedSdkSandboxInterface(JString arg0, jlong arg1, JObject arg2)
		: JObject(
			"android.app.sdksandbox.AppOwnedSdkSandboxInterface",
			"(Ljava/lang/String;JLandroid/os/IBinder;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		) {}
	
	// Methods
	inline jint AppOwnedSdkSandboxInterface::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject AppOwnedSdkSandboxInterface::getInterface() const
	{
		return callObjectMethod(
			"getInterface",
			"()Landroid/os/IBinder;"
		);
	}
	inline JString AppOwnedSdkSandboxInterface::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jlong AppOwnedSdkSandboxInterface::getVersion() const
	{
		return callMethod<jlong>(
			"getVersion",
			"()J"
		);
	}
	inline void AppOwnedSdkSandboxInterface::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::sdksandbox

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::sdksandbox;
#endif
