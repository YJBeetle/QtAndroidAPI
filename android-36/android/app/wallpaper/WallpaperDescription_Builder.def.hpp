#pragma once

#include "../../../JObject.hpp"

namespace android::app::wallpaper
{
	class WallpaperDescription;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class PersistableBundle;
}
class JString;
class JString;

namespace android::app::wallpaper
{
	class WallpaperDescription_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WallpaperDescription_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WallpaperDescription_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WallpaperDescription_Builder();
		
		// Methods
		android::app::wallpaper::WallpaperDescription build() const;
		android::app::wallpaper::WallpaperDescription_Builder setContent(android::os::PersistableBundle arg0) const;
		android::app::wallpaper::WallpaperDescription_Builder setContextDescription(JString arg0) const;
		android::app::wallpaper::WallpaperDescription_Builder setContextUri(android::net::Uri arg0) const;
		android::app::wallpaper::WallpaperDescription_Builder setDescription(JObject arg0) const;
		android::app::wallpaper::WallpaperDescription_Builder setId(JString arg0) const;
		android::app::wallpaper::WallpaperDescription_Builder setThumbnail(android::net::Uri arg0) const;
		android::app::wallpaper::WallpaperDescription_Builder setTitle(JString arg0) const;
	};
} // namespace android::app::wallpaper

