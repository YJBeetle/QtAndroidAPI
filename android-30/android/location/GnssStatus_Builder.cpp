#include "./GnssStatus.hpp"
#include "./GnssStatus_Builder.hpp"

namespace android::location
{
	// Fields
	
	// QAndroidJniObject forward
	GnssStatus_Builder::GnssStatus_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	GnssStatus_Builder::GnssStatus_Builder()
		: JObject(
			"android.location.GnssStatus$Builder",
			"()V"
		) {}
	
	// Methods
	android::location::GnssStatus_Builder GnssStatus_Builder::addSatellite(jint arg0, jint arg1, jfloat arg2, jfloat arg3, jfloat arg4, jboolean arg5, jboolean arg6, jboolean arg7, jboolean arg8, jfloat arg9, jboolean arg10, jfloat arg11) const
	{
		return callObjectMethod(
			"addSatellite",
			"(IIFFFZZZZFZF)Landroid/location/GnssStatus$Builder;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10,
			arg11
		);
	}
	android::location::GnssStatus GnssStatus_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/location/GnssStatus;"
		);
	}
	android::location::GnssStatus_Builder GnssStatus_Builder::clearSatellites() const
	{
		return callObjectMethod(
			"clearSatellites",
			"()Landroid/location/GnssStatus$Builder;"
		);
	}
} // namespace android::location

