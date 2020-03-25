#pragma once

#ifndef ANDROID_SERVICE_WALLPAPER_WALLPAPERSERVICE
#define ANDROID_SERVICE_WALLPAPER_WALLPAPERSERVICE

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace __jni_impl::android::service::wallpaper
{
	class WallpaperService_Engine;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}

namespace __jni_impl::android::service::wallpaper
{
	class WallpaperService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static QAndroidJniObject SERVICE_INTERFACE();
		static QAndroidJniObject SERVICE_META_DATA();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onCreateEngine();
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		void onCreate();
		void onDestroy();
	};
} // namespace __jni_impl::android::service::wallpaper

#include "WallpaperService_Engine.hpp"
#include "../../content/Intent.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "../../../java/io/PrintWriter.hpp"

namespace __jni_impl::android::service::wallpaper
{
	// Fields
	QAndroidJniObject WallpaperService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.wallpaper.WallpaperService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject WallpaperService::SERVICE_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.wallpaper.WallpaperService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void WallpaperService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.wallpaper.WallpaperService",
			"()V");
	}
	
	// Methods
	QAndroidJniObject WallpaperService::onCreateEngine()
	{
		return __thiz.callObjectMethod(
			"onCreateEngine",
			"()Landroid/service/wallpaper/WallpaperService$Engine;");
	}
	QAndroidJniObject WallpaperService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object());
	}
	void WallpaperService::onCreate()
	{
		__thiz.callMethod<void>(
			"onCreate",
			"()V");
	}
	void WallpaperService::onDestroy()
	{
		__thiz.callMethod<void>(
			"onDestroy",
			"()V");
	}
} // namespace __jni_impl::android::service::wallpaper

namespace android::service::wallpaper
{
	class WallpaperService : public __jni_impl::android::service::wallpaper::WallpaperService
	{
	public:
		WallpaperService(QAndroidJniObject obj) { __thiz = obj; }
		WallpaperService()
		{
			__constructor();
		}
	};
} // namespace android::service::wallpaper

#endif // ANDROID_SERVICE_WALLPAPER_WALLPAPERSERVICE

