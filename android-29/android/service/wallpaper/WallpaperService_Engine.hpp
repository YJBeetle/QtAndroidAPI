#pragma once

#include "../../../__JniBaseClass.hpp"

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

namespace android::service::wallpaper
{
	class WallpaperService_Engine : public __JniBaseClass
	{
	public:
		// Fields
		
		WallpaperService_Engine(QAndroidJniObject obj);
		// Constructors
		WallpaperService_Engine(android::service::wallpaper::WallpaperService arg0);
		WallpaperService_Engine() = default;
		
		// Methods
		jint getDesiredMinimumHeight();
		jint getDesiredMinimumWidth();
		QAndroidJniObject getDisplayContext();
		QAndroidJniObject getSurfaceHolder();
		jboolean isPreview();
		jboolean isVisible();
		void notifyColorsChanged();
		void onApplyWindowInsets(android::view::WindowInsets arg0);
		QAndroidJniObject onCommand(jstring arg0, jint arg1, jint arg2, jint arg3, android::os::Bundle arg4, jboolean arg5);
		QAndroidJniObject onComputeColors();
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

