#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::view
{
	class WindowInsets;
}
namespace android::view
{
	class WindowInsetsAnimation;
}
namespace android::view
{
	class WindowInsetsAnimation_Bounds;
}

namespace android::view
{
	class WindowInsetsAnimation_Callback : public __JniBaseClass
	{
	public:
		// Fields
		static jint DISPATCH_MODE_CONTINUE_ON_SUBTREE();
		static jint DISPATCH_MODE_STOP();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WindowInsetsAnimation_Callback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WindowInsetsAnimation_Callback(QAndroidJniObject obj);
		
		// Constructors
		WindowInsetsAnimation_Callback(jint arg0);
		
		// Methods
		jint getDispatchMode();
		void onEnd(android::view::WindowInsetsAnimation arg0);
		void onPrepare(android::view::WindowInsetsAnimation arg0);
		android::view::WindowInsets onProgress(android::view::WindowInsets arg0, __JniBaseClass arg1);
		android::view::WindowInsetsAnimation_Bounds onStart(android::view::WindowInsetsAnimation arg0, android::view::WindowInsetsAnimation_Bounds arg1);
	};
} // namespace android::view

