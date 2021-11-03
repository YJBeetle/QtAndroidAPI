#pragma once

#include "./PackageItemInfo.hpp"

class JArray;
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
		JArray attributionTags();
		jint descriptionRes();
		jboolean directBootAware();
		jboolean enabled();
		jboolean exported();
		JString processName();
		JString splitName();
		
		// QJniObject forward
		template<typename ...Ts> explicit ComponentInfo(const char *className, const char *sig, Ts...agv) : android::content::pm::PackageItemInfo(className, sig, std::forward<Ts>(agv)...) {}
		ComponentInfo(QJniObject obj);
		
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

