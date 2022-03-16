#pragma once

#include "../../../JObject.hpp"

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
	class NetworkEvent_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkEvent_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkEvent_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		NetworkEvent_Builder();
		
		// Methods
		android::media::metrics::NetworkEvent build() const;
		android::media::metrics::NetworkEvent_Builder setMetricsBundle(android::os::Bundle arg0) const;
		android::media::metrics::NetworkEvent_Builder setNetworkType(jint arg0) const;
		android::media::metrics::NetworkEvent_Builder setTimeSinceCreatedMillis(jlong arg0) const;
	};
} // namespace android::media::metrics

