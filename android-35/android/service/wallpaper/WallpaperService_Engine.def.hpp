#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::app
{
	class WallpaperColors;
}
namespace android::content
{
	class Context;
}
namespace android::os
{
	class Bundle;
}
namespace android::service::wallpaper
{
	class WallpaperService;
}
namespace android::view
{
	class MotionEvent;
}
namespace android::view
{
	class WindowInsets;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class PrintWriter;
}
class JString;

namespace android::service::wallpaper
{
	class WallpaperService_Engine : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WallpaperService_Engine(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WallpaperService_Engine(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WallpaperService_Engine(android::service::wallpaper::WallpaperService arg0);
		
		// Methods
		jint getDesiredMinimumHeight() const;
		jint getDesiredMinimumWidth() const;
		android::content::Context getDisplayContext() const;
		JObject getSurfaceHolder() const;
		jint getWallpaperFlags() const;
		jboolean isPreview() const;
		jboolean isVisible() const;
		void notifyColorsChanged() const;
		void onApplyWindowInsets(android::view::WindowInsets arg0) const;
		android::os::Bundle onCommand(JString arg0, jint arg1, jint arg2, jint arg3, android::os::Bundle arg4, jboolean arg5) const;
		android::app::WallpaperColors onComputeColors() const;
		void onCreate(JObject arg0) const;
		void onDesiredSizeChanged(jint arg0, jint arg1) const;
		void onDestroy() const;
		void onOffsetsChanged(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4, jint arg5) const;
		void onSurfaceChanged(JObject arg0, jint arg1, jint arg2, jint arg3) const;
		void onSurfaceCreated(JObject arg0) const;
		void onSurfaceDestroyed(JObject arg0) const;
		void onSurfaceRedrawNeeded(JObject arg0) const;
		void onTouchEvent(android::view::MotionEvent arg0) const;
		void onVisibilityChanged(jboolean arg0) const;
		void onWallpaperFlagsChanged(jint arg0) const;
		void onZoomChanged(jfloat arg0) const;
		void setOffsetNotificationsEnabled(jboolean arg0) const;
		void setTouchEventsEnabled(jboolean arg0) const;
	};
} // namespace android::service::wallpaper

