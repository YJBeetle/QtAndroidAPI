#pragma once

#include "./GnssMeasurementRequest.def.hpp"
#include "./GnssMeasurementRequest_Builder.def.hpp"

namespace android::location
{
	// Fields
	
	// Constructors
	inline GnssMeasurementRequest_Builder::GnssMeasurementRequest_Builder()
		: JObject(
			"android.location.GnssMeasurementRequest$Builder",
			"()V"
		) {}
	inline GnssMeasurementRequest_Builder::GnssMeasurementRequest_Builder(android::location::GnssMeasurementRequest arg0)
		: JObject(
			"android.location.GnssMeasurementRequest$Builder",
			"(Landroid/location/GnssMeasurementRequest;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::location::GnssMeasurementRequest GnssMeasurementRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/location/GnssMeasurementRequest;"
		);
	}
	inline android::location::GnssMeasurementRequest_Builder GnssMeasurementRequest_Builder::setFullTracking(jboolean arg0) const
	{
		return callObjectMethod(
			"setFullTracking",
			"(Z)Landroid/location/GnssMeasurementRequest$Builder;",
			arg0
		);
	}
} // namespace android::location

// Base class headers

