#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media::metrics
{
	class NetworkEvent;
}
namespace android::os
{
	class Bundle;
}

namespace android::media::metrics
{
	class NetworkEvent_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkEvent_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NetworkEvent_Builder(QAndroidJniObject obj);
		
		// Constructors
		NetworkEvent_Builder();
		
		// Methods
		android::media::metrics::NetworkEvent build();
		android::media::metrics::NetworkEvent_Builder setMetricsBundle(android::os::Bundle arg0);
		android::media::metrics::NetworkEvent_Builder setNetworkType(jint arg0);
		android::media::metrics::NetworkEvent_Builder setTimeSinceCreatedMillis(jlong arg0);
	};
} // namespace android::media::metrics

