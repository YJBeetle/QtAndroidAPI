#pragma once

#include "../../JObject.hpp"

namespace android::location
{
	class GnssCapabilities;
}

namespace android::location
{
	class GnssCapabilities_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GnssCapabilities_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssCapabilities_Builder(QJniObject obj);
		
		// Constructors
		GnssCapabilities_Builder();
		GnssCapabilities_Builder(android::location::GnssCapabilities arg0);
		
		// Methods
		android::location::GnssCapabilities build() const;
		android::location::GnssCapabilities_Builder setHasAntennaInfo(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasMeasurements(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasNavigationMessages(jboolean arg0) const;
	};
} // namespace android::location

