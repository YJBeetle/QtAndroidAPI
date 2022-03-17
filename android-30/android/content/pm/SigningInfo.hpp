#pragma once

#include "../../../JArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "./SigningInfo.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject SigningInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.SigningInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline SigningInfo::SigningInfo()
		: JObject(
			"android.content.pm.SigningInfo",
			"()V"
		) {}
	inline SigningInfo::SigningInfo(android::content::pm::SigningInfo &arg0)
		: JObject(
			"android.content.pm.SigningInfo",
			"(Landroid/content/pm/SigningInfo;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint SigningInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JArray SigningInfo::getApkContentsSigners() const
	{
		return callObjectMethod(
			"getApkContentsSigners",
			"()[Landroid/content/pm/Signature;"
		);
	}
	inline JArray SigningInfo::getSigningCertificateHistory() const
	{
		return callObjectMethod(
			"getSigningCertificateHistory",
			"()[Landroid/content/pm/Signature;"
		);
	}
	inline jboolean SigningInfo::hasMultipleSigners() const
	{
		return callMethod<jboolean>(
			"hasMultipleSigners",
			"()Z"
		);
	}
	inline jboolean SigningInfo::hasPastSigningCertificates() const
	{
		return callMethod<jboolean>(
			"hasPastSigningCertificates",
			"()Z"
		);
	}
	inline void SigningInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

