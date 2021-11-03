#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Point;
}
namespace android::graphics
{
	class Rect;
}

namespace android::hardware
{
	class Camera_Face : public JObject
	{
	public:
		// Fields
		jint id();
		android::graphics::Point leftEye();
		android::graphics::Point mouth();
		android::graphics::Rect rect();
		android::graphics::Point rightEye();
		jint score();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Camera_Face(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Camera_Face(QAndroidJniObject obj);
		
		// Constructors
		Camera_Face();
		
		// Methods
	};
} // namespace android::hardware

