#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class PackageInstaller_SessionParams : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint MODE_FULL_INSTALL();
		static jint MODE_INHERIT_EXISTING();
		static QAndroidJniObject RESTRICTED_PERMISSIONS_ALL();
		
		PackageInstaller_SessionParams(QAndroidJniObject obj);
		// Constructors
		PackageInstaller_SessionParams(jint &arg0);
		PackageInstaller_SessionParams() = default;
		
		// Methods
		jint describeContents();
		void setAppIcon(android::graphics::Bitmap arg0);
		void setAppLabel(jstring arg0);
		void setAppLabel(const QString &arg0);
		void setAppPackageName(jstring arg0);
		void setAppPackageName(const QString &arg0);
		void setInstallLocation(jint arg0);
		void setInstallReason(jint arg0);
		void setMultiPackage();
		void setOriginatingUid(jint arg0);
		void setOriginatingUri(android::net::Uri arg0);
		void setReferrerUri(android::net::Uri arg0);
		void setSize(jlong arg0);
		void setWhitelistedRestrictedPermissions(__JniBaseClass arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

