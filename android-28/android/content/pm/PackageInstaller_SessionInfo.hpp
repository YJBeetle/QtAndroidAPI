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
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageInstaller_SessionInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageInstaller_SessionInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::content::Intent createDetailsIntent() const;
		jint describeContents() const;
		android::graphics::Bitmap getAppIcon() const;
		JString getAppLabel() const;
		JString getAppPackageName() const;
		jint getInstallLocation() const;
		jint getInstallReason() const;
		JString getInstallerPackageName() const;
		jint getMode() const;
		jint getOriginatingUid() const;
		android::net::Uri getOriginatingUri() const;
		jfloat getProgress() const;
		android::net::Uri getReferrerUri() const;
		jint getSessionId() const;
		jlong getSize() const;
		jboolean isActive() const;
		jboolean isSealed() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

