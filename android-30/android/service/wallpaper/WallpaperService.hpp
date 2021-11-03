#pragma once

#include "../../app/Service.hpp"

class JArray;
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
class JString;

namespace android::service::wallpaper
{
	class WallpaperService : public android::app::Service
	{
	public:
		// Fields
		static JString SERVICE_INTERFACE();
		static JString SERVICE_META_DATA();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WallpaperService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		WallpaperService(QAndroidJniObject obj);
		
		// Constructors
		WallpaperService();
		
		// Methods
		JObject onBind(android::content::Intent arg0) const;
		void onCreate() const;
		android::service::wallpaper::WallpaperService_Engine onCreateEngine() const;
		void onDestroy() const;
	};
} // namespace android::service::wallpaper

