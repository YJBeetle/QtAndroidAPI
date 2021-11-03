#include "./GnssCapabilities.hpp"
#include "./GnssCapabilities_Builder.hpp"

namespace android::location
{
	// Fields
	
	// QAndroidJniObject forward
	GnssCapabilities_Builder::GnssCapabilities_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	GnssCapabilities_Builder::GnssCapabilities_Builder()
		: JObject(
			"android.location.GnssCapabilities$Builder",
			"()V"
		) {}
	GnssCapabilities_Builder::GnssCapabilities_Builder(android::location::GnssCapabilities arg0)
		: JObject(
			"android.location.GnssCapabilities$Builder",
			"(Landroid/location/GnssCapabilities;)V",
			arg0.object()
		) {}
	
	// Methods
	android::location::GnssCapabilities GnssCapabilities_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/location/GnssCapabilities;"
		);
	}
	android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasAntennaInfo(jboolean arg0)
	{
		return callObjectMethod(
			"setHasAntennaInfo",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasMeasurements(jboolean arg0)
	{
		return callObjectMethod(
			"setHasMeasurements",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasNavigationMessages(jboolean arg0)
	{
		return callObjectMethod(
			"setHasNavigationMessages",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
} // namespace android::location

