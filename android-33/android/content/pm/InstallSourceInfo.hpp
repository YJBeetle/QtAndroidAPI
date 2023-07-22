#pragma once

#include "./SigningInfo.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./InstallSourceInfo.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject InstallSourceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.InstallSourceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint InstallSourceInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString InstallSourceInfo::getInitiatingPackageName() const
	{
		return callObjectMethod(
			"getInitiatingPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline android::content::pm::SigningInfo InstallSourceInfo::getInitiatingPackageSigningInfo() const
	{
		return callObjectMethod(
			"getInitiatingPackageSigningInfo",
			"()Landroid/content/pm/SigningInfo;"
		);
	}
	inline JString InstallSourceInfo::getInstallingPackageName() const
	{
		return callObjectMethod(
			"getInstallingPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline JString InstallSourceInfo::getOriginatingPackageName() const
	{
		return callObjectMethod(
			"getOriginatingPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline jint InstallSourceInfo::getPackageSource() const
	{
		return callMethod<jint>(
			"getPackageSource",
			"()I"
		);
	}
	inline void InstallSourceInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
