#pragma once

#include "../content/ContextWrapper.hpp"

namespace android::content::res
{
	class Configuration;
}
class JString;

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
		static JString getProcessName();
		void onConfigurationChanged(android::content::res::Configuration arg0) const;
		void onCreate() const;
		void onLowMemory() const;
		void onTerminate() const;
		void onTrimMemory(jint arg0) const;
		void registerActivityLifecycleCallbacks(JObject arg0) const;
		void registerComponentCallbacks(JObject arg0) const;
		void registerOnProvideAssistDataListener(JObject arg0) const;
		void unregisterActivityLifecycleCallbacks(JObject arg0) const;
		void unregisterComponentCallbacks(JObject arg0) const;
		void unregisterOnProvideAssistDataListener(JObject arg0) const;
	};
} // namespace android::app

