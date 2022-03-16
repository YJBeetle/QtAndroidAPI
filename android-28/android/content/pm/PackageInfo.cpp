#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "./ApplicationInfo.hpp"
#include "./SigningInfo.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./PackageInfo.hpp"

namespace android::content::pm
{
	// Fields
	JObject PackageInfo::CREATOR()
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
	JArray PackageInfo::activities()
	{
		return getObjectField(
			"activities",
			"[Landroid/content/pm/ActivityInfo;"
		);
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
	JArray PackageInfo::configPreferences()
	{
		return getObjectField(
			"configPreferences",
			"[Landroid/content/pm/ConfigurationInfo;"
		);
	}
	JArray PackageInfo::featureGroups()
	{
		return getObjectField(
			"featureGroups",
			"[Landroid/content/pm/FeatureGroupInfo;"
		);
	}
	jlong PackageInfo::firstInstallTime()
	{
		return getField<jlong>(
			"firstInstallTime"
		);
	}
	JIntArray PackageInfo::gids()
	{
		return getObjectField(
			"gids",
			"[I"
		);
	}
	jint PackageInfo::installLocation()
	{
		return getField<jint>(
			"installLocation"
		);
	}
	JArray PackageInfo::instrumentation()
	{
		return getObjectField(
			"instrumentation",
			"[Landroid/content/pm/InstrumentationInfo;"
		);
	}
	jlong PackageInfo::lastUpdateTime()
	{
		return getField<jlong>(
			"lastUpdateTime"
		);
	}
	JString PackageInfo::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		);
	}
	JArray PackageInfo::permissions()
	{
		return getObjectField(
			"permissions",
			"[Landroid/content/pm/PermissionInfo;"
		);
	}
	JArray PackageInfo::providers()
	{
		return getObjectField(
			"providers",
			"[Landroid/content/pm/ProviderInfo;"
		);
	}
	JArray PackageInfo::receivers()
	{
		return getObjectField(
			"receivers",
			"[Landroid/content/pm/ActivityInfo;"
		);
	}
	JArray PackageInfo::reqFeatures()
	{
		return getObjectField(
			"reqFeatures",
			"[Landroid/content/pm/FeatureInfo;"
		);
	}
	JArray PackageInfo::requestedPermissions()
	{
		return getObjectField(
			"requestedPermissions",
			"[Ljava/lang/String;"
		);
	}
	JIntArray PackageInfo::requestedPermissionsFlags()
	{
		return getObjectField(
			"requestedPermissionsFlags",
			"[I"
		);
	}
	JArray PackageInfo::services()
	{
		return getObjectField(
			"services",
			"[Landroid/content/pm/ServiceInfo;"
		);
	}
	JString PackageInfo::sharedUserId()
	{
		return getObjectField(
			"sharedUserId",
			"Ljava/lang/String;"
		);
	}
	jint PackageInfo::sharedUserLabel()
	{
		return getField<jint>(
			"sharedUserLabel"
		);
	}
	JArray PackageInfo::signatures()
	{
		return getObjectField(
			"signatures",
			"[Landroid/content/pm/Signature;"
		);
	}
	android::content::pm::SigningInfo PackageInfo::signingInfo()
	{
		return getObjectField(
			"signingInfo",
			"Landroid/content/pm/SigningInfo;"
		);
	}
	JArray PackageInfo::splitNames()
	{
		return getObjectField(
			"splitNames",
			"[Ljava/lang/String;"
		);
	}
	JIntArray PackageInfo::splitRevisionCodes()
	{
		return getObjectField(
			"splitRevisionCodes",
			"[I"
		);
	}
	jint PackageInfo::versionCode()
	{
		return getField<jint>(
			"versionCode"
		);
	}
	JString PackageInfo::versionName()
	{
		return getObjectField(
			"versionName",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	PackageInfo::PackageInfo()
		: JObject(
			"android.content.pm.PackageInfo",
			"()V"
		) {}
	
	// Methods
	jint PackageInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong PackageInfo::getLongVersionCode() const
	{
		return callMethod<jlong>(
			"getLongVersionCode",
			"()J"
		);
	}
	void PackageInfo::setLongVersionCode(jlong arg0) const
	{
		callMethod<void>(
			"setLongVersionCode",
			"(J)V",
			arg0
		);
	}
	JString PackageInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void PackageInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::pm

