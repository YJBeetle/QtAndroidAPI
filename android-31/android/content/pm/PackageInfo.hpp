#pragma once

#include "../../../JObject.hpp"

class JIntArray;
class JArray;
class JArray;
class JArray;
class JArray;
class JArray;
class JArray;
class JArray;
class JArray;
class JArray;
class JArray;
class JArray;
namespace android::content::pm
{
	class ApplicationInfo;
}
namespace android::content::pm
{
	class SigningInfo;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::content::pm
{
	class PackageInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint INSTALL_LOCATION_AUTO();
		static jint INSTALL_LOCATION_INTERNAL_ONLY();
		static jint INSTALL_LOCATION_PREFER_EXTERNAL();
		static jint REQUESTED_PERMISSION_GRANTED();
		static jint REQUESTED_PERMISSION_NEVER_FOR_LOCATION();
		JArray activities();
		android::content::pm::ApplicationInfo applicationInfo();
		JArray attributions();
		jint baseRevisionCode();
		JArray configPreferences();
		JArray featureGroups();
		jlong firstInstallTime();
		JIntArray gids();
		jint installLocation();
		JArray instrumentation();
		jboolean isApex();
		jlong lastUpdateTime();
		JString packageName();
		JArray permissions();
		JArray providers();
		JArray receivers();
		JArray reqFeatures();
		JArray requestedPermissions();
		JIntArray requestedPermissionsFlags();
		JArray services();
		JString sharedUserId();
		jint sharedUserLabel();
		JArray signatures();
		android::content::pm::SigningInfo signingInfo();
		JArray splitNames();
		JIntArray splitRevisionCodes();
		jint versionCode();
		JString versionName();
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageInfo(QJniObject obj);
		
		// Constructors
		PackageInfo();
		
		// Methods
		jint describeContents();
		jlong getLongVersionCode();
		void setLongVersionCode(jlong arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

