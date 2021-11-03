#include "../../graphics/Bitmap.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./PackageInstaller_SessionParams.hpp"

namespace android::content::pm
{
	// Fields
	JObject PackageInstaller_SessionParams::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller$SessionParams",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PackageInstaller_SessionParams::MODE_FULL_INSTALL()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionParams",
			"MODE_FULL_INSTALL"
		);
	}
	jint PackageInstaller_SessionParams::MODE_INHERIT_EXISTING()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionParams",
			"MODE_INHERIT_EXISTING"
		);
	}
	JObject PackageInstaller_SessionParams::RESTRICTED_PERMISSIONS_ALL()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInstaller$SessionParams",
			"RESTRICTED_PERMISSIONS_ALL",
			"Ljava/util/Set;"
		);
	}
	
	// QAndroidJniObject forward
	PackageInstaller_SessionParams::PackageInstaller_SessionParams(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PackageInstaller_SessionParams::PackageInstaller_SessionParams(jint arg0)
		: JObject(
			"android.content.pm.PackageInstaller$SessionParams",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint PackageInstaller_SessionParams::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void PackageInstaller_SessionParams::setAppIcon(android::graphics::Bitmap arg0)
	{
		callMethod<void>(
			"setAppIcon",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		);
	}
	void PackageInstaller_SessionParams::setAppLabel(JString arg0)
	{
		callMethod<void>(
			"setAppLabel",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void PackageInstaller_SessionParams::setAppPackageName(JString arg0)
	{
		callMethod<void>(
			"setAppPackageName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void PackageInstaller_SessionParams::setInstallLocation(jint arg0)
	{
		callMethod<void>(
			"setInstallLocation",
			"(I)V",
			arg0
		);
	}
	void PackageInstaller_SessionParams::setInstallReason(jint arg0)
	{
		callMethod<void>(
			"setInstallReason",
			"(I)V",
			arg0
		);
	}
	void PackageInstaller_SessionParams::setMultiPackage()
	{
		callMethod<void>(
			"setMultiPackage",
			"()V"
		);
	}
	void PackageInstaller_SessionParams::setOriginatingUid(jint arg0)
	{
		callMethod<void>(
			"setOriginatingUid",
			"(I)V",
			arg0
		);
	}
	void PackageInstaller_SessionParams::setOriginatingUri(android::net::Uri arg0)
	{
		callMethod<void>(
			"setOriginatingUri",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void PackageInstaller_SessionParams::setReferrerUri(android::net::Uri arg0)
	{
		callMethod<void>(
			"setReferrerUri",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void PackageInstaller_SessionParams::setSize(jlong arg0)
	{
		callMethod<void>(
			"setSize",
			"(J)V",
			arg0
		);
	}
	void PackageInstaller_SessionParams::setWhitelistedRestrictedPermissions(JObject arg0)
	{
		callMethod<void>(
			"setWhitelistedRestrictedPermissions",
			"(Ljava/util/Set;)V",
			arg0.object()
		);
	}
	void PackageInstaller_SessionParams::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

