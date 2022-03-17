#pragma once

#include "../Intent.def.hpp"
#include "../../graphics/Bitmap.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./PackageInstaller_SessionInfo.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject PackageInstaller_SessionInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller$SessionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::content::Intent PackageInstaller_SessionInfo::createDetailsIntent() const
	{
		return callObjectMethod(
			"createDetailsIntent",
			"()Landroid/content/Intent;"
		);
	}
	inline jint PackageInstaller_SessionInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::graphics::Bitmap PackageInstaller_SessionInfo::getAppIcon() const
	{
		return callObjectMethod(
			"getAppIcon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	inline JString PackageInstaller_SessionInfo::getAppLabel() const
	{
		return callObjectMethod(
			"getAppLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString PackageInstaller_SessionInfo::getAppPackageName() const
	{
		return callObjectMethod(
			"getAppPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline jint PackageInstaller_SessionInfo::getInstallLocation() const
	{
		return callMethod<jint>(
			"getInstallLocation",
			"()I"
		);
	}
	inline jint PackageInstaller_SessionInfo::getInstallReason() const
	{
		return callMethod<jint>(
			"getInstallReason",
			"()I"
		);
	}
	inline JString PackageInstaller_SessionInfo::getInstallerPackageName() const
	{
		return callObjectMethod(
			"getInstallerPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline jint PackageInstaller_SessionInfo::getMode() const
	{
		return callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	inline jint PackageInstaller_SessionInfo::getOriginatingUid() const
	{
		return callMethod<jint>(
			"getOriginatingUid",
			"()I"
		);
	}
	inline android::net::Uri PackageInstaller_SessionInfo::getOriginatingUri() const
	{
		return callObjectMethod(
			"getOriginatingUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jfloat PackageInstaller_SessionInfo::getProgress() const
	{
		return callMethod<jfloat>(
			"getProgress",
			"()F"
		);
	}
	inline android::net::Uri PackageInstaller_SessionInfo::getReferrerUri() const
	{
		return callObjectMethod(
			"getReferrerUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jint PackageInstaller_SessionInfo::getSessionId() const
	{
		return callMethod<jint>(
			"getSessionId",
			"()I"
		);
	}
	inline jlong PackageInstaller_SessionInfo::getSize() const
	{
		return callMethod<jlong>(
			"getSize",
			"()J"
		);
	}
	inline jboolean PackageInstaller_SessionInfo::isActive() const
	{
		return callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
	inline jboolean PackageInstaller_SessionInfo::isSealed() const
	{
		return callMethod<jboolean>(
			"isSealed",
			"()Z"
		);
	}
	inline void PackageInstaller_SessionInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
