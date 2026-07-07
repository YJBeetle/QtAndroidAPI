#pragma once

#include "../app/Service.def.hpp"

namespace android::content
{
	class Intent;
}
namespace android::media
{
	class MediaSession2;
}
namespace android::media
{
	class MediaSession2_ControllerInfo;
}
namespace android::media
{
	class MediaSession2Service_MediaNotification;
}
class JString;

namespace android::media
{
	class MediaSession2Service : public android::app::Service
	{
	public:
		// Fields
		static JString SERVICE_INTERFACE();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaSession2Service(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		MediaSession2Service(QJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		MediaSession2Service();
		
		// Methods
		void addSession(android::media::MediaSession2 arg0) const;
		JObject getSessions() const;
		JObject onBind(android::content::Intent arg0) const;
		void onCreate() const;
		void onDestroy() const;
		android::media::MediaSession2 onGetSession(android::media::MediaSession2_ControllerInfo arg0) const;
		android::media::MediaSession2Service_MediaNotification onUpdateNotification(android::media::MediaSession2 arg0) const;
		void removeSession(android::media::MediaSession2 arg0) const;
	};
} // namespace android::media

