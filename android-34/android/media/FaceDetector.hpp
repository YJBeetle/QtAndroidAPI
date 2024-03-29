#pragma once

#include "../../JArray.hpp"
#include "../graphics/Bitmap.def.hpp"
#include "./FaceDetector.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline FaceDetector::FaceDetector(jint arg0, jint arg1, jint arg2)
		: JObject(
			"android.media.FaceDetector",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline jint FaceDetector::findFaces(android::graphics::Bitmap arg0, JArray arg1) const
	{
		return callMethod<jint>(
			"findFaces",
			"(Landroid/graphics/Bitmap;[Landroid/media/FaceDetector$Face;)I",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
