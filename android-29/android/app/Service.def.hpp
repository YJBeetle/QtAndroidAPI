#pragma once

#include "../content/ContextWrapper.def.hpp"

class JArray;
namespace android::app
{
	class Application;
}
namespace android::app
{
	class Notification;
}
namespace android::content
{
	class Intent;
}
namespace android::content::res
{
	class Configuration;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class PrintWriter;
}

namespace android::app
{
	class Service : public android::content::ContextWrapper
	{
	public:
		// Fields
		static jint START_CONTINUATION_MASK();
		static jint START_FLAG_REDELIVERY();
		static jint START_FLAG_RETRY();
		static jint START_NOT_STICKY();
		static jint START_REDELIVER_INTENT();
		static jint START_STICKY();
		static jint START_STICKY_COMPATIBILITY();
		static jint STOP_FOREGROUND_DETACH();
		static jint STOP_FOREGROUND_REMOVE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Service(const char *className, const char *sig, Ts...agv) : android::content::ContextWrapper(className, sig, std::forward<Ts>(agv)...) {}
		Service(QAndroidJniObject obj) : android::content::ContextWrapper(obj) {}
		
		// Constructors
		Service();
		
		// Methods
		android::app::Application getApplication() const;
		jint getForegroundServiceType() const;
		JObject onBind(android::content::Intent arg0) const;
		void onConfigurationChanged(android::content::res::Configuration arg0) const;
		void onCreate() const;
		void onDestroy() const;
		void onLowMemory() const;
		void onRebind(android::content::Intent arg0) const;
		void onStart(android::content::Intent arg0, jint arg1) const;
		jint onStartCommand(android::content::Intent arg0, jint arg1, jint arg2) const;
		void onTaskRemoved(android::content::Intent arg0) const;
		void onTrimMemory(jint arg0) const;
		jboolean onUnbind(android::content::Intent arg0) const;
		void startForeground(jint arg0, android::app::Notification arg1) const;
		void startForeground(jint arg0, android::app::Notification arg1, jint arg2) const;
		void stopForeground(jboolean arg0) const;
		void stopForeground(jint arg0) const;
		void stopSelf() const;
		void stopSelf(jint arg0) const;
		jboolean stopSelfResult(jint arg0) const;
	};
} // namespace android::app

