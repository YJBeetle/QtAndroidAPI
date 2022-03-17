#pragma once

#include "../../../JByteArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/cert/Certificate.def.hpp"
#include "./ApkChecksum.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject ApkChecksum::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.ApkChecksum",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ApkChecksum::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline java::security::cert::Certificate ApkChecksum::getInstallerCertificate() const
	{
		return callObjectMethod(
			"getInstallerCertificate",
			"()Ljava/security/cert/Certificate;"
		);
	}
	inline JString ApkChecksum::getInstallerPackageName() const
	{
		return callObjectMethod(
			"getInstallerPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline JString ApkChecksum::getSplitName() const
	{
		return callObjectMethod(
			"getSplitName",
			"()Ljava/lang/String;"
		);
	}
	inline jint ApkChecksum::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline JByteArray ApkChecksum::getValue() const
	{
		return callObjectMethod(
			"getValue",
			"()[B"
		);
	}
	inline void ApkChecksum::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
