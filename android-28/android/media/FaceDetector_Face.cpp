#include "../graphics/PointF.hpp"
#include "./FaceDetector.hpp"
#include "./FaceDetector_Face.hpp"

namespace android::media
{
	// Fields
	jfloat FaceDetector_Face::CONFIDENCE_THRESHOLD()
	{
		return getStaticField<jfloat>(
			"android.media.FaceDetector$Face",
			"CONFIDENCE_THRESHOLD"
		);
	}
	jint FaceDetector_Face::EULER_X()
	{
		return getStaticField<jint>(
			"android.media.FaceDetector$Face",
			"EULER_X"
		);
	}
	jint FaceDetector_Face::EULER_Y()
	{
		return getStaticField<jint>(
			"android.media.FaceDetector$Face",
			"EULER_Y"
		);
	}
	jint FaceDetector_Face::EULER_Z()
	{
		return getStaticField<jint>(
			"android.media.FaceDetector$Face",
			"EULER_Z"
		);
	}
	
	// QAndroidJniObject forward
	FaceDetector_Face::FaceDetector_Face(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jfloat FaceDetector_Face::confidence()
	{
		return callMethod<jfloat>(
			"confidence",
			"()F"
		);
	}
	jfloat FaceDetector_Face::eyesDistance()
	{
		return callMethod<jfloat>(
			"eyesDistance",
			"()F"
		);
	}
	void FaceDetector_Face::getMidPoint(android::graphics::PointF arg0)
	{
		callMethod<void>(
			"getMidPoint",
			"(Landroid/graphics/PointF;)V",
			arg0.object()
		);
	}
	jfloat FaceDetector_Face::pose(jint arg0)
	{
		return callMethod<jfloat>(
			"pose",
			"(I)F",
			arg0
		);
	}
} // namespace android::media

