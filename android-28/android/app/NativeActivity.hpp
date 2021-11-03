#pragma once

#include "./Activity.hpp"

namespace android::content::res
{
	class Configuration;
}
namespace android::os
{
	class Bundle;
}
namespace android::view
{
	class InputQueue;
}
class JString;

namespace android::app
{
	class NativeActivity : public android::app::Activity
	{
	public:
		// Fields
		static JString META_DATA_FUNC_NAME();
		static JString META_DATA_LIB_NAME();
		
		// QJniObject forward
		template<typename ...Ts> explicit NativeActivity(const char *className, const char *sig, Ts...agv) : android::app::Activity(className, sig, std::forward<Ts>(agv)...) {}
		NativeActivity(QJniObject obj);
		
		// Constructors
		NativeActivity();
		
		// Methods
		void onConfigurationChanged(android::content::res::Configuration arg0);
		void onGlobalLayout();
		void onInputQueueCreated(android::view::InputQueue arg0);
		void onInputQueueDestroyed(android::view::InputQueue arg0);
		void onLowMemory();
		void onWindowFocusChanged(jboolean arg0);
		void surfaceChanged(JObject arg0, jint arg1, jint arg2, jint arg3);
		void surfaceCreated(JObject arg0);
		void surfaceDestroyed(JObject arg0);
		void surfaceRedrawNeeded(JObject arg0);
	};
} // namespace android::app

