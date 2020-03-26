#pragma once

#ifndef ANDROID_HARDWARE_CAMERA2_PARAMS_LENSSHADINGMAP
#define ANDROID_HARDWARE_CAMERA2_PARAMS_LENSSHADINGMAP

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::hardware::camera2::params
{
	class RggbChannelVector;
}

namespace __jni_impl::android::hardware::camera2::params
{
	class LensShadingMap : public __JniBaseClass
	{
	public:
		// Fields
		static jfloat MINIMUM_GAIN_FACTOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint getRowCount();
		jint getGainFactorCount();
		jfloat getGainFactor(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject getGainFactorVector(jint arg0, jint arg1);
		void copyGainFactors(jfloatArray arg0, jint arg1);
		jint getColumnCount();
	};
} // namespace __jni_impl::android::hardware::camera2::params

#include "RggbChannelVector.hpp"

namespace __jni_impl::android::hardware::camera2::params
{
	// Fields
	jfloat LensShadingMap::MINIMUM_GAIN_FACTOR()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.camera2.params.LensShadingMap",
			"MINIMUM_GAIN_FACTOR"
		);
	}
	
	// Constructors
	void LensShadingMap::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.LensShadingMap",
			"(V)V");
	}
	
	// Methods
	jboolean LensShadingMap::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring LensShadingMap::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint LensShadingMap::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint LensShadingMap::getRowCount()
	{
		return __thiz.callMethod<jint>(
			"getRowCount",
			"()I"
		);
	}
	jint LensShadingMap::getGainFactorCount()
	{
		return __thiz.callMethod<jint>(
			"getGainFactorCount",
			"()I"
		);
	}
	jfloat LensShadingMap::getGainFactor(jint arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jfloat>(
			"getGainFactor",
			"(III)F",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject LensShadingMap::getGainFactorVector(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getGainFactorVector",
			"(II)Landroid/hardware/camera2/params/RggbChannelVector;",
			arg0,
			arg1
		);
	}
	void LensShadingMap::copyGainFactors(jfloatArray arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"copyGainFactors",
			"([FI)V",
			arg0,
			arg1
		);
	}
	jint LensShadingMap::getColumnCount()
	{
		return __thiz.callMethod<jint>(
			"getColumnCount",
			"()I"
		);
	}
} // namespace __jni_impl::android::hardware::camera2::params

namespace android::hardware::camera2::params
{
	class LensShadingMap : public __jni_impl::android::hardware::camera2::params::LensShadingMap
	{
	public:
		LensShadingMap(QAndroidJniObject obj) { __thiz = obj; }
		LensShadingMap()
		{
			__constructor();
		}
	};
} // namespace android::hardware::camera2::params

#endif // ANDROID_HARDWARE_CAMERA2_PARAMS_LENSSHADINGMAP

