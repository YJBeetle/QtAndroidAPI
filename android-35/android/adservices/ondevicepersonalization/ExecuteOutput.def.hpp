#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::adservices::ondevicepersonalization
{
	class RenderingConfig;
}
namespace android::adservices::ondevicepersonalization
{
	class RequestLogRecord;
}
class JObject;

namespace android::adservices::ondevicepersonalization
{
	class ExecuteOutput : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExecuteOutput(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExecuteOutput(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getEventLogRecords() const;
		JByteArray getOutputData() const;
		android::adservices::ondevicepersonalization::RenderingConfig getRenderingConfig() const;
		android::adservices::ondevicepersonalization::RequestLogRecord getRequestLogRecord() const;
		jint hashCode() const;
	};
} // namespace android::adservices::ondevicepersonalization

