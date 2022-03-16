#include "../../JFloatArray.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./VolumeShaper_Configuration.hpp"

namespace android::media
{
	// Fields
	JObject VolumeShaper_Configuration::CREATOR()
	{
		return getStaticObjectField(
			"android.media.VolumeShaper$Configuration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	android::media::VolumeShaper_Configuration VolumeShaper_Configuration::CUBIC_RAMP()
	{
		return getStaticObjectField(
			"android.media.VolumeShaper$Configuration",
			"CUBIC_RAMP",
			"Landroid/media/VolumeShaper$Configuration;"
		);
	}
	jint VolumeShaper_Configuration::INTERPOLATOR_TYPE_CUBIC()
	{
		return getStaticField<jint>(
			"android.media.VolumeShaper$Configuration",
			"INTERPOLATOR_TYPE_CUBIC"
		);
	}
	jint VolumeShaper_Configuration::INTERPOLATOR_TYPE_CUBIC_MONOTONIC()
	{
		return getStaticField<jint>(
			"android.media.VolumeShaper$Configuration",
			"INTERPOLATOR_TYPE_CUBIC_MONOTONIC"
		);
	}
	jint VolumeShaper_Configuration::INTERPOLATOR_TYPE_LINEAR()
	{
		return getStaticField<jint>(
			"android.media.VolumeShaper$Configuration",
			"INTERPOLATOR_TYPE_LINEAR"
		);
	}
	jint VolumeShaper_Configuration::INTERPOLATOR_TYPE_STEP()
	{
		return getStaticField<jint>(
			"android.media.VolumeShaper$Configuration",
			"INTERPOLATOR_TYPE_STEP"
		);
	}
	android::media::VolumeShaper_Configuration VolumeShaper_Configuration::LINEAR_RAMP()
	{
		return getStaticObjectField(
			"android.media.VolumeShaper$Configuration",
			"LINEAR_RAMP",
			"Landroid/media/VolumeShaper$Configuration;"
		);
	}
	android::media::VolumeShaper_Configuration VolumeShaper_Configuration::SCURVE_RAMP()
	{
		return getStaticObjectField(
			"android.media.VolumeShaper$Configuration",
			"SCURVE_RAMP",
			"Landroid/media/VolumeShaper$Configuration;"
		);
	}
	android::media::VolumeShaper_Configuration VolumeShaper_Configuration::SINE_RAMP()
	{
		return getStaticObjectField(
			"android.media.VolumeShaper$Configuration",
			"SINE_RAMP",
			"Landroid/media/VolumeShaper$Configuration;"
		);
	}
	
	// Constructors
	
	// Methods
	jint VolumeShaper_Configuration::getMaximumCurvePoints()
	{
		return callStaticMethod<jint>(
			"android.media.VolumeShaper$Configuration",
			"getMaximumCurvePoints",
			"()I"
		);
	}
	jint VolumeShaper_Configuration::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean VolumeShaper_Configuration::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jlong VolumeShaper_Configuration::getDuration() const
	{
		return callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	jint VolumeShaper_Configuration::getInterpolatorType() const
	{
		return callMethod<jint>(
			"getInterpolatorType",
			"()I"
		);
	}
	JFloatArray VolumeShaper_Configuration::getTimes() const
	{
		return callObjectMethod(
			"getTimes",
			"()[F"
		);
	}
	JFloatArray VolumeShaper_Configuration::getVolumes() const
	{
		return callObjectMethod(
			"getVolumes",
			"()[F"
		);
	}
	jint VolumeShaper_Configuration::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString VolumeShaper_Configuration::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void VolumeShaper_Configuration::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

