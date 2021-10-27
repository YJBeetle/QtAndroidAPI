#include "./RggbChannelVector.hpp"
#include "./LensShadingMap.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	jfloat LensShadingMap::MINIMUM_GAIN_FACTOR()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.camera2.params.LensShadingMap",
			"MINIMUM_GAIN_FACTOR"
		);
	}
	
	LensShadingMap::LensShadingMap(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
} // namespace android::hardware::camera2::params

