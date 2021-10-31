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
		
		// QJniObject forward
		template<typename ...Ts> explicit Camera_Size(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Camera_Size(QJniObject obj);
		
		// Constructors
		Camera_Size(android::hardware::Camera arg0, jint arg1, jint arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::hardware

