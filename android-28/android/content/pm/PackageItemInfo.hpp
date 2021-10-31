#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content::pm
{
	class PackageManager;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class PackageItemInfo : public __JniBaseClass
	{
	public:
		// Fields
		jint banner();
		jint icon();
		jint labelRes();
		jint logo();
		android::os::Bundle metaData();
		jstring name();
		jstring nonLocalizedLabel();
		jstring packageName();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PackageItemInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PackageItemInfo(QAndroidJniObject obj);
		
		// Constructors
		PackageItemInfo();
		PackageItemInfo(android::content::pm::PackageItemInfo &arg0);
		
		// Methods
		android::graphics::drawable::Drawable loadBanner(android::content::pm::PackageManager arg0);
		android::graphics::drawable::Drawable loadIcon(android::content::pm::PackageManager arg0);
		jstring loadLabel(android::content::pm::PackageManager arg0);
		android::graphics::drawable::Drawable loadLogo(android::content::pm::PackageManager arg0);
		android::graphics::drawable::Drawable loadUnbadgedIcon(android::content::pm::PackageManager arg0);
		__JniBaseClass loadXmlMetaData(android::content::pm::PackageManager arg0, jstring arg1);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm
