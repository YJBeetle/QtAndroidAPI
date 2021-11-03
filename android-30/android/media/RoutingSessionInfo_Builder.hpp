#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class RoutingSessionInfo;
}
namespace android::os
{
	class Bundle;
}
class JString;
class JString;

namespace android::media
{
	class RoutingSessionInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RoutingSessionInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RoutingSessionInfo_Builder(QAndroidJniObject obj);
		
		// Constructors
		RoutingSessionInfo_Builder(android::media::RoutingSessionInfo arg0);
		RoutingSessionInfo_Builder(JString arg0, JString arg1);
		
		// Methods
		android::media::RoutingSessionInfo_Builder addDeselectableRoute(JString arg0);
		android::media::RoutingSessionInfo_Builder addSelectableRoute(JString arg0);
		android::media::RoutingSessionInfo_Builder addSelectedRoute(JString arg0);
		android::media::RoutingSessionInfo_Builder addTransferableRoute(JString arg0);
		android::media::RoutingSessionInfo build();
		android::media::RoutingSessionInfo_Builder clearDeselectableRoutes();
		android::media::RoutingSessionInfo_Builder clearSelectableRoutes();
		android::media::RoutingSessionInfo_Builder clearSelectedRoutes();
		android::media::RoutingSessionInfo_Builder clearTransferableRoutes();
		android::media::RoutingSessionInfo_Builder removeDeselectableRoute(JString arg0);
		android::media::RoutingSessionInfo_Builder removeSelectableRoute(JString arg0);
		android::media::RoutingSessionInfo_Builder removeSelectedRoute(JString arg0);
		android::media::RoutingSessionInfo_Builder removeTransferableRoute(JString arg0);
		android::media::RoutingSessionInfo_Builder setControlHints(android::os::Bundle arg0);
		android::media::RoutingSessionInfo_Builder setName(JString arg0);
		android::media::RoutingSessionInfo_Builder setVolume(jint arg0);
		android::media::RoutingSessionInfo_Builder setVolumeHandling(jint arg0);
		android::media::RoutingSessionInfo_Builder setVolumeMax(jint arg0);
	};
} // namespace android::media

