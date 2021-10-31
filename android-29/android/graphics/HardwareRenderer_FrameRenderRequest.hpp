#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class HardwareRenderer;
}

namespace android::graphics
{
	class HardwareRenderer_FrameRenderRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HardwareRenderer_FrameRenderRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		HardwareRenderer_FrameRenderRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject setFrameCommitCallback(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject setVsyncTime(jlong arg0);
		QAndroidJniObject setWaitForPresent(jboolean arg0);
		jint syncAndDraw();
	};
} // namespace android::graphics

