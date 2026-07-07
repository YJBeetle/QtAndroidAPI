#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::adservices::ondevicepersonalization
{
	class EventLogRecord;
}
namespace android::adservices::ondevicepersonalization
{
	class ExecuteOutput;
}
namespace android::adservices::ondevicepersonalization
{
	class RenderingConfig;
}
namespace android::adservices::ondevicepersonalization
{
	class RequestLogRecord;
}

namespace android::adservices::ondevicepersonalization
{
	class ExecuteOutput_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExecuteOutput_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExecuteOutput_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ExecuteOutput_Builder();
		
		// Methods
		android::adservices::ondevicepersonalization::ExecuteOutput_Builder addEventLogRecord(android::adservices::ondevicepersonalization::EventLogRecord arg0) const;
		android::adservices::ondevicepersonalization::ExecuteOutput build() const;
		android::adservices::ondevicepersonalization::ExecuteOutput_Builder setBestValue(jint arg0) const;
		android::adservices::ondevicepersonalization::ExecuteOutput_Builder setEventLogRecords(JObject arg0) const;
		android::adservices::ondevicepersonalization::ExecuteOutput_Builder setOutputData(JByteArray arg0) const;
		android::adservices::ondevicepersonalization::ExecuteOutput_Builder setRenderingConfig(android::adservices::ondevicepersonalization::RenderingConfig arg0) const;
		android::adservices::ondevicepersonalization::ExecuteOutput_Builder setRequestLogRecord(android::adservices::ondevicepersonalization::RequestLogRecord arg0) const;
	};
} // namespace android::adservices::ondevicepersonalization

