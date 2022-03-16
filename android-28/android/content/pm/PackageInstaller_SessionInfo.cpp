#include "../Intent.hpp"
#include "../../graphics/Bitmap.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./PackageInstaller_SessionInfo.hpp"

namespace android::content::pm
{
	// Fields
	JObject PackageInstaller_SessionInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller$SessionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	android::content::Intent PackageInstaller_SessionInfo::createDetailsIntent() const
	{
		return callObjectMethod(
			"createDetailsIntent",
			"()Landroid/content/Intent;"
		);
	}
	jint PackageInstaller_SessionInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::graphics::Bitmap PackageInstaller_SessionInfo::getAppIcon() const
	{
		return callObjectMethod(
			"getAppIcon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	JString PackageInstaller_SessionInfo::getAppLabel() const
	{
		return callObjectMethod(
			"getAppLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString PackageInstaller_SessionInfo::getAppPackageName() const
	{
		return callObjectMethod(
			"getAppPackageName",
			"()Ljava/lang/String;"
		);
	}
	jint PackageInstaller_SessionInfo::getInstallLocation() const
	{
		return callMethod<jint>(
			"getInstallLocation",
			"()I"
		);
	}
	jint PackageInstaller_SessionInfo::getInstallReason() const
	{
		return callMethod<jint>(
			"getInstallReason",
			"()I"
		);
	}
	JString PackageInstaller_SessionInfo::getInstallerPackageName() const
	{
		return callObjectMethod(
			"getInstallerPackageName",
			"()Ljava/lang/String;"
		);
	}
	jint PackageInstaller_SessionInfo::getMode() const
	{
		return callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	jint PackageInstaller_SessionInfo::getOriginatingUid() const
	{
		return callMethod<jint>(
			"getOriginatingUid",
			"()I"
		);
	}
	android::net::Uri PackageInstaller_SessionInfo::getOriginatingUri() const
	{
		return callObjectMethod(
			"getOriginatingUri",
			"()Landroid/net/Uri;"
		);
	}
	jfloat PackageInstaller_SessionInfo::getProgress() const
	{
		return callMethod<jfloat>(
			"getProgress",
			"()F"
		);
	}
	android::net::Uri PackageInstaller_SessionInfo::getReferrerUri() const
	{
		return callObjectMethod(
			"getReferrerUri",
			"()Landroid/net/Uri;"
		);
	}
	jint PackageInstaller_SessionInfo::getSessionId() const
	{
		return callMethod<jint>(
			"getSessionId",
			"()I"
		);
	}
	jlong PackageInstaller_SessionInfo::getSize() const
	{
		return callMethod<jlong>(
			"getSize",
			"()J"
		);
	}
	jboolean PackageInstaller_SessionInfo::isActive() const
	{
		return callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
	jboolean PackageInstaller_SessionInfo::isSealed() const
	{
		return callMethod<jboolean>(
			"isSealed",
			"()Z"
		);
	}
	void PackageInstaller_SessionInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

