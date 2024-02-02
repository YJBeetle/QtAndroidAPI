#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::measurement
{
	class WebSourceRegistrationRequest;
}
namespace android::net
{
	class Uri;
}
namespace android::view
{
	class InputEvent;
}

namespace android::adservices::measurement
{
	class WebSourceRegistrationRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebSourceRegistrationRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebSourceRegistrationRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WebSourceRegistrationRequest_Builder(JObject arg0, android::net::Uri arg1);
		
		// Methods
		android::adservices::measurement::WebSourceRegistrationRequest build() const;
		android::adservices::measurement::WebSourceRegistrationRequest_Builder setAppDestination(android::net::Uri arg0) const;
		android::adservices::measurement::WebSourceRegistrationRequest_Builder setInputEvent(android::view::InputEvent arg0) const;
		android::adservices::measurement::WebSourceRegistrationRequest_Builder setVerifiedDestination(android::net::Uri arg0) const;
		android::adservices::measurement::WebSourceRegistrationRequest_Builder setWebDestination(android::net::Uri arg0) const;
	};
} // namespace android::adservices::measurement

