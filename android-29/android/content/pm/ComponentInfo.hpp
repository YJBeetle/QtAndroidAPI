#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./PackageItemInfo.hpp"

namespace android::content::pm
{
	class ApplicationInfo;
}
namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class ComponentInfo : public android::content::pm::PackageItemInfo
	{
	public:
		// Fields
		QAndroidJniObject applicationInfo();
		jint descriptionRes();
		jboolean directBootAware();
		jboolean enabled();
		jboolean exported();
		jstring processName();
		jstring splitName();
		
		ComponentInfo(QAndroidJniObject obj);
		// Constructors
		ComponentInfo();
		ComponentInfo(android::content::pm::ComponentInfo &arg0);
		
		// Methods
		jint getBannerResource();
		jint getIconResource();
		jint getLogoResource();
		jboolean isEnabled();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

