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
	
	// QAndroidJniObject forward
	LensShadingMap::LensShadingMap(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void LensShadingMap::copyGainFactors(jfloatArray arg0, jint arg1)
	{
		callMethod<void>(
			"copyGainFactors",
			"([FI)V",
			arg0,
			arg1
		);
	}
	jboolean LensShadingMap::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint LensShadingMap::getColumnCount()
	{
		return callMethod<jint>(
			"getColumnCount",
			"()I"
		);
	}
	jfloat LensShadingMap::getGainFactor(jint arg0, jint arg1, jint arg2)
	{
		return callMethod<jfloat>(
			"getGainFactor",
			"(III)F",
			arg0,
			arg1,
			arg2
		);
	}
	jint LensShadingMap::getGainFactorCount()
	{
		return callMethod<jint>(
			"getGainFactorCount",
			"()I"
		);
	}
	QAndroidJniObject LensShadingMap::getGainFactorVector(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getGainFactorVector",
			"(II)Landroid/hardware/camera2/params/RggbChannelVector;",
			arg0,
			arg1
		);
	}
	jint LensShadingMap::getRowCount()
	{
		return callMethod<jint>(
			"getRowCount",
			"()I"
		);
	}
	jint LensShadingMap::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring LensShadingMap::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::hardware::camera2::params

