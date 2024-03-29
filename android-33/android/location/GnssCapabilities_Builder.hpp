#pragma once

#include "./GnssCapabilities.def.hpp"
#include "./GnssCapabilities_Builder.def.hpp"

namespace android::location
{
	// Fields
	
	// Constructors
	inline GnssCapabilities_Builder::GnssCapabilities_Builder()
		: JObject(
			"android.location.GnssCapabilities$Builder",
			"()V"
		) {}
	inline GnssCapabilities_Builder::GnssCapabilities_Builder(android::location::GnssCapabilities arg0)
		: JObject(
			"android.location.GnssCapabilities$Builder",
			"(Landroid/location/GnssCapabilities;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::location::GnssCapabilities GnssCapabilities_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/location/GnssCapabilities;"
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasAntennaInfo(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasAntennaInfo",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasMeasurements(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasMeasurements",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasNavigationMessages(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasNavigationMessages",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
} // namespace android::location

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::location;
#endif
