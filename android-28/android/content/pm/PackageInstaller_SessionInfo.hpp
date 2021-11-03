#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Intent;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JString;

namespace android::content::pm
{
	class PackageInstaller_SessionInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PackageInstaller_SessionInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageInstaller_SessionInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::content::Intent createDetailsIntent();
		jint describeContents();
		android::graphics::Bitmap getAppIcon();
		JString getAppLabel();
		JString getAppPackageName();
		jint getInstallLocation();
		jint getInstallReason();
		JString getInstallerPackageName();
		jint getMode();
		jint getOriginatingUid();
		android::net::Uri getOriginatingUri();
		jfloat getProgress();
		android::net::Uri getReferrerUri();
		jint getSessionId();
		jlong getSize();
		jboolean isActive();
		jboolean isSealed();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

