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
namespace android::media
{
	class RouteListingPreference;
}
class JString;

namespace android::media
{
	class MediaRouter2 : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRouter2(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaRouter2(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::media::MediaRouter2 getInstance(android::content::Context arg0);
		android::media::MediaRouter2_RoutingController getController(JString arg0) const;
		JObject getControllers() const;
		JObject getRoutes() const;
		android::media::MediaRouter2_RoutingController getSystemController() const;
		void registerControllerCallback(JObject arg0, android::media::MediaRouter2_ControllerCallback arg1) const;
		void registerRouteCallback(JObject arg0, android::media::MediaRouter2_RouteCallback arg1, android::media::RouteDiscoveryPreference arg2) const;
		void registerTransferCallback(JObject arg0, android::media::MediaRouter2_TransferCallback arg1) const;
		void setOnGetControllerHintsListener(JObject arg0) const;
		void setRouteListingPreference(android::media::RouteListingPreference arg0) const;
		jboolean showSystemOutputSwitcher() const;
		void stop() const;
		void transferTo(android::media::MediaRoute2Info arg0) const;
		void unregisterControllerCallback(android::media::MediaRouter2_ControllerCallback arg0) const;
		void unregisterRouteCallback(android::media::MediaRouter2_RouteCallback arg0) const;
		void unregisterTransferCallback(android::media::MediaRouter2_TransferCallback arg0) const;
	};
} // namespace android::media

