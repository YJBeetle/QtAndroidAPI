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
		
		// QJniObject forward
		template<typename ...Ts> explicit GnssMeasurementRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssMeasurementRequest_Builder(QJniObject obj);
		
		// Constructors
		GnssMeasurementRequest_Builder();
		GnssMeasurementRequest_Builder(android::location::GnssMeasurementRequest arg0);
		
		// Methods
		android::location::GnssMeasurementRequest build() const;
		android::location::GnssMeasurementRequest_Builder setFullTracking(jboolean arg0) const;
	};
} // namespace android::location

