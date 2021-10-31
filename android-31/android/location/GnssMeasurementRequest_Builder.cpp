#include "./GnssMeasurementRequest.hpp"
#include "./GnssMeasurementRequest_Builder.hpp"

namespace android::location
{
	// Fields
	
	// QAndroidJniObject forward
	GnssMeasurementRequest_Builder::GnssMeasurementRequest_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	GnssMeasurementRequest_Builder::GnssMeasurementRequest_Builder()
		: __JniBaseClass(
			"android.location.GnssMeasurementRequest$Builder",
			"()V"
		) {}
	GnssMeasurementRequest_Builder::GnssMeasurementRequest_Builder(android::location::GnssMeasurementRequest arg0)
		: __JniBaseClass(
			"android.location.GnssMeasurementRequest$Builder",
			"(Landroid/location/GnssMeasurementRequest;)V",
			arg0.object()
		) {}
	
	// Methods
	android::location::GnssMeasurementRequest GnssMeasurementRequest_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/location/GnssMeasurementRequest;"
		);
	}
	android::location::GnssMeasurementRequest_Builder GnssMeasurementRequest_Builder::setFullTracking(jboolean arg0)
	{
		return callObjectMethod(
			"setFullTracking",
			"(Z)Landroid/location/GnssMeasurementRequest$Builder;",
			arg0
		);
	}
} // namespace android::location

