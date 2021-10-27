#include "../os/Parcel.hpp"
#include "./VolumeShaper_Configuration.hpp"

namespace android::media
{
	// Fields
	QAndroidJniObject VolumeShaper_Configuration::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.VolumeShaper$Configuration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	QAndroidJniObject VolumeShaper_Configuration::CUBIC_RAMP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.VolumeShaper$Configuration",
			"CUBIC_RAMP",
			"Landroid/media/VolumeShaper$Configuration;"
		);
	}
	jint VolumeShaper_Configuration::INTERPOLATOR_TYPE_CUBIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.VolumeShaper$Configuration",
			"INTERPOLATOR_TYPE_CUBIC"
		);
	}
	jint VolumeShaper_Configuration::INTERPOLATOR_TYPE_CUBIC_MONOTONIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.VolumeShaper$Configuration",
			"INTERPOLATOR_TYPE_CUBIC_MONOTONIC"
		);
	}
	jint VolumeShaper_Configuration::INTERPOLATOR_TYPE_LINEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.VolumeShaper$Configuration",
			"INTERPOLATOR_TYPE_LINEAR"
		);
	}
	jint VolumeShaper_Configuration::INTERPOLATOR_TYPE_STEP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.VolumeShaper$Configuration",
			"INTERPOLATOR_TYPE_STEP"
		);
	}
	QAndroidJniObject VolumeShaper_Configuration::LINEAR_RAMP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.VolumeShaper$Configuration",
			"LINEAR_RAMP",
			"Landroid/media/VolumeShaper$Configuration;"
		);
	}
	QAndroidJniObject VolumeShaper_Configuration::SCURVE_RAMP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.VolumeShaper$Configuration",
			"SCURVE_RAMP",
			"Landroid/media/VolumeShaper$Configuration;"
		);
	}
	QAndroidJniObject VolumeShaper_Configuration::SINE_RAMP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.VolumeShaper$Configuration",
			"SINE_RAMP",
			"Landroid/media/VolumeShaper$Configuration;"
		);
	}
	
	VolumeShaper_Configuration::VolumeShaper_Configuration(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint VolumeShaper_Configuration::getMaximumCurvePoints()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.media.VolumeShaper$Configuration",
			"getMaximumCurvePoints",
			"()I"
		);
	}
	jint VolumeShaper_Configuration::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean VolumeShaper_Configuration::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong VolumeShaper_Configuration::getDuration()
	{
		return __thiz.callMethod<jlong>(
			"getDuration",
			"()J"
		);
	}
	jint VolumeShaper_Configuration::getInterpolatorType()
	{
		return __thiz.callMethod<jint>(
			"getInterpolatorType",
			"()I"
		);
	}
	jfloatArray VolumeShaper_Configuration::getTimes()
	{
		return __thiz.callObjectMethod(
			"getTimes",
			"()[F"
		).object<jfloatArray>();
	}
	jfloatArray VolumeShaper_Configuration::getVolumes()
	{
		return __thiz.callObjectMethod(
			"getVolumes",
			"()[F"
		).object<jfloatArray>();
	}
	jint VolumeShaper_Configuration::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring VolumeShaper_Configuration::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void VolumeShaper_Configuration::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::media

