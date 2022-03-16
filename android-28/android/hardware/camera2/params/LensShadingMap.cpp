#include "../../../../JFloatArray.hpp"
#include "./RggbChannelVector.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./LensShadingMap.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	jfloat LensShadingMap::MINIMUM_GAIN_FACTOR()
	{
		return getStaticField<jfloat>(
			"android.hardware.camera2.params.LensShadingMap",
			"MINIMUM_GAIN_FACTOR"
		);
	}
	
	// Constructors
	
	// Methods
	void LensShadingMap::copyGainFactors(JFloatArray arg0, jint arg1) const
	{
		callMethod<void>(
			"copyGainFactors",
			"([FI)V",
			arg0.object<jfloatArray>(),
			arg1
		);
	}
	jboolean LensShadingMap::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint LensShadingMap::getColumnCount() const
	{
		return callMethod<jint>(
			"getColumnCount",
			"()I"
		);
	}
	jfloat LensShadingMap::getGainFactor(jint arg0, jint arg1, jint arg2) const
	{
		return callMethod<jfloat>(
			"getGainFactor",
			"(III)F",
			arg0,
			arg1,
			arg2
		);
	}
	jint LensShadingMap::getGainFactorCount() const
	{
		return callMethod<jint>(
			"getGainFactorCount",
			"()I"
		);
	}
	android::hardware::camera2::params::RggbChannelVector LensShadingMap::getGainFactorVector(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getGainFactorVector",
			"(II)Landroid/hardware/camera2/params/RggbChannelVector;",
			arg0,
			arg1
		);
	}
	jint LensShadingMap::getRowCount() const
	{
		return callMethod<jint>(
			"getRowCount",
			"()I"
		);
	}
	jint LensShadingMap::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString LensShadingMap::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware::camera2::params

