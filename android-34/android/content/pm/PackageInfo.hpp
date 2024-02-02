#pragma once

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
#include "../../../JArray.hpp"
#include "./ApplicationInfo.def.hpp"
#include "./SigningInfo.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./PackageInfo.def.hpp"

namespace android::content::pm
{
	// Fields
	inline JObject PackageInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.pm.PackageInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint PackageInfo::INSTALL_LOCATION_AUTO()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInfo",
			"INSTALL_LOCATION_AUTO"
		);
	}
	inline jint PackageInfo::INSTALL_LOCATION_INTERNAL_ONLY()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInfo",
			"INSTALL_LOCATION_INTERNAL_ONLY"
		);
	}
	inline jint PackageInfo::INSTALL_LOCATION_PREFER_EXTERNAL()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInfo",
			"INSTALL_LOCATION_PREFER_EXTERNAL"
		);
	}
	inline jint PackageInfo::REQUESTED_PERMISSION_GRANTED()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInfo",
			"REQUESTED_PERMISSION_GRANTED"
		);
	}
	inline jint PackageInfo::REQUESTED_PERMISSION_IMPLICIT()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInfo",
			"REQUESTED_PERMISSION_IMPLICIT"
		);
	}
	inline jint PackageInfo::REQUESTED_PERMISSION_NEVER_FOR_LOCATION()
	{
		return getStaticField<jint>(
			"android.content.pm.PackageInfo",
			"REQUESTED_PERMISSION_NEVER_FOR_LOCATION"
		);
	}
	inline JArray PackageInfo::activities()
	{
		return getObjectField(
			"activities",
			"[Landroid/content/pm/ActivityInfo;"
		);
	}
	inline android::content::pm::ApplicationInfo PackageInfo::applicationInfo()
	{
		return getObjectField(
			"applicationInfo",
			"Landroid/content/pm/ApplicationInfo;"
		);
	}
	inline JArray PackageInfo::attributions()
	{
		return getObjectField(
			"attributions",
			"[Landroid/content/pm/Attribution;"
		);
	}
	inline jint PackageInfo::baseRevisionCode()
	{
		return getField<jint>(
			"baseRevisionCode"
		);
	}
	inline JArray PackageInfo::configPreferences()
	{
		return getObjectField(
			"configPreferences",
			"[Landroid/content/pm/ConfigurationInfo;"
		);
	}
	inline JArray PackageInfo::featureGroups()
	{
		return getObjectField(
			"featureGroups",
			"[Landroid/content/pm/FeatureGroupInfo;"
		);
	}
	inline jlong PackageInfo::firstInstallTime()
	{
		return getField<jlong>(
			"firstInstallTime"
		);
	}
	inline JIntArray PackageInfo::gids()
	{
		return getObjectField(
			"gids",
			"[I"
		);
	}
	inline jint PackageInfo::installLocation()
	{
		return getField<jint>(
			"installLocation"
		);
	}
	inline JArray PackageInfo::instrumentation()
	{
		return getObjectField(
			"instrumentation",
			"[Landroid/content/pm/InstrumentationInfo;"
		);
	}
	inline jboolean PackageInfo::isApex()
	{
		return getField<jboolean>(
			"isApex"
		);
	}
	inline jlong PackageInfo::lastUpdateTime()
	{
		return getField<jlong>(
			"lastUpdateTime"
		);
	}
	inline JString PackageInfo::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		);
	}
	inline JArray PackageInfo::permissions()
	{
		return getObjectField(
			"permissions",
			"[Landroid/content/pm/PermissionInfo;"
		);
	}
	inline JArray PackageInfo::providers()
	{
		return getObjectField(
			"providers",
			"[Landroid/content/pm/ProviderInfo;"
		);
	}
	inline JArray PackageInfo::receivers()
	{
		return getObjectField(
			"receivers",
			"[Landroid/content/pm/ActivityInfo;"
		);
	}
	inline JArray PackageInfo::reqFeatures()
	{
		return getObjectField(
			"reqFeatures",
			"[Landroid/content/pm/FeatureInfo;"
		);
	}
	inline JArray PackageInfo::requestedPermissions()
	{
		return getObjectField(
			"requestedPermissions",
			"[Ljava/lang/String;"
		);
	}
	inline JIntArray PackageInfo::requestedPermissionsFlags()
	{
		return getObjectField(
			"requestedPermissionsFlags",
			"[I"
		);
	}
	inline JArray PackageInfo::services()
	{
		return getObjectField(
			"services",
			"[Landroid/content/pm/ServiceInfo;"
		);
	}
	inline JString PackageInfo::sharedUserId()
	{
		return getObjectField(
			"sharedUserId",
			"Ljava/lang/String;"
		);
	}
	inline jint PackageInfo::sharedUserLabel()
	{
		return getField<jint>(
			"sharedUserLabel"
		);
	}
	inline JArray PackageInfo::signatures()
	{
		return getObjectField(
			"signatures",
			"[Landroid/content/pm/Signature;"
		);
	}
	inline android::content::pm::SigningInfo PackageInfo::signingInfo()
	{
		return getObjectField(
			"signingInfo",
			"Landroid/content/pm/SigningInfo;"
		);
	}
	inline JArray PackageInfo::splitNames()
	{
		return getObjectField(
			"splitNames",
			"[Ljava/lang/String;"
		);
	}
	inline JIntArray PackageInfo::splitRevisionCodes()
	{
		return getObjectField(
			"splitRevisionCodes",
			"[I"
		);
	}
	inline jint PackageInfo::versionCode()
	{
		return getField<jint>(
			"versionCode"
		);
	}
	inline JString PackageInfo::versionName()
	{
		return getObjectField(
			"versionName",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline PackageInfo::PackageInfo()
		: JObject(
			"android.content.pm.PackageInfo",
			"()V"
		) {}
	
	// Methods
	inline jint PackageInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jlong PackageInfo::getLongVersionCode() const
	{
		return callMethod<jlong>(
			"getLongVersionCode",
			"()J"
		);
	}
	inline void PackageInfo::setLongVersionCode(jlong arg0) const
	{
		callMethod<void>(
			"setLongVersionCode",
			"(J)V",
			arg0
		);
	}
	inline JString PackageInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PackageInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
