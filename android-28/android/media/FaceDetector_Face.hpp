#pragma once

#include "../../JObject.hpp"

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
	class FaceDetector_Face : public JObject
	{
	public:
		// Fields
		static jfloat CONFIDENCE_THRESHOLD();
		static jint EULER_X();
		static jint EULER_Y();
		static jint EULER_Z();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FaceDetector_Face(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FaceDetector_Face(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jfloat confidence();
		jfloat eyesDistance();
		void getMidPoint(android::graphics::PointF arg0);
		jfloat pose(jint arg0);
	};
} // namespace android::media

