#include "../../JArray.hpp"
#include "../graphics/Bitmap.hpp"
#include "./FaceDetector.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	FaceDetector::FaceDetector(jint arg0, jint arg1, jint arg2)
		: JObject(
			"android.media.FaceDetector",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint FaceDetector::findFaces(android::graphics::Bitmap arg0, JArray arg1) const
	{
		return callMethod<jint>(
			"findFaces",
			"(Landroid/graphics/Bitmap;[Landroid/media/FaceDetector$Face;)I",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
} // namespace android::media

