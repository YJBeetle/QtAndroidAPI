#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::measurement
{
	class WebTriggerRegistrationRequest;
}
namespace android::net
{
	class Uri;
}

namespace android::adservices::measurement
{
	class WebTriggerRegistrationRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebTriggerRegistrationRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebTriggerRegistrationRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WebTriggerRegistrationRequest_Builder(JObject arg0, android::net::Uri arg1);
		
		// Methods
		android::adservices::measurement::WebTriggerRegistrationRequest build() const;
	};
} // namespace android::adservices::measurement

