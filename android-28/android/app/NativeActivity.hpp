#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"
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

namespace android::app
{
	class NativeActivity : public android::app::Activity
	{
	public:
		// Fields
		static jstring META_DATA_FUNC_NAME();
		static jstring META_DATA_LIB_NAME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NativeActivity(const char *className, const char *sig, Ts...agv) : android::app::Activity(className, sig, std::forward<Ts>(agv)...) {}
		NativeActivity(QAndroidJniObject obj);
		
		// Constructors
		NativeActivity();
		
		// Methods
		void onConfigurationChanged(android::content::res::Configuration arg0);
		void onGlobalLayout();
		void onInputQueueCreated(android::view::InputQueue arg0);
		void onInputQueueDestroyed(android::view::InputQueue arg0);
		void onLowMemory();
		void onWindowFocusChanged(jboolean arg0);
		void surfaceChanged(__JniBaseClass arg0, jint arg1, jint arg2, jint arg3);
		void surfaceCreated(__JniBaseClass arg0);
		void surfaceDestroyed(__JniBaseClass arg0);
		void surfaceRedrawNeeded(__JniBaseClass arg0);
	};
} // namespace android::app

