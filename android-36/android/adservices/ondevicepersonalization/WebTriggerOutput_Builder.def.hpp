#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::ondevicepersonalization
{
	class EventLogRecord;
}
namespace android::adservices::ondevicepersonalization
{
	class RequestLogRecord;
}
namespace android::adservices::ondevicepersonalization
{
	class WebTriggerOutput;
}

namespace android::adservices::ondevicepersonalization
{
	class WebTriggerOutput_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebTriggerOutput_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebTriggerOutput_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WebTriggerOutput_Builder();
		
		// Methods
		android::adservices::ondevicepersonalization::WebTriggerOutput_Builder addEventLogRecord(android::adservices::ondevicepersonalization::EventLogRecord arg0) const;
		android::adservices::ondevicepersonalization::WebTriggerOutput build() const;
		android::adservices::ondevicepersonalization::WebTriggerOutput_Builder setEventLogRecords(JObject arg0) const;
		android::adservices::ondevicepersonalization::WebTriggerOutput_Builder setRequestLogRecord(android::adservices::ondevicepersonalization::RequestLogRecord arg0) const;
	};
} // namespace android::adservices::ondevicepersonalization

