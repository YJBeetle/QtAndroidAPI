#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::measurement
{
	class DeletionRequest;
}
namespace android::adservices::measurement
{
	class WebSourceRegistrationRequest;
}
namespace android::adservices::measurement
{
	class WebTriggerRegistrationRequest;
}
namespace android::content
{
	class Context;
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
	class MeasurementManager : public JObject
	{
	public:
		// Fields
		static jint MEASUREMENT_API_STATE_DISABLED();
		static jint MEASUREMENT_API_STATE_ENABLED();
		
		// QJniObject forward
		template<typename ...Ts> explicit MeasurementManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MeasurementManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::adservices::measurement::MeasurementManager get(android::content::Context arg0);
		void deleteRegistrations(android::adservices::measurement::DeletionRequest arg0, JObject arg1, JObject arg2) const;
		void getMeasurementApiStatus(JObject arg0, JObject arg1) const;
		void registerSource(android::net::Uri arg0, android::view::InputEvent arg1, JObject arg2, JObject arg3) const;
		void registerTrigger(android::net::Uri arg0, JObject arg1, JObject arg2) const;
		void registerWebSource(android::adservices::measurement::WebSourceRegistrationRequest arg0, JObject arg1, JObject arg2) const;
		void registerWebTrigger(android::adservices::measurement::WebTriggerRegistrationRequest arg0, JObject arg1, JObject arg2) const;
	};
} // namespace android::adservices::measurement

