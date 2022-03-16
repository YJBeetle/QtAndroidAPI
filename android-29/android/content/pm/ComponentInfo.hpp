#pragma once

#include "./PackageItemInfo.hpp"

namespace android::content::pm
{
	class ApplicationInfo;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::content::pm
{
	class ComponentInfo : public android::content::pm::PackageItemInfo
	{
	public:
		// Fields
		android::content::pm::ApplicationInfo applicationInfo();
		jint descriptionRes();
		jboolean directBootAware();
		jboolean enabled();
		jboolean exported();
		JString processName();
		JString splitName();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ComponentInfo(const char *className, const char *sig, Ts...agv) : android::content::pm::PackageItemInfo(className, sig, std::forward<Ts>(agv)...) {}
		ComponentInfo(QAndroidJniObject obj) : android::content::pm::PackageItemInfo(obj) {}
		
		// Constructors
		ComponentInfo();
		ComponentInfo(android::content::pm::ComponentInfo &arg0);
		
		// Methods
		jint getBannerResource() const;
		jint getIconResource() const;
		jint getLogoResource() const;
		jboolean isEnabled() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

