#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app
{
	class WallpaperColors;
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

namespace android::service::wallpaper
{
	class WallpaperService_Engine : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WallpaperService_Engine(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WallpaperService_Engine(QAndroidJniObject obj);
		
		// Constructors
		WallpaperService_Engine(android::service::wallpaper::WallpaperService arg0);
		
		// Methods
		jint getDesiredMinimumHeight();
		jint getDesiredMinimumWidth();
		__JniBaseClass getSurfaceHolder();
		jboolean isPreview();
		jboolean isVisible();
		void notifyColorsChanged();
		void onApplyWindowInsets(android::view::WindowInsets arg0);
		android::os::Bundle onCommand(jstring arg0, jint arg1, jint arg2, jint arg3, android::os::Bundle arg4, jboolean arg5);
		android::app::WallpaperColors onComputeColors();
		void onCreate(__JniBaseClass arg0);
		void onDesiredSizeChanged(jint arg0, jint arg1);
		void onDestroy();
		void onOffsetsChanged(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jint arg4, jint arg5);
		void onSurfaceChanged(__JniBaseClass arg0, jint arg1, jint arg2, jint arg3);
		void onSurfaceCreated(__JniBaseClass arg0);
		void onSurfaceDestroyed(__JniBaseClass arg0);
		void onSurfaceRedrawNeeded(__JniBaseClass arg0);
		void onTouchEvent(android::view::MotionEvent arg0);
		void onVisibilityChanged(jboolean arg0);
		void setOffsetNotificationsEnabled(jboolean arg0);
		void setTouchEventsEnabled(jboolean arg0);
	};
} // namespace android::service::wallpaper

