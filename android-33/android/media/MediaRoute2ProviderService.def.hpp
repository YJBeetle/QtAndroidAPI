#pragma once

#include "../app/Service.def.hpp"

namespace android::content
{
	class Intent;
}
namespace android::media
{
	class RouteDiscoveryPreference;
}
namespace android::media
{
	class RoutingSessionInfo;
}
namespace android::os
{
	class Bundle;
}
class JString;

namespace android::media
{
	class MediaRoute2ProviderService : public android::app::Service
	{
	public:
		// Fields
		static jint REASON_INVALID_COMMAND();
		static jint REASON_NETWORK_ERROR();
		static jint REASON_REJECTED();
		static jint REASON_ROUTE_NOT_AVAILABLE();
		static jint REASON_UNKNOWN_ERROR();
		static jlong REQUEST_ID_NONE();
		static JString SERVICE_INTERFACE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaRoute2ProviderService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		MediaRoute2ProviderService(QAndroidJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		MediaRoute2ProviderService();
		
		// Methods
		JObject getAllSessionInfo() const;
		android::media::RoutingSessionInfo getSessionInfo(JString arg0) const;
		void notifyRequestFailed(jlong arg0, jint arg1) const;
		void notifyRoutes(JObject arg0) const;
		void notifySessionCreated(jlong arg0, android::media::RoutingSessionInfo arg1) const;
		void notifySessionReleased(JString arg0) const;
		void notifySessionUpdated(android::media::RoutingSessionInfo arg0) const;
		JObject onBind(android::content::Intent arg0) const;
		void onCreateSession(jlong arg0, JString arg1, JString arg2, android::os::Bundle arg3) const;
		void onDeselectRoute(jlong arg0, JString arg1, JString arg2) const;
		void onDiscoveryPreferenceChanged(android::media::RouteDiscoveryPreference arg0) const;
		void onReleaseSession(jlong arg0, JString arg1) const;
		void onSelectRoute(jlong arg0, JString arg1, JString arg2) const;
		void onSetRouteVolume(jlong arg0, JString arg1, jint arg2) const;
		void onSetSessionVolume(jlong arg0, JString arg1, jint arg2) const;
		void onTransferToRoute(jlong arg0, JString arg1, JString arg2) const;
	};
} // namespace android::media

