#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class RoutingSessionInfo;
}
namespace android::os
{
	class Bundle;
}

namespace android::media
{
	class RoutingSessionInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RoutingSessionInfo_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RoutingSessionInfo_Builder(QJniObject obj);
		
		// Constructors
		RoutingSessionInfo_Builder(android::media::RoutingSessionInfo arg0);
		RoutingSessionInfo_Builder(jstring arg0, jstring arg1);
		
		// Methods
		android::media::RoutingSessionInfo_Builder addDeselectableRoute(jstring arg0);
		android::media::RoutingSessionInfo_Builder addSelectableRoute(jstring arg0);
		android::media::RoutingSessionInfo_Builder addSelectedRoute(jstring arg0);
		android::media::RoutingSessionInfo_Builder addTransferableRoute(jstring arg0);
		android::media::RoutingSessionInfo build();
		android::media::RoutingSessionInfo_Builder clearDeselectableRoutes();
		android::media::RoutingSessionInfo_Builder clearSelectableRoutes();
		android::media::RoutingSessionInfo_Builder clearSelectedRoutes();
		android::media::RoutingSessionInfo_Builder clearTransferableRoutes();
		android::media::RoutingSessionInfo_Builder removeDeselectableRoute(jstring arg0);
		android::media::RoutingSessionInfo_Builder removeSelectableRoute(jstring arg0);
		android::media::RoutingSessionInfo_Builder removeSelectedRoute(jstring arg0);
		android::media::RoutingSessionInfo_Builder removeTransferableRoute(jstring arg0);
		android::media::RoutingSessionInfo_Builder setControlHints(android::os::Bundle arg0);
		android::media::RoutingSessionInfo_Builder setName(jstring arg0);
		android::media::RoutingSessionInfo_Builder setVolume(jint arg0);
		android::media::RoutingSessionInfo_Builder setVolumeHandling(jint arg0);
		android::media::RoutingSessionInfo_Builder setVolumeMax(jint arg0);
	};
} // namespace android::media

