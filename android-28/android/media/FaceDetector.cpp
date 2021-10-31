#include "../graphics/Bitmap.hpp"
#include "./FaceDetector.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	FaceDetector::FaceDetector(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	FaceDetector::FaceDetector(jint arg0, jint arg1, jint arg2)
		: __JniBaseClass(
			"android.media.FaceDetector",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint FaceDetector::findFaces(android::graphics::Bitmap arg0, jarray arg1)
	{
		return callMethod<jint>(
			"findFaces",
			"(Landroid/graphics/Bitmap;[Landroid/media/FaceDetector$Face;)I",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

