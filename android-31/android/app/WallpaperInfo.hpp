#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::content::pm
{
	class PackageManager;
}
namespace android::content::pm
{
	class ResolveInfo;
}
namespace android::content::pm
{
	class ServiceInfo;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class WallpaperInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit WallpaperInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WallpaperInfo(QJniObject obj);
		
		// Constructors
		WallpaperInfo(android::content::Context arg0, android::content::pm::ResolveInfo arg1);
		
		// Methods
		jint describeContents();
		void dump(__JniBaseClass arg0, jstring arg1);
		android::content::ComponentName getComponent();
		jstring getPackageName();
		android::content::pm::ServiceInfo getServiceInfo();
		jstring getServiceName();
		jstring getSettingsActivity();
		android::net::Uri getSettingsSliceUri();
		jboolean getShowMetadataInPreview();
		jstring loadAuthor(android::content::pm::PackageManager arg0);
		jstring loadContextDescription(android::content::pm::PackageManager arg0);
		android::net::Uri loadContextUri(android::content::pm::PackageManager arg0);
		jstring loadDescription(android::content::pm::PackageManager arg0);
		android::graphics::drawable::Drawable loadIcon(android::content::pm::PackageManager arg0);
		jstring loadLabel(android::content::pm::PackageManager arg0);
		android::graphics::drawable::Drawable loadThumbnail(android::content::pm::PackageManager arg0);
		jboolean supportsMultipleDisplays();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

