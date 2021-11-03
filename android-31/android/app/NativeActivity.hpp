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
		void onConfigurationChanged(android::content::res::Configuration arg0) const;
		void onGlobalLayout() const;
		void onInputQueueCreated(android::view::InputQueue arg0) const;
		void onInputQueueDestroyed(android::view::InputQueue arg0) const;
		void onLowMemory() const;
		void onWindowFocusChanged(jboolean arg0) const;
		void surfaceChanged(JObject arg0, jint arg1, jint arg2, jint arg3) const;
		void surfaceCreated(JObject arg0) const;
		void surfaceDestroyed(JObject arg0) const;
		void surfaceRedrawNeeded(JObject arg0) const;
	};
} // namespace android::app

