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
	jint PackageInstaller_SessionParams::USER_ACTION_NOT_REQUIRED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionParams",
			"USER_ACTION_NOT_REQUIRED"
		);
	}
	jint PackageInstaller_SessionParams::USER_ACTION_REQUIRED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionParams",
			"USER_ACTION_REQUIRED"
		);
	}
	jint PackageInstaller_SessionParams::USER_ACTION_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInstaller$SessionParams",
			"USER_ACTION_UNSPECIFIED"
		);
	}
	
	// Constructors
	PackageInstaller_SessionParams::PackageInstaller_SessionParams(jint arg0)
		: JObject(
			"android.content.pm.PackageInstaller$SessionParams",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint PackageInstaller_SessionParams::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void PackageInstaller_SessionParams::setAppIcon(android::graphics::Bitmap arg0) const
	{
		callMethod<void>(
			"setAppIcon",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		);
	}
	void PackageInstaller_SessionParams::setAppLabel(JString arg0) const
	{
		callMethod<void>(
			"setAppLabel",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void PackageInstaller_SessionParams::setAppPackageName(JString arg0) const
	{
		callMethod<void>(
			"setAppPackageName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void PackageInstaller_SessionParams::setAutoRevokePermissionsMode(jboolean arg0) const
	{
		callMethod<void>(
			"setAutoRevokePermissionsMode",
			"(Z)V",
			arg0
		);
	}
	void PackageInstaller_SessionParams::setInstallLocation(jint arg0) const
	{
		callMethod<void>(
			"setInstallLocation",
			"(I)V",
			arg0
		);
	}
	void PackageInstaller_SessionParams::setInstallReason(jint arg0) const
	{
		callMethod<void>(
			"setInstallReason",
			"(I)V",
			arg0
		);
	}
	void PackageInstaller_SessionParams::setInstallScenario(jint arg0) const
	{
		callMethod<void>(
			"setInstallScenario",
			"(I)V",
			arg0
		);
	}
	void PackageInstaller_SessionParams::setMultiPackage() const
	{
		callMethod<void>(
			"setMultiPackage",
			"()V"
		);
	}
	void PackageInstaller_SessionParams::setOriginatingUid(jint arg0) const
	{
		callMethod<void>(
			"setOriginatingUid",
			"(I)V",
			arg0
		);
	}
	void PackageInstaller_SessionParams::setOriginatingUri(android::net::Uri arg0) const
	{
		callMethod<void>(
			"setOriginatingUri",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void PackageInstaller_SessionParams::setReferrerUri(android::net::Uri arg0) const
	{
		callMethod<void>(
			"setReferrerUri",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void PackageInstaller_SessionParams::setRequireUserAction(jint arg0) const
	{
		callMethod<void>(
			"setRequireUserAction",
			"(I)V",
			arg0
		);
	}
	void PackageInstaller_SessionParams::setSize(jlong arg0) const
	{
		callMethod<void>(
			"setSize",
			"(J)V",
			arg0
		);
	}
	void PackageInstaller_SessionParams::setWhitelistedRestrictedPermissions(JObject arg0) const
	{
		callMethod<void>(
			"setWhitelistedRestrictedPermissions",
			"(Ljava/util/Set;)V",
			arg0.object()
		);
	}
	void PackageInstaller_SessionParams::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

