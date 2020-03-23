#pragma once

#ifndef ANDROID_MEDIA_FACEDETECTOR
#define ANDROID_MEDIA_FACEDETECTOR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Bitmap;
}

namespace __jni_impl::android::media
{
	class FaceDetector : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jint arg1, jint arg2);
		
		// Methods
		jint findFaces(__jni_impl::android::graphics::Bitmap arg0, jarray arg1);
	};
} // namespace __jni_impl::android::media

#include "../graphics/Bitmap.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void FaceDetector::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.media.FaceDetector",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
	jint FaceDetector::findFaces(__jni_impl::android::graphics::Bitmap arg0, jarray arg1)
	{
		return __thiz.callMethod<jint>(
			"findFaces",
			"(Landroid/graphics/Bitmap;[Landroid/media/FaceDetector$Face;)I",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class FaceDetector : public __jni_impl::android::media::FaceDetector
	{
	public:
		FaceDetector(QAndroidJniObject obj) { __thiz = obj; }
		FaceDetector(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_FACEDETECTOR

