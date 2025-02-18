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
namespace android::content
{
	class ContentValues;
}

namespace android::adservices::ondevicepersonalization
{
	class EventLogRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EventLogRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EventLogRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		EventLogRecord_Builder();
		
		// Methods
		android::adservices::ondevicepersonalization::EventLogRecord build() const;
		android::adservices::ondevicepersonalization::EventLogRecord_Builder setData(android::content::ContentValues arg0) const;
		android::adservices::ondevicepersonalization::EventLogRecord_Builder setRequestLogRecord(android::adservices::ondevicepersonalization::RequestLogRecord arg0) const;
		android::adservices::ondevicepersonalization::EventLogRecord_Builder setRowIndex(jint arg0) const;
		android::adservices::ondevicepersonalization::EventLogRecord_Builder setType(jint arg0) const;
	};
} // namespace android::adservices::ondevicepersonalization

