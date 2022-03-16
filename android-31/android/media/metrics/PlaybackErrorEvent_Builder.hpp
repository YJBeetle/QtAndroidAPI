#pragma once

#include "../../../JObject.hpp"

namespace android::media::metrics
{
	class PlaybackErrorEvent;
}
namespace android::os
{
	class Bundle;
}
namespace java::lang
{
	class Exception;
}

namespace android::media::metrics
{
	class PlaybackErrorEvent_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PlaybackErrorEvent_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PlaybackErrorEvent_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		PlaybackErrorEvent_Builder();
		
		// Methods
		android::media::metrics::PlaybackErrorEvent build() const;
		android::media::metrics::PlaybackErrorEvent_Builder setErrorCode(jint arg0) const;
		android::media::metrics::PlaybackErrorEvent_Builder setException(java::lang::Exception arg0) const;
		android::media::metrics::PlaybackErrorEvent_Builder setMetricsBundle(android::os::Bundle arg0) const;
		android::media::metrics::PlaybackErrorEvent_Builder setSubErrorCode(jint arg0) const;
		android::media::metrics::PlaybackErrorEvent_Builder setTimeSinceCreatedMillis(jlong arg0) const;
	};
} // namespace android::media::metrics

