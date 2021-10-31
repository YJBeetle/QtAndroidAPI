#include "../graphics/Bitmap.hpp"
#include "./FaceDetector.hpp"

namespace android::media
{
	// Fields
	
	FaceDetector::FaceDetector(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FaceDetector::FaceDetector(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.media.FaceDetector",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jint FaceDetector::findFaces(android::graphics::Bitmap arg0, jarray arg1)
	{
		return __thiz.callMethod<jint>(
			"findFaces",
			"(Landroid/graphics/Bitmap;[Landroid/media/FaceDetector$Face;)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::media

