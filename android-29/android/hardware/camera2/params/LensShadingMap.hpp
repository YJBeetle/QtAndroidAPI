#pragma once

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
		void copyGainFactors(jfloatArray arg0, jint arg1);
		jboolean equals(jobject arg0);
		jint getColumnCount();
		jfloat getGainFactor(jint arg0, jint arg1, jint arg2);
		jint getGainFactorCount();
		QAndroidJniObject getGainFactorVector(jint arg0, jint arg1);
		jint getRowCount();
		jint hashCode();
		jstring toString();
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
	void LensShadingMap::copyGainFactors(jfloatArray arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"copyGainFactors",
			"([FI)V",
			arg0,
			arg1
		);
	}
	jboolean LensShadingMap::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint LensShadingMap::getColumnCount()
	{
		return __thiz.callMethod<jint>(
			"getColumnCount",
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
	jint LensShadingMap::getGainFactorCount()
	{
		return __thiz.callMethod<jint>(
			"getGainFactorCount",
			"()I"
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
	jint LensShadingMap::getRowCount()
	{
		return __thiz.callMethod<jint>(
			"getRowCount",
			"()I"
		);
	}
	jint LensShadingMap::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring LensShadingMap::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

