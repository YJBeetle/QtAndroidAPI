#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::ondevicepersonalization
{
	class EventLogRecord;
}
namespace android::adservices::ondevicepersonalization
{
	class EventOutput;
}

namespace android::adservices::ondevicepersonalization
{
	class EventOutput_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EventOutput_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EventOutput_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		EventOutput_Builder();
		
		// Methods
		android::adservices::ondevicepersonalization::EventOutput build() const;
		android::adservices::ondevicepersonalization::EventOutput_Builder setEventLogRecord(android::adservices::ondevicepersonalization::EventLogRecord arg0) const;
	};
} // namespace android::adservices::ondevicepersonalization

