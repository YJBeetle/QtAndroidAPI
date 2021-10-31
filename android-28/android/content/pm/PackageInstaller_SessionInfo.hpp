#pragma once

#include "../../../__JniBaseClass.hpp"

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

namespace android::content::pm
{
	class PackageInstaller_SessionInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageInstaller_SessionInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PackageInstaller_SessionInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::content::Intent createDetailsIntent();
		jint describeContents();
		android::graphics::Bitmap getAppIcon();
		jstring getAppLabel();
		jstring getAppPackageName();
		jint getInstallLocation();
		jint getInstallReason();
		jstring getInstallerPackageName();
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

