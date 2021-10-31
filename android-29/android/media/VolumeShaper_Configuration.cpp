#include "../os/Parcel.hpp"
#include "./VolumeShaper_Configuration.hpp"

namespace android::media
{
	// Fields
	__JniBaseClass VolumeShaper_Configuration::CREATOR()
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
	
	// QJniObject forward
	VolumeShaper_Configuration::VolumeShaper_Configuration(QJniObject obj) : __JniBaseClass(obj) {}
	
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
	jint VolumeShaper_Configuration::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean VolumeShaper_Configuration::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong VolumeShaper_Configuration::getDuration()
	{
		return callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	jint VolumeShaper_Configuration::getInterpolatorType()
	{
		return callMethod<jint>(
			"getInterpolatorType",
			"()I"
		);
	}
	jfloatArray VolumeShaper_Configuration::getTimes()
	{
		return callObjectMethod(
			"getTimes",
			"()[F"
		).object<jfloatArray>();
	}
	jfloatArray VolumeShaper_Configuration::getVolumes()
	{
		return callObjectMethod(
			"getVolumes",
			"()[F"
		).object<jfloatArray>();
	}
	jint VolumeShaper_Configuration::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring VolumeShaper_Configuration::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void VolumeShaper_Configuration::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

