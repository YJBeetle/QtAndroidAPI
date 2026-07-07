#pragma once

#include "../../../JObject.hpp"

namespace android::app::wallpaper
{
	class WallpaperDescription_Builder;
}
namespace android::content
{
	class ComponentName;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class PersistableBundle;
}
class JString;
class JObject;
class JString;

namespace android::app::wallpaper
{
	class WallpaperDescription : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit WallpaperDescription(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WallpaperDescription(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::content::ComponentName getComponent() const;
		android::os::PersistableBundle getContent() const;
		JString getContextDescription() const;
		android::net::Uri getContextUri() const;
		JObject getDescription() const;
		JString getId() const;
		android::net::Uri getThumbnail() const;
		JString getTitle() const;
		jint hashCode() const;
		android::app::wallpaper::WallpaperDescription_Builder toBuilder() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::wallpaper

