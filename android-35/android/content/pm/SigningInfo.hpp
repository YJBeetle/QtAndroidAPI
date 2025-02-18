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
	inline SigningInfo::SigningInfo(jint arg0, JObject arg1, JObject arg2, JObject arg3)
		: JObject(
			"android.content.pm.SigningInfo",
			"(ILjava/util/Collection;Ljava/util/Collection;Ljava/util/Collection;)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object()
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
	inline JObject SigningInfo::getPublicKeys() const
	{
		return callObjectMethod(
			"getPublicKeys",
			"()Ljava/util/Collection;"
		);
	}
	inline jint SigningInfo::getSchemeVersion() const
	{
		return callMethod<jint>(
			"getSchemeVersion",
			"()I"
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
