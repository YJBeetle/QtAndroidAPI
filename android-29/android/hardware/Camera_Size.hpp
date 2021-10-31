#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::hardware
{
	class Camera;
}

namespace android::hardware
{
	class Camera_Size : public __JniBaseClass
	{
	public:
		// Fields
		jint height();
		jint width();
		
		Camera_Size(QAndroidJniObject obj);
		// Constructors
		Camera_Size(android::hardware::Camera arg0, jint arg1, jint arg2);
		Camera_Size() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::hardware

