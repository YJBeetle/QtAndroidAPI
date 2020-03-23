#pragma once

#ifndef ANDROID_MEDIA_FACEDETECTOR_FACE
#define ANDROID_MEDIA_FACEDETECTOR_FACE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class FaceDetector;
}
namespace __jni_impl::android::graphics
{
	class PointF;
}

namespace __jni_impl::android::media
{
	class FaceDetector_Face : public __JniBaseClass
	{
	public:
		// Fields
		static jfloat CONFIDENCE_THRESHOLD();
		static jint EULER_X();
		static jint EULER_Y();
		static jint EULER_Z();
		
		// Constructors
		void __constructor();
		
		// Methods
		jfloat confidence();
		void getMidPoint(__jni_impl::android::graphics::PointF arg0);
		jfloat eyesDistance();
		jfloat pose(jint arg0);
	};
} // namespace __jni_impl::android::media

#include "FaceDetector.hpp"
#include "../graphics/PointF.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jfloat FaceDetector_Face::CONFIDENCE_THRESHOLD()
	{
		return QAndroidJniObject::getStaticField<jfloat>(
			"android.media.FaceDetector$Face",
			"CONFIDENCE_THRESHOLD");
	}
	jint FaceDetector_Face::EULER_X()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.FaceDetector$Face",
			"EULER_X");
	}
	jint FaceDetector_Face::EULER_Y()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.FaceDetector$Face",
			"EULER_Y");
	}
	jint FaceDetector_Face::EULER_Z()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.FaceDetector$Face",
			"EULER_Z");
	}
	
	// Constructors
	void FaceDetector_Face::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.FaceDetector$Face",
			"(V)V");
	}
	
	// Methods
	jfloat FaceDetector_Face::confidence()
	{
		return __thiz.callMethod<jfloat>(
			"confidence",
			"()F");
	}
	void FaceDetector_Face::getMidPoint(__jni_impl::android::graphics::PointF arg0)
	{
		__thiz.callMethod<void>(
			"getMidPoint",
			"(Landroid/graphics/PointF;)V",
			arg0.__jniObject().object());
	}
	jfloat FaceDetector_Face::eyesDistance()
	{
		return __thiz.callMethod<jfloat>(
			"eyesDistance",
			"()F");
	}
	jfloat FaceDetector_Face::pose(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"pose",
			"(I)F",
			arg0);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class FaceDetector_Face : public __jni_impl::android::media::FaceDetector_Face
	{
	public:
		FaceDetector_Face(QAndroidJniObject obj) { __thiz = obj; }
		FaceDetector_Face()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_FACEDETECTOR_FACE

