#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class WallpaperColors;
}
namespace android::app
{
	class WallpaperInfo;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class Rect;
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
	class Bundle;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class ParcelFileDescriptor;
}
namespace java::io
{
	class InputStream;
}
class JString;

namespace android::app
{
	class WallpaperManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_CHANGE_LIVE_WALLPAPER();
		static JString ACTION_CROP_AND_SET_WALLPAPER();
		static JString ACTION_LIVE_WALLPAPER_CHOOSER();
		static JString COMMAND_DROP();
		static JString COMMAND_SECONDARY_TAP();
		static JString COMMAND_TAP();
		static JString EXTRA_LIVE_WALLPAPER_COMPONENT();
		static jint FLAG_LOCK();
		static jint FLAG_SYSTEM();
		static JString WALLPAPER_PREVIEW_META_DATA();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WallpaperManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WallpaperManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::app::WallpaperManager getInstance(android::content::Context arg0);
		void addOnColorsChangedListener(JObject arg0, android::os::Handler arg1) const;
		void clear() const;
		void clear(jint arg0) const;
		void clearWallpaper() const;
		void clearWallpaperOffsets(JObject arg0) const;
		void forgetLoadedWallpaper() const;
		android::graphics::drawable::Drawable getBuiltInDrawable() const;
		android::graphics::drawable::Drawable getBuiltInDrawable(jint arg0) const;
		android::graphics::drawable::Drawable getBuiltInDrawable(jint arg0, jint arg1, jboolean arg2, jfloat arg3, jfloat arg4) const;
		android::graphics::drawable::Drawable getBuiltInDrawable(jint arg0, jint arg1, jboolean arg2, jfloat arg3, jfloat arg4, jint arg5) const;
		android::content::Intent getCropAndSetWallpaperIntent(android::net::Uri arg0) const;
		jint getDesiredMinimumHeight() const;
		jint getDesiredMinimumWidth() const;
		android::graphics::drawable::Drawable getDrawable() const;
		android::graphics::drawable::Drawable getFastDrawable() const;
		android::app::WallpaperColors getWallpaperColors(jint arg0) const;
		android::os::ParcelFileDescriptor getWallpaperFile(jint arg0) const;
		jint getWallpaperId(jint arg0) const;
		android::app::WallpaperInfo getWallpaperInfo() const;
		jboolean hasResourceWallpaper(jint arg0) const;
		jboolean isSetWallpaperAllowed() const;
		jboolean isWallpaperSupported() const;
		android::graphics::drawable::Drawable peekDrawable() const;
		android::graphics::drawable::Drawable peekFastDrawable() const;
		void removeOnColorsChangedListener(JObject arg0) const;
		void sendWallpaperCommand(JObject arg0, JString arg1, jint arg2, jint arg3, jint arg4, android::os::Bundle arg5) const;
		jint setBitmap(android::graphics::Bitmap arg0, android::graphics::Rect arg1, jboolean arg2) const;
		jint setBitmap(android::graphics::Bitmap arg0, android::graphics::Rect arg1, jboolean arg2, jint arg3) const;
		void setBitmap(android::graphics::Bitmap arg0) const;
		void setDisplayPadding(android::graphics::Rect arg0) const;
		jint setResource(jint arg0, jint arg1) const;
		void setResource(jint arg0) const;
		jint setStream(java::io::InputStream arg0, android::graphics::Rect arg1, jboolean arg2) const;
		jint setStream(java::io::InputStream arg0, android::graphics::Rect arg1, jboolean arg2, jint arg3) const;
		void setStream(java::io::InputStream arg0) const;
		void setWallpaperOffsetSteps(jfloat arg0, jfloat arg1) const;
		void setWallpaperOffsets(JObject arg0, jfloat arg1, jfloat arg2) const;
		void suggestDesiredDimensions(jint arg0, jint arg1) const;
	};
} // namespace android::app

