#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

namespace android::content
{
	class Intent;
}
namespace android::service::wallpaper
{
	class WallpaperService_Engine;
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
	class WallpaperService : public android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		static jstring SERVICE_META_DATA();
		
		WallpaperService(QAndroidJniObject obj);
		// Constructors
		WallpaperService();
		
		// Methods
		QAndroidJniObject onBind(android::content::Intent arg0);
		void onCreate();
		QAndroidJniObject onCreateEngine();
		void onDestroy();
	};
} // namespace android::service::wallpaper

