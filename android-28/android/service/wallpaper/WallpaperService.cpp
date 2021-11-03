#include "../../../JArray.hpp"
#include "../../content/Intent.hpp"
#include "./WallpaperService_Engine.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "../../../java/io/PrintWriter.hpp"
#include "../../../JString.hpp"
#include "./WallpaperService.hpp"

namespace android::service::wallpaper
{
	// Fields
	JString WallpaperService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.wallpaper.WallpaperService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	JString WallpaperService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.service.wallpaper.WallpaperService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
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
	JObject WallpaperService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void WallpaperService::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	android::service::wallpaper::WallpaperService_Engine WallpaperService::onCreateEngine() const
	{
		return callObjectMethod(
			"onCreateEngine",
			"()Landroid/service/wallpaper/WallpaperService$Engine;"
		);
	}
	void WallpaperService::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
} // namespace android::service::wallpaper

