#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::measurement
{
	class WebTriggerParams;
}
namespace android::net
{
	class Uri;
}

namespace android::adservices::measurement
{
	class WebTriggerParams_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebTriggerParams_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebTriggerParams_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WebTriggerParams_Builder(android::net::Uri arg0);
		
		// Methods
		android::adservices::measurement::WebTriggerParams build() const;
		android::adservices::measurement::WebTriggerParams_Builder setDebugKeyAllowed(jboolean arg0) const;
	};
} // namespace android::adservices::measurement

