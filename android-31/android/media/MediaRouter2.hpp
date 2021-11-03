#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::media
{
	class MediaRoute2Info;
}
namespace android::media
{
	class MediaRouter2_ControllerCallback;
}
namespace android::media
{
	class MediaRouter2_RouteCallback;
}
namespace android::media
{
	class MediaRouter2_RoutingController;
}
namespace android::media
{
	class MediaRouter2_TransferCallback;
}
namespace android::media
{
	class RouteDiscoveryPreference;
}
class JString;

namespace android::media
{
	class MediaRouter2 : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaRouter2(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter2(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::media::MediaRouter2 getInstance(android::content::Context arg0);
		android::media::MediaRouter2_RoutingController getController(JString arg0);
		JObject getControllers();
		JObject getRoutes();
		android::media::MediaRouter2_RoutingController getSystemController();
		void registerControllerCallback(JObject arg0, android::media::MediaRouter2_ControllerCallback arg1);
		void registerRouteCallback(JObject arg0, android::media::MediaRouter2_RouteCallback arg1, android::media::RouteDiscoveryPreference arg2);
		void registerTransferCallback(JObject arg0, android::media::MediaRouter2_TransferCallback arg1);
		void setOnGetControllerHintsListener(JObject arg0);
		void stop();
		void transferTo(android::media::MediaRoute2Info arg0);
		void unregisterControllerCallback(android::media::MediaRouter2_ControllerCallback arg0);
		void unregisterRouteCallback(android::media::MediaRouter2_RouteCallback arg0);
		void unregisterTransferCallback(android::media::MediaRouter2_TransferCallback arg0);
	};
} // namespace android::media

