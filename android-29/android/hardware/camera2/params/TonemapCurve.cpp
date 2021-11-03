#include "../../../../JFloatArray.hpp"
#include "../../../graphics/PointF.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./TonemapCurve.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	jint TonemapCurve::CHANNEL_BLUE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.TonemapCurve",
			"CHANNEL_BLUE"
		);
	}
	jint TonemapCurve::CHANNEL_GREEN()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.TonemapCurve",
			"CHANNEL_GREEN"
		);
	}
	jint TonemapCurve::CHANNEL_RED()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.TonemapCurve",
			"CHANNEL_RED"
		);
	}
	jfloat TonemapCurve::LEVEL_BLACK()
	{
		return getStaticField<jfloat>(
			"android.hardware.camera2.params.TonemapCurve",
			"LEVEL_BLACK"
		);
	}
	jfloat TonemapCurve::LEVEL_WHITE()
	{
		return getStaticField<jfloat>(
			"android.hardware.camera2.params.TonemapCurve",
			"LEVEL_WHITE"
		);
	}
	jint TonemapCurve::POINT_SIZE()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.params.TonemapCurve",
			"POINT_SIZE"
		);
	}
	
	// QJniObject forward
	TonemapCurve::TonemapCurve(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TonemapCurve::TonemapCurve(JFloatArray arg0, JFloatArray arg1, JFloatArray arg2)
		: JObject(
			"android.hardware.camera2.params.TonemapCurve",
			"([F[F[F)V",
			arg0.object<jfloatArray>(),
			arg1.object<jfloatArray>(),
			arg2.object<jfloatArray>()
		) {}
	
	// Methods
	void TonemapCurve::copyColorCurve(jint arg0, JFloatArray arg1, jint arg2) const
	{
		callMethod<void>(
			"copyColorCurve",
			"(I[FI)V",
			arg0,
			arg1.object<jfloatArray>(),
			arg2
		);
	}
	jboolean TonemapCurve::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::graphics::PointF TonemapCurve::getPoint(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getPoint",
			"(II)Landroid/graphics/PointF;",
			arg0,
			arg1
		);
	}
	jint TonemapCurve::getPointCount(jint arg0) const
	{
		return callMethod<jint>(
			"getPointCount",
			"(I)I",
			arg0
		);
	}
	jint TonemapCurve::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString TonemapCurve::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware::camera2::params

