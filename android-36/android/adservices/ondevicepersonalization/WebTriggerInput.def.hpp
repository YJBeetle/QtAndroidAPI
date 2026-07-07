#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::net
{
	class Uri;
}
class JObject;
class JString;

namespace android::adservices::ondevicepersonalization
{
	class WebTriggerInput : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebTriggerInput(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebTriggerInput(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WebTriggerInput(android::net::Uri arg0, JString arg1, JByteArray arg2);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getAppPackageName() const;
		JByteArray getData() const;
		android::net::Uri getDestinationUrl() const;
		jint hashCode() const;
	};
} // namespace android::adservices::ondevicepersonalization

