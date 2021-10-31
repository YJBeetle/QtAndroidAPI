#include "../../../graphics/PointF.hpp"
#include "./TonemapCurve.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	jint TonemapCurve::CHANNEL_BLUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.TonemapCurve",
			"CHANNEL_BLUE"
		);
	}
	jint TonemapCurve::CHANNEL_GREEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.TonemapCurve",
			"CHANNEL_GREEN"
		);
	}
	jint TonemapCurve::CHANNEL_RED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.TonemapCurve",
			"CHANNEL_RED"
		);
	}
	jfloat TonemapCurve::LEVEL_BLACK()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.camera2.params.TonemapCurve",
			"LEVEL_BLACK"
		);
	}
	jfloat TonemapCurve::LEVEL_WHITE()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.hardware.camera2.params.TonemapCurve",
			"LEVEL_WHITE"
		);
	}
	jint TonemapCurve::POINT_SIZE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.params.TonemapCurve",
			"POINT_SIZE"
		);
	}
	
	TonemapCurve::TonemapCurve(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TonemapCurve::TonemapCurve(jfloatArray arg0, jfloatArray arg1, jfloatArray arg2)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.params.TonemapCurve",
			"([F[F[F)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	void TonemapCurve::copyColorCurve(jint arg0, jfloatArray arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"copyColorCurve",
			"(I[FI)V",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean TonemapCurve::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject TonemapCurve::getPoint(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getPoint",
			"(II)Landroid/graphics/PointF;",
			arg0,
			arg1
		);
	}
	jint TonemapCurve::getPointCount(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getPointCount",
			"(I)I",
			arg0
		);
	}
	jint TonemapCurve::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring TonemapCurve::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::hardware::camera2::params

