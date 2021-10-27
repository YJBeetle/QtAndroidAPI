#pragma once

#ifndef ANDROID_MEDIA_VOLUMESHAPER_CONFIGURATION
#define ANDROID_MEDIA_VOLUMESHAPER_CONFIGURATION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::media
{
	class VolumeShaper_Configuration : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static QAndroidJniObject CUBIC_RAMP();
		static jint INTERPOLATOR_TYPE_CUBIC();
		static jint INTERPOLATOR_TYPE_CUBIC_MONOTONIC();
		static jint INTERPOLATOR_TYPE_LINEAR();
		static jint INTERPOLATOR_TYPE_STEP();
		static QAndroidJniObject LINEAR_RAMP();
		static QAndroidJniObject SCURVE_RAMP();
		static QAndroidJniObject SINE_RAMP();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint getMaximumCurvePoints();
		jint describeContents();
		jboolean equals(jobject arg0);
		jlong getDuration();
		jint getInterpolatorType();
		jfloatArray getTimes();
		jfloatArray getVolumes();
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::media

#include "../os/Parcel.hpp"

namespace __jni_impl::android::media
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
	
	// Constructors
	void VolumeShaper_Configuration::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.VolumeShaper$Configuration",
			"(V)V");
	}
	
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
	void VolumeShaper_Configuration::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class VolumeShaper_Configuration : public __jni_impl::android::media::VolumeShaper_Configuration
	{
	public:
		VolumeShaper_Configuration(QAndroidJniObject obj) { __thiz = obj; }
		VolumeShaper_Configuration()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_VOLUMESHAPER_CONFIGURATION

