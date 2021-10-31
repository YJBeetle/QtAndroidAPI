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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccessibilityService_MagnificationController(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityService_MagnificationController(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void addListener(__JniBaseClass arg0);
		void addListener(__JniBaseClass arg0, android::os::Handler arg1);
		jfloat getCenterX();
		jfloat getCenterY();
		android::graphics::Region getMagnificationRegion();
		jfloat getScale();
		jboolean removeListener(__JniBaseClass arg0);
		jboolean reset(jboolean arg0);
		jboolean setCenter(jfloat arg0, jfloat arg1, jboolean arg2);
		jboolean setScale(jfloat arg0, jboolean arg1);
	};
} // namespace android::accessibilityservice

