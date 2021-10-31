#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content::pm
{
	class PackageManager;
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
namespace android::view::textservice
{
	class SpellCheckerSubtype;
}

namespace android::view::textservice
{
	class SpellCheckerInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SpellCheckerInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SpellCheckerInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::content::ComponentName getComponent();
		jstring getId();
		jstring getPackageName();
		android::content::pm::ServiceInfo getServiceInfo();
		jstring getSettingsActivity();
		android::view::textservice::SpellCheckerSubtype getSubtypeAt(jint arg0);
		jint getSubtypeCount();
		android::graphics::drawable::Drawable loadIcon(android::content::pm::PackageManager arg0);
		jstring loadLabel(android::content::pm::PackageManager arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textservice

