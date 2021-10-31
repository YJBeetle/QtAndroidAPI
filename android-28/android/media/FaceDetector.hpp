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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FaceDetector(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FaceDetector(QAndroidJniObject obj);
		
		// Constructors
		FaceDetector(jint arg0, jint arg1, jint arg2);
		
		// Methods
		jint findFaces(android::graphics::Bitmap arg0, jarray arg1);
	};
} // namespace android::media

