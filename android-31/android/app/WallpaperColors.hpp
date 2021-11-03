#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class Color;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::app
{
	class WallpaperColors : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint HINT_SUPPORTS_DARK_TEXT();
		static jint HINT_SUPPORTS_DARK_THEME();
		
		// QJniObject forward
		template<typename ...Ts> explicit WallpaperColors(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WallpaperColors(QJniObject obj);
		
		// Constructors
		WallpaperColors(android::os::Parcel arg0);
		WallpaperColors(android::graphics::Color arg0, android::graphics::Color arg1, android::graphics::Color arg2);
		WallpaperColors(android::graphics::Color arg0, android::graphics::Color arg1, android::graphics::Color arg2, jint arg3);
		
		// Methods
		static android::app::WallpaperColors fromBitmap(android::graphics::Bitmap arg0);
		static android::app::WallpaperColors fromDrawable(android::graphics::drawable::Drawable arg0);
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getColorHints();
		android::graphics::Color getPrimaryColor();
		android::graphics::Color getSecondaryColor();
		android::graphics::Color getTertiaryColor();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

