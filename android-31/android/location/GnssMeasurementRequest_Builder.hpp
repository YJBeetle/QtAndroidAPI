#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::location
{
	class GnssMeasurementRequest;
}

namespace android::location
{
	class GnssMeasurementRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GnssMeasurementRequest_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GnssMeasurementRequest_Builder(QJniObject obj);
		
		// Constructors
		GnssMeasurementRequest_Builder();
		GnssMeasurementRequest_Builder(android::location::GnssMeasurementRequest arg0);
		
		// Methods
		android::location::GnssMeasurementRequest build();
		android::location::GnssMeasurementRequest_Builder setFullTracking(jboolean arg0);
	};
} // namespace android::location

