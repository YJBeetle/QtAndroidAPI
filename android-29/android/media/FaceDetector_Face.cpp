#include "../graphics/PointF.hpp"
#include "./FaceDetector.hpp"
#include "./FaceDetector_Face.hpp"

namespace android::media
{
	// Fields
	jfloat FaceDetector_Face::CONFIDENCE_THRESHOLD()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.media.FaceDetector$Face",
			"CONFIDENCE_THRESHOLD"
		);
	}
	jint FaceDetector_Face::EULER_X()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.FaceDetector$Face",
			"EULER_X"
		);
	}
	jint FaceDetector_Face::EULER_Y()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.FaceDetector$Face",
			"EULER_Y"
		);
	}
	jint FaceDetector_Face::EULER_Z()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.FaceDetector$Face",
			"EULER_Z"
		);
	}
	
	FaceDetector_Face::FaceDetector_Face(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jfloat FaceDetector_Face::confidence()
	{
		return __thiz.callMethod<jfloat>(
			"confidence",
			"()F"
		);
	}
	jfloat FaceDetector_Face::eyesDistance()
	{
		return __thiz.callMethod<jfloat>(
			"eyesDistance",
			"()F"
		);
	}
	void FaceDetector_Face::getMidPoint(android::graphics::PointF arg0)
	{
		__thiz.callMethod<void>(
			"getMidPoint",
			"(Landroid/graphics/PointF;)V",
			arg0.__jniObject().object()
		);
	}
	jfloat FaceDetector_Face::pose(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"pose",
			"(I)F",
			arg0
		);
	}
} // namespace android::media

