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
		
		// QJniObject forward
		template<typename ...Ts> explicit WallpaperService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		WallpaperService(QJniObject obj);
		
		// Constructors
		WallpaperService();
		
		// Methods
		__JniBaseClass onBind(android::content::Intent arg0);
		void onCreate();
		android::service::wallpaper::WallpaperService_Engine onCreateEngine();
		void onDestroy();
	};
} // namespace android::service::wallpaper

