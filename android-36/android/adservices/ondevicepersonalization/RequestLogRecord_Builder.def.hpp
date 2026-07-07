#pragma once

#include "../../../JObject.hpp"

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
	class RequestLogRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RequestLogRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RequestLogRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RequestLogRecord_Builder();
		
		// Methods
		android::adservices::ondevicepersonalization::RequestLogRecord_Builder addRow(android::content::ContentValues arg0) const;
		android::adservices::ondevicepersonalization::RequestLogRecord build() const;
		android::adservices::ondevicepersonalization::RequestLogRecord_Builder setRows(JObject arg0) const;
	};
} // namespace android::adservices::ondevicepersonalization

