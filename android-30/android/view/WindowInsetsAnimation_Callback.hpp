#pragma once

#include "../../JObject.hpp"

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
	class WindowInsetsAnimation_Callback : public JObject
	{
	public:
		// Fields
		static jint DISPATCH_MODE_CONTINUE_ON_SUBTREE();
		static jint DISPATCH_MODE_STOP();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WindowInsetsAnimation_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WindowInsetsAnimation_Callback(QAndroidJniObject obj);
		
		// Constructors
		WindowInsetsAnimation_Callback(jint arg0);
		
		// Methods
		jint getDispatchMode();
		void onEnd(android::view::WindowInsetsAnimation arg0);
		void onPrepare(android::view::WindowInsetsAnimation arg0);
		android::view::WindowInsets onProgress(android::view::WindowInsets arg0, JObject arg1);
		android::view::WindowInsetsAnimation_Bounds onStart(android::view::WindowInsetsAnimation arg0, android::view::WindowInsetsAnimation_Bounds arg1);
	};
} // namespace android::view

