#pragma once

#include "../../JObject.hpp"
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
		
		// QJniObject forward
		template<typename ...Ts> explicit Application(const char *className, const char *sig, Ts...agv) : android::content::ContextWrapper(className, sig, std::forward<Ts>(agv)...) {}
		Application(QJniObject obj);
		
		// Constructors
		Application();
		
		// Methods
		static jstring getProcessName();
		void onConfigurationChanged(android::content::res::Configuration arg0);
		void onCreate();
		void onLowMemory();
		void onTerminate();
		void onTrimMemory(jint arg0);
		void registerActivityLifecycleCallbacks(JObject arg0);
		void registerComponentCallbacks(JObject arg0);
		void registerOnProvideAssistDataListener(JObject arg0);
		void unregisterActivityLifecycleCallbacks(JObject arg0);
		void unregisterComponentCallbacks(JObject arg0);
		void unregisterOnProvideAssistDataListener(JObject arg0);
	};
} // namespace android::app

