#include "../../content/Intent.hpp"
#include "./WallpaperService_Engine.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "../../../java/io/PrintWriter.hpp"
#include "./WallpaperService.hpp"

namespace android::service::wallpaper
{
	// Fields
	jstring WallpaperService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.wallpaper.WallpaperService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WallpaperService::SERVICE_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.wallpaper.WallpaperService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	WallpaperService::WallpaperService(QAndroidJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	WallpaperService::WallpaperService()
		: android::app::Service(
			"android.service.wallpaper.WallpaperService",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject WallpaperService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void WallpaperService::onCreate()
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	QAndroidJniObject WallpaperService::onCreateEngine()
	{
		return callObjectMethod(
			"onCreateEngine",
			"()Landroid/service/wallpaper/WallpaperService$Engine;"
		);
	}
	void WallpaperService::onDestroy()
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
} // namespace android::service::wallpaper

