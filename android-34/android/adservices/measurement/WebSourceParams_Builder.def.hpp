#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::measurement
{
	class WebSourceParams;
}
namespace android::net
{
	class Uri;
}

namespace android::adservices::measurement
{
	class WebSourceParams_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebSourceParams_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebSourceParams_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WebSourceParams_Builder(android::net::Uri arg0);
		
		// Methods
		android::adservices::measurement::WebSourceParams build() const;
		android::adservices::measurement::WebSourceParams_Builder setDebugKeyAllowed(jboolean arg0) const;
	};
} // namespace android::adservices::measurement

