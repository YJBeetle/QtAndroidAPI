#include "../../graphics/Bitmap.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Parcel.hpp"
#include "./PackageInstaller_SessionParams.hpp"

namespace android::content::pm
{
	// Fields
	QAndroidJniObject PackageInstaller_SessionParams::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller$SessionParams",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PackageInstaller_SessionParams::MODE_FULL_INSTALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionParams",
			"MODE_FULL_INSTALL"
		);
	}
	jint PackageInstaller_SessionParams::MODE_INHERIT_EXISTING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionParams",
			"MODE_INHERIT_EXISTING"
		);
	}
	QAndroidJniObject PackageInstaller_SessionParams::RESTRICTED_PERMISSIONS_ALL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.pm.PackageInstaller$SessionParams",
			"RESTRICTED_PERMISSIONS_ALL",
			"Ljava/util/Set;"
		);
	}
	
	PackageInstaller_SessionParams::PackageInstaller_SessionParams(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PackageInstaller_SessionParams::PackageInstaller_SessionParams(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.pm.PackageInstaller$SessionParams",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jint PackageInstaller_SessionParams::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void PackageInstaller_SessionParams::setAppIcon(android::graphics::Bitmap arg0)
	{
		__thiz.callMethod<void>(
			"setAppIcon",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object()
		);
	}
	void PackageInstaller_SessionParams::setAppLabel(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setAppLabel",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void PackageInstaller_SessionParams::setAppLabel(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setAppLabel",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void PackageInstaller_SessionParams::setAppPackageName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setAppPackageName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PackageInstaller_SessionParams::setAppPackageName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setAppPackageName",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void PackageInstaller_SessionParams::setInstallLocation(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInstallLocation",
			"(I)V",
			arg0
		);
	}
	void PackageInstaller_SessionParams::setInstallReason(jint arg0)
	{
		__thiz.callMethod<void>(
			"setInstallReason",
			"(I)V",
			arg0
		);
	}
	void PackageInstaller_SessionParams::setMultiPackage()
	{
		__thiz.callMethod<void>(
			"setMultiPackage",
			"()V"
		);
	}
	void PackageInstaller_SessionParams::setOriginatingUid(jint arg0)
	{
		__thiz.callMethod<void>(
			"setOriginatingUid",
			"(I)V",
			arg0
		);
	}
	void PackageInstaller_SessionParams::setOriginatingUri(android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"setOriginatingUri",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void PackageInstaller_SessionParams::setReferrerUri(android::net::Uri arg0)
	{
		__thiz.callMethod<void>(
			"setReferrerUri",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	void PackageInstaller_SessionParams::setSize(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setSize",
			"(J)V",
			arg0
		);
	}
	void PackageInstaller_SessionParams::setWhitelistedRestrictedPermissions(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setWhitelistedRestrictedPermissions",
			"(Ljava/util/Set;)V",
			arg0.__jniObject().object()
		);
	}
	void PackageInstaller_SessionParams::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content::pm

