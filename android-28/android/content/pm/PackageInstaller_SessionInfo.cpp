#include "../Intent.hpp"
#include "../../graphics/Bitmap.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Parcel.hpp"
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
	
	// QAndroidJniObject forward
	PackageInstaller_SessionInfo::PackageInstaller_SessionInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::content::Intent PackageInstaller_SessionInfo::createDetailsIntent()
	{
		return callObjectMethod(
			"createDetailsIntent",
			"()Landroid/content/Intent;"
		);
	}
	jint PackageInstaller_SessionInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::graphics::Bitmap PackageInstaller_SessionInfo::getAppIcon()
	{
		return callObjectMethod(
			"getAppIcon",
			"()Landroid/graphics/Bitmap;"
		);
	}
	jstring PackageInstaller_SessionInfo::getAppLabel()
	{
		return callObjectMethod(
			"getAppLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring PackageInstaller_SessionInfo::getAppPackageName()
	{
		return callObjectMethod(
			"getAppPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PackageInstaller_SessionInfo::getInstallLocation()
	{
		return callMethod<jint>(
			"getInstallLocation",
			"()I"
		);
	}
	jint PackageInstaller_SessionInfo::getInstallReason()
	{
		return callMethod<jint>(
			"getInstallReason",
			"()I"
		);
	}
	jstring PackageInstaller_SessionInfo::getInstallerPackageName()
	{
		return callObjectMethod(
			"getInstallerPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PackageInstaller_SessionInfo::getMode()
	{
		return callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	jint PackageInstaller_SessionInfo::getOriginatingUid()
	{
		return callMethod<jint>(
			"getOriginatingUid",
			"()I"
		);
	}
	android::net::Uri PackageInstaller_SessionInfo::getOriginatingUri()
	{
		return callObjectMethod(
			"getOriginatingUri",
			"()Landroid/net/Uri;"
		);
	}
	jfloat PackageInstaller_SessionInfo::getProgress()
	{
		return callMethod<jfloat>(
			"getProgress",
			"()F"
		);
	}
	android::net::Uri PackageInstaller_SessionInfo::getReferrerUri()
	{
		return callObjectMethod(
			"getReferrerUri",
			"()Landroid/net/Uri;"
		);
	}
	jint PackageInstaller_SessionInfo::getSessionId()
	{
		return callMethod<jint>(
			"getSessionId",
			"()I"
		);
	}
	jlong PackageInstaller_SessionInfo::getSize()
	{
		return callMethod<jlong>(
			"getSize",
			"()J"
		);
	}
	jboolean PackageInstaller_SessionInfo::isActive()
	{
		return callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
	jboolean PackageInstaller_SessionInfo::isSealed()
	{
		return callMethod<jboolean>(
			"isSealed",
			"()Z"
		);
	}
	void PackageInstaller_SessionInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

