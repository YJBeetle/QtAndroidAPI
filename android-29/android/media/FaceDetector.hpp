#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Bitmap;
}

namespace android::media
{
	class FaceDetector : public __JniBaseClass
	{
	public:
		// Fields
		
		FaceDetector(QAndroidJniObject obj);
		// Constructors
		FaceDetector(jint &arg0, jint &arg1, jint &arg2);
		FaceDetector() = default;
		
		// Methods
		jint findFaces(android::graphics::Bitmap arg0, jarray arg1);
	};
} // namespace android::media

