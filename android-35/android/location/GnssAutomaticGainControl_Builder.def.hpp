#pragma once

#include "../../JObject.hpp"

namespace android::location
{
	class GnssAutomaticGainControl;
}

namespace android::location
{
	class GnssAutomaticGainControl_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GnssAutomaticGainControl_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssAutomaticGainControl_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		GnssAutomaticGainControl_Builder();
		GnssAutomaticGainControl_Builder(android::location::GnssAutomaticGainControl arg0);
		
		// Methods
		android::location::GnssAutomaticGainControl build() const;
		android::location::GnssAutomaticGainControl_Builder setCarrierFrequencyHz(jlong arg0) const;
		android::location::GnssAutomaticGainControl_Builder setConstellationType(jint arg0) const;
		android::location::GnssAutomaticGainControl_Builder setLevelDb(jdouble arg0) const;
	};
} // namespace android::location

