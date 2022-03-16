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
		WindowInsetsAnimation_Callback(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		WindowInsetsAnimation_Callback(jint arg0);
		
		// Methods
		jint getDispatchMode() const;
		void onEnd(android::view::WindowInsetsAnimation arg0) const;
		void onPrepare(android::view::WindowInsetsAnimation arg0) const;
		android::view::WindowInsets onProgress(android::view::WindowInsets arg0, JObject arg1) const;
		android::view::WindowInsetsAnimation_Bounds onStart(android::view::WindowInsetsAnimation arg0, android::view::WindowInsetsAnimation_Bounds arg1) const;
	};
} // namespace android::view

