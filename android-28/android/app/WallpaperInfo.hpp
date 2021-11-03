#pragma once

#include "../../JObject.hpp"

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
class JString;
class JString;

namespace android::app
{
	class WallpaperInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit WallpaperInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WallpaperInfo(QJniObject obj);
		
		// Constructors
		WallpaperInfo(android::content::Context arg0, android::content::pm::ResolveInfo arg1);
		
		// Methods
		jint describeContents() const;
		void dump(JObject arg0, JString arg1) const;
		android::content::ComponentName getComponent() const;
		JString getPackageName() const;
		android::content::pm::ServiceInfo getServiceInfo() const;
		JString getServiceName() const;
		JString getSettingsActivity() const;
		jboolean getShowMetadataInPreview() const;
		JString loadAuthor(android::content::pm::PackageManager arg0) const;
		JString loadContextDescription(android::content::pm::PackageManager arg0) const;
		android::net::Uri loadContextUri(android::content::pm::PackageManager arg0) const;
		JString loadDescription(android::content::pm::PackageManager arg0) const;
		android::graphics::drawable::Drawable loadIcon(android::content::pm::PackageManager arg0) const;
		JString loadLabel(android::content::pm::PackageManager arg0) const;
		android::graphics::drawable::Drawable loadThumbnail(android::content::pm::PackageManager arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

