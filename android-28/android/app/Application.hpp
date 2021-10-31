#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"

namespace android::content::res
{
	class Configuration;
}

namespace android::app
{
	class Application : public android::content::ContextWrapper
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Application(const char *className, const char *sig, Ts...agv) : android::content::ContextWrapper(className, sig, std::forward<Ts>(agv)...) {}
		Application(QAndroidJniObject obj);
		
		// Constructors
		Application();
		
		// Methods
		static jstring getProcessName();
		void onConfigurationChanged(android::content::res::Configuration arg0);
		void onCreate();
		void onLowMemory();
		void onTerminate();
		void onTrimMemory(jint arg0);
		void registerActivityLifecycleCallbacks(__JniBaseClass arg0);
		void registerComponentCallbacks(__JniBaseClass arg0);
		void registerOnProvideAssistDataListener(__JniBaseClass arg0);
		void unregisterActivityLifecycleCallbacks(__JniBaseClass arg0);
		void unregisterComponentCallbacks(__JniBaseClass arg0);
		void unregisterOnProvideAssistDataListener(__JniBaseClass arg0);
	};
} // namespace android::app

