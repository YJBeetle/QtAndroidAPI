#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class IntentFilter;
}
namespace android::content::pm
{
	class ActivityInfo;
}
namespace android::content::pm
{
	class PackageManager;
}
namespace android::content::pm
{
	class ProviderInfo;
}
namespace android::content::pm
{
	class ServiceInfo;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class ResolveInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		android::content::pm::ActivityInfo activityInfo();
		android::content::IntentFilter filter();
		jint icon();
		jboolean isDefault();
		jboolean isInstantAppAvailable();
		jint labelRes();
		jint match();
		jstring nonLocalizedLabel();
		jint preferredOrder();
		jint priority();
		android::content::pm::ProviderInfo providerInfo();
		jstring resolvePackageName();
		android::content::pm::ServiceInfo serviceInfo();
		jint specificIndex();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ResolveInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ResolveInfo(QAndroidJniObject obj);
		
		// Constructors
		ResolveInfo();
		ResolveInfo(android::content::pm::ResolveInfo &arg0);
		
		// Methods
		jint describeContents();
		void dump(__JniBaseClass arg0, jstring arg1);
		jint getIconResource();
		jboolean isCrossProfileIntentForwarderActivity();
		android::graphics::drawable::Drawable loadIcon(android::content::pm::PackageManager arg0);
		jstring loadLabel(android::content::pm::PackageManager arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

