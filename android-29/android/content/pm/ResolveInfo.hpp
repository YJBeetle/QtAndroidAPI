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
		static QAndroidJniObject CREATOR();
		QAndroidJniObject activityInfo();
		QAndroidJniObject filter();
		jint icon();
		jboolean isDefault();
		jboolean isInstantAppAvailable();
		jint labelRes();
		jint match();
		jstring nonLocalizedLabel();
		jint preferredOrder();
		jint priority();
		QAndroidJniObject providerInfo();
		jstring resolvePackageName();
		QAndroidJniObject serviceInfo();
		jint specificIndex();
		
		ResolveInfo(QAndroidJniObject obj);
		// Constructors
		ResolveInfo();
		ResolveInfo(android::content::pm::ResolveInfo &arg0);
		
		// Methods
		jint describeContents();
		void dump(__JniBaseClass arg0, jstring arg1);
		void dump(__JniBaseClass arg0, const QString &arg1);
		jint getIconResource();
		QAndroidJniObject loadIcon(android::content::pm::PackageManager arg0);
		jstring loadLabel(android::content::pm::PackageManager arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

