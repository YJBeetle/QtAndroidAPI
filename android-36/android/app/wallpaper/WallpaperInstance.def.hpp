#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class WallpaperInfo;
}
namespace android::app::wallpaper
{
	class WallpaperDescription;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::app::wallpaper
{
	class WallpaperInstance : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit WallpaperInstance(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WallpaperInstance(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WallpaperInstance(android::app::WallpaperInfo arg0, android::app::wallpaper::WallpaperDescription arg1);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::app::wallpaper::WallpaperDescription getDescription() const;
		JString getId() const;
		android::app::WallpaperInfo getInfo() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::wallpaper

