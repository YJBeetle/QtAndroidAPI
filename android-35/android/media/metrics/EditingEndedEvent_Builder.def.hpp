#pragma once

#include "../../../JObject.hpp"

namespace android::media::metrics
{
	class EditingEndedEvent;
}
namespace android::media::metrics
{
	class MediaItemInfo;
}
namespace android::os
{
	class Bundle;
}
class JString;

namespace android::media::metrics
{
	class EditingEndedEvent_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EditingEndedEvent_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EditingEndedEvent_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		EditingEndedEvent_Builder(jint arg0);
		
		// Methods
		android::media::metrics::EditingEndedEvent_Builder addInputMediaItemInfo(android::media::metrics::MediaItemInfo arg0) const;
		android::media::metrics::EditingEndedEvent_Builder addOperationType(jlong arg0) const;
		android::media::metrics::EditingEndedEvent build() const;
		android::media::metrics::EditingEndedEvent_Builder setErrorCode(jint arg0) const;
		android::media::metrics::EditingEndedEvent_Builder setExporterName(JString arg0) const;
		android::media::metrics::EditingEndedEvent_Builder setFinalProgressPercent(jfloat arg0) const;
		android::media::metrics::EditingEndedEvent_Builder setMetricsBundle(android::os::Bundle arg0) const;
		android::media::metrics::EditingEndedEvent_Builder setMuxerName(JString arg0) const;
		android::media::metrics::EditingEndedEvent_Builder setOutputMediaItemInfo(android::media::metrics::MediaItemInfo arg0) const;
		android::media::metrics::EditingEndedEvent_Builder setTimeSinceCreatedMillis(jlong arg0) const;
	};
} // namespace android::media::metrics

