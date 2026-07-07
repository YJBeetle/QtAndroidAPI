#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class PersistableBundle;
}
class JString;

namespace android::adservices::ondevicepersonalization
{
	class EventUrlProvider : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EventUrlProvider(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EventUrlProvider(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::net::Uri createEventTrackingUrlWithRedirect(android::os::PersistableBundle arg0, android::net::Uri arg1) const;
		android::net::Uri createEventTrackingUrlWithResponse(android::os::PersistableBundle arg0, JByteArray arg1, JString arg2) const;
	};
} // namespace android::adservices::ondevicepersonalization

