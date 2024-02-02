#pragma once

#include "../../content/pm/SharedLibraryInfo.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./SandboxedSdk.def.hpp"

namespace android::app::sdksandbox
{
	// Fields
	inline JObject SandboxedSdk::CREATOR()
	{
		return getStaticObjectField(
			"android.app.sdksandbox.SandboxedSdk",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline SandboxedSdk::SandboxedSdk(JObject arg0)
		: JObject(
			"android.app.sdksandbox.SandboxedSdk",
			"(Landroid/os/IBinder;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint SandboxedSdk::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject SandboxedSdk::getInterface() const
	{
		return callObjectMethod(
			"getInterface",
			"()Landroid/os/IBinder;"
		);
	}
	inline android::content::pm::SharedLibraryInfo SandboxedSdk::getSharedLibraryInfo() const
	{
		return callObjectMethod(
			"getSharedLibraryInfo",
			"()Landroid/content/pm/SharedLibraryInfo;"
		);
	}
	inline void SandboxedSdk::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
