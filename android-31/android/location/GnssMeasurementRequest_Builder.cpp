#include "./GnssMeasurementRequest.hpp"
#include "./GnssMeasurementRequest_Builder.hpp"

namespace android::location
{
	// Fields
	
	// QJniObject forward
	GnssMeasurementRequest_Builder::GnssMeasurementRequest_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	GnssMeasurementRequest_Builder::GnssMeasurementRequest_Builder()
		: JObject(
			"android.location.GnssMeasurementRequest$Builder",
			"()V"
		) {}
	GnssMeasurementRequest_Builder::GnssMeasurementRequest_Builder(android::location::GnssMeasurementRequest arg0)
		: JObject(
			"android.location.GnssMeasurementRequest$Builder",
			"(Landroid/location/GnssMeasurementRequest;)V",
			arg0.object()
		) {}
	
	// Methods
	android::location::GnssMeasurementRequest GnssMeasurementRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/location/GnssMeasurementRequest;"
		);
	}
	android::location::GnssMeasurementRequest_Builder GnssMeasurementRequest_Builder::setFullTracking(jboolean arg0) const
	{
		return callObjectMethod(
			"setFullTracking",
			"(Z)Landroid/location/GnssMeasurementRequest$Builder;",
			arg0
		);
	}
} // namespace android::location

