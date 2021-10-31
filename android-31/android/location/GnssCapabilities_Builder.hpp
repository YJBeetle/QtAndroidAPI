#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::location
{
	class GnssCapabilities;
}

namespace android::location
{
	class GnssCapabilities_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GnssCapabilities_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GnssCapabilities_Builder(QJniObject obj);
		
		// Constructors
		GnssCapabilities_Builder();
		GnssCapabilities_Builder(android::location::GnssCapabilities arg0);
		
		// Methods
		android::location::GnssCapabilities build();
		android::location::GnssCapabilities_Builder setHasAntennaInfo(jboolean arg0);
		android::location::GnssCapabilities_Builder setHasMeasurements(jboolean arg0);
		android::location::GnssCapabilities_Builder setHasNavigationMessages(jboolean arg0);
	};
} // namespace android::location

