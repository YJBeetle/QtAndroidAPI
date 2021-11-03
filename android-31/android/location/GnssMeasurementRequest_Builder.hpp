#pragma once

#include "../../JObject.hpp"

namespace android::location
{
	class GnssMeasurementRequest;
}

namespace android::location
{
	class GnssMeasurementRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GnssMeasurementRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssMeasurementRequest_Builder(QAndroidJniObject obj);
		
		// Constructors
		GnssMeasurementRequest_Builder();
		GnssMeasurementRequest_Builder(android::location::GnssMeasurementRequest arg0);
		
		// Methods
		android::location::GnssMeasurementRequest build();
		android::location::GnssMeasurementRequest_Builder setFullTracking(jboolean arg0);
	};
} // namespace android::location

