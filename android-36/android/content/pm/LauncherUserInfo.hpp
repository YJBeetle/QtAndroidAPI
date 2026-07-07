#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./LauncherUserInfo.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject LauncherUserInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.LauncherUserInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString LauncherUserInfo::PRIVATE_SPACE_ENTRYPOINT_HIDDEN()
	{
		return getStaticObjectField(
			"android.content.pm.LauncherUserInfo",
			"PRIVATE_SPACE_ENTRYPOINT_HIDDEN",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint LauncherUserInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::os::Bundle LauncherUserInfo::getUserConfig() const
	{
		return callObjectMethod(
			"getUserConfig",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint LauncherUserInfo::getUserSerialNumber() const
	{
		return callMethod<jint>(
			"getUserSerialNumber",
			"()I"
		);
	}
	inline JString LauncherUserInfo::getUserType() const
	{
		return callObjectMethod(
			"getUserType",
			"()Ljava/lang/String;"
		);
	}
	inline void LauncherUserInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
