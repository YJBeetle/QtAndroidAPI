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
		QAndroidJniObject metaData();
		jstring name();
		jstring nonLocalizedLabel();
		jstring packageName();
		
		PackageItemInfo(QAndroidJniObject obj);
		// Constructors
		PackageItemInfo();
		PackageItemInfo(android::content::pm::PackageItemInfo &arg0);
		
		// Methods
		QAndroidJniObject loadBanner(android::content::pm::PackageManager arg0);
		QAndroidJniObject loadIcon(android::content::pm::PackageManager arg0);
		jstring loadLabel(android::content::pm::PackageManager arg0);
		QAndroidJniObject loadLogo(android::content::pm::PackageManager arg0);
		QAndroidJniObject loadUnbadgedIcon(android::content::pm::PackageManager arg0);
		QAndroidJniObject loadXmlMetaData(android::content::pm::PackageManager arg0, jstring arg1);
		QAndroidJniObject loadXmlMetaData(android::content::pm::PackageManager arg0, const QString &arg1);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

