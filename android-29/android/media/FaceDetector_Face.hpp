#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class PointF;
}
namespace android::media
{
	class FaceDetector;
}

namespace android::media
{
	class FaceDetector_Face : public __JniBaseClass
	{
	public:
		// Fields
		static jfloat CONFIDENCE_THRESHOLD();
		static jint EULER_X();
		static jint EULER_Y();
		static jint EULER_Z();
		
		FaceDetector_Face(QAndroidJniObject obj);
		// Constructors
		FaceDetector_Face() = default;
		
		// Methods
		jfloat confidence();
		jfloat eyesDistance();
		void getMidPoint(android::graphics::PointF arg0);
		jfloat pose(jint arg0);
	};
} // namespace android::media

