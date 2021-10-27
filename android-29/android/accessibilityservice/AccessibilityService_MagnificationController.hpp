#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::accessibilityservice
{
	class AccessibilityService;
}
namespace android::graphics
{
	class Region;
}
namespace android::os
{
	class Handler;
}

namespace android::accessibilityservice
{
	class AccessibilityService_MagnificationController : public __JniBaseClass
	{
	public:
		// Fields
		
		AccessibilityService_MagnificationController(QAndroidJniObject obj);
		// Constructors
		AccessibilityService_MagnificationController() = default;
		
		// Methods
		void addListener(__JniBaseClass arg0);
		void addListener(__JniBaseClass arg0, android::os::Handler arg1);
		jfloat getCenterX();
		jfloat getCenterY();
		QAndroidJniObject getMagnificationRegion();
		jfloat getScale();
		jboolean removeListener(__JniBaseClass arg0);
		jboolean reset(jboolean arg0);
		jboolean setCenter(jfloat arg0, jfloat arg1, jboolean arg2);
		jboolean setScale(jfloat arg0, jboolean arg1);
	};
} // namespace android::accessibilityservice

