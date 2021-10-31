#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::app
{
	class WallpaperColors : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WallpaperColors(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WallpaperColors(QAndroidJniObject obj);
		
		// Constructors
		WallpaperColors(android::os::Parcel arg0);
		WallpaperColors(android::graphics::Color arg0, android::graphics::Color arg1, android::graphics::Color arg2);
		
		// Methods
		static android::app::WallpaperColors fromBitmap(android::graphics::Bitmap arg0);
		static android::app::WallpaperColors fromDrawable(android::graphics::drawable::Drawable arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		android::graphics::Color getPrimaryColor();
		android::graphics::Color getSecondaryColor();
		android::graphics::Color getTertiaryColor();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

