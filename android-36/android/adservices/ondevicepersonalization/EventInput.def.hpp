#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::ondevicepersonalization
{
	class RequestLogRecord;
}
namespace android::os
{
	class PersistableBundle;
}
class JObject;

namespace android::adservices::ondevicepersonalization
{
	class EventInput : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EventInput(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EventInput(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		EventInput(android::adservices::ondevicepersonalization::RequestLogRecord arg0, android::os::PersistableBundle arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::os::PersistableBundle getParameters() const;
		android::adservices::ondevicepersonalization::RequestLogRecord getRequestLogRecord() const;
		jint hashCode() const;
	};
} // namespace android::adservices::ondevicepersonalization

