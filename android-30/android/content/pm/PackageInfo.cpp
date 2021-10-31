#include "./ApplicationInfo.hpp"
#include "./SigningInfo.hpp"
#include "../../os/Parcel.hpp"
#include "./PackageInfo.hpp"

namespace android::content::pm
{
	// Fields
	__JniBaseClass PackageInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PackageInfo::INSTALL_LOCATION_AUTO()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInfo",
			"INSTALL_LOCATION_AUTO"
		);
	}
	jint PackageInfo::INSTALL_LOCATION_INTERNAL_ONLY()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInfo",
			"INSTALL_LOCATION_INTERNAL_ONLY"
		);
	}
	jint PackageInfo::INSTALL_LOCATION_PREFER_EXTERNAL()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInfo",
			"INSTALL_LOCATION_PREFER_EXTERNAL"
		);
	}
	jint PackageInfo::REQUESTED_PERMISSION_GRANTED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInfo",
			"REQUESTED_PERMISSION_GRANTED"
		);
	}
	jarray PackageInfo::activities()
	{
		return getObjectField(
			"activities",
			"[Landroid/content/pm/ActivityInfo;"
		).object<jarray>();
	}
	android::content::pm::ApplicationInfo PackageInfo::applicationInfo()
	{
		return getObjectField(
			"applicationInfo",
			"Landroid/content/pm/ApplicationInfo;"
		);
	}
	jint PackageInfo::baseRevisionCode()
	{
		return getField<jint>(
			"baseRevisionCode"
		);
	}
	jarray PackageInfo::configPreferences()
	{
		return getObjectField(
			"configPreferences",
			"[Landroid/content/pm/ConfigurationInfo;"
		).object<jarray>();
	}
	jarray PackageInfo::featureGroups()
	{
		return getObjectField(
			"featureGroups",
			"[Landroid/content/pm/FeatureGroupInfo;"
		).object<jarray>();
	}
	jlong PackageInfo::firstInstallTime()
	{
		return getField<jlong>(
			"firstInstallTime"
		);
	}
	jintArray PackageInfo::gids()
	{
		return getObjectField(
			"gids",
			"[I"
		).object<jintArray>();
	}
	jint PackageInfo::installLocation()
	{
		return getField<jint>(
			"installLocation"
		);
	}
	jarray PackageInfo::instrumentation()
	{
		return getObjectField(
			"instrumentation",
			"[Landroid/content/pm/InstrumentationInfo;"
		).object<jarray>();
	}
	jboolean PackageInfo::isApex()
	{
		return getField<jboolean>(
			"isApex"
		);
	}
	jlong PackageInfo::lastUpdateTime()
	{
		return getField<jlong>(
			"lastUpdateTime"
		);
	}
	jstring PackageInfo::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jarray PackageInfo::permissions()
	{
		return getObjectField(
			"permissions",
			"[Landroid/content/pm/PermissionInfo;"
		).object<jarray>();
	}
	jarray PackageInfo::providers()
	{
		return getObjectField(
			"providers",
			"[Landroid/content/pm/ProviderInfo;"
		).object<jarray>();
	}
	jarray PackageInfo::receivers()
	{
		return getObjectField(
			"receivers",
			"[Landroid/content/pm/ActivityInfo;"
		).object<jarray>();
	}
	jarray PackageInfo::reqFeatures()
	{
		return getObjectField(
			"reqFeatures",
			"[Landroid/content/pm/FeatureInfo;"
		).object<jarray>();
	}
	jarray PackageInfo::requestedPermissions()
	{
		return getObjectField(
			"requestedPermissions",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jintArray PackageInfo::requestedPermissionsFlags()
	{
		return getObjectField(
			"requestedPermissionsFlags",
			"[I"
		).object<jintArray>();
	}
	jarray PackageInfo::services()
	{
		return getObjectField(
			"services",
			"[Landroid/content/pm/ServiceInfo;"
		).object<jarray>();
	}
	jstring PackageInfo::sharedUserId()
	{
		return getObjectField(
			"sharedUserId",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint PackageInfo::sharedUserLabel()
	{
		return getField<jint>(
			"sharedUserLabel"
		);
	}
	jarray PackageInfo::signatures()
	{
		return getObjectField(
			"signatures",
			"[Landroid/content/pm/Signature;"
		).object<jarray>();
	}
	android::content::pm::SigningInfo PackageInfo::signingInfo()
	{
		return getObjectField(
			"signingInfo",
			"Landroid/content/pm/SigningInfo;"
		);
	}
	jarray PackageInfo::splitNames()
	{
		return getObjectField(
			"splitNames",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jintArray PackageInfo::splitRevisionCodes()
	{
		return getObjectField(
			"splitRevisionCodes",
			"[I"
		).object<jintArray>();
	}
	jint PackageInfo::versionCode()
	{
		return getField<jint>(
			"versionCode"
		);
	}
	jstring PackageInfo::versionName()
	{
		return getObjectField(
			"versionName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	PackageInfo::PackageInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PackageInfo::PackageInfo()
		: __JniBaseClass(
			"android.content.pm.PackageInfo",
			"()V"
		) {}
	
	// Methods
	jint PackageInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong PackageInfo::getLongVersionCode()
	{
		return callMethod<jlong>(
			"getLongVersionCode",
			"()J"
		);
	}
	void PackageInfo::setLongVersionCode(jlong arg0)
	{
		callMethod<void>(
			"setLongVersionCode",
			"(J)V",
			arg0
		);
	}
	jstring PackageInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PackageInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

