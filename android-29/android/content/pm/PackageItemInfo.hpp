#pragma once

#include "../../../JObject.hpp"

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
class JString;
class JString;

namespace android::content::pm
{
	class PackageItemInfo : public JObject
	{
	public:
		// Fields
		jint banner();
		jint icon();
		jint labelRes();
		jint logo();
		android::os::Bundle metaData();
		JString name();
		JString nonLocalizedLabel();
		JString packageName();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PackageItemInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageItemInfo(QAndroidJniObject obj);
		
		// Constructors
		PackageItemInfo();
		PackageItemInfo(android::content::pm::PackageItemInfo &arg0);
		
		// Methods
		android::graphics::drawable::Drawable loadBanner(android::content::pm::PackageManager arg0);
		android::graphics::drawable::Drawable loadIcon(android::content::pm::PackageManager arg0);
		JString loadLabel(android::content::pm::PackageManager arg0);
		android::graphics::drawable::Drawable loadLogo(android::content::pm::PackageManager arg0);
		android::graphics::drawable::Drawable loadUnbadgedIcon(android::content::pm::PackageManager arg0);
		JObject loadXmlMetaData(android::content::pm::PackageManager arg0, JString arg1);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

