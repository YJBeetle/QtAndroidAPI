#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}

namespace android::hardware
{
	class Camera_Area : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject rect();
		jint weight();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Camera_Area(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Camera_Area(QAndroidJniObject obj);
		
		// Constructors
		Camera_Area(android::graphics::Rect arg0, jint arg1);
		
		// Methods
		jboolean equals(jobject arg0);
	};
} // namespace android::hardware

