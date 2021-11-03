#pragma once

#include "../content/ContextWrapper.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit Service(const char *className, const char *sig, Ts...agv) : android::content::ContextWrapper(className, sig, std::forward<Ts>(agv)...) {}
		Service(QJniObject obj);
		
		// Constructors
		Service();
		
		// Methods
		android::app::Application getApplication();
		jint getForegroundServiceType();
		JObject onBind(android::content::Intent arg0);
		void onConfigurationChanged(android::content::res::Configuration arg0);
		void onCreate();
		void onDestroy();
		void onLowMemory();
		void onRebind(android::content::Intent arg0);
		void onStart(android::content::Intent arg0, jint arg1);
		jint onStartCommand(android::content::Intent arg0, jint arg1, jint arg2);
		void onTaskRemoved(android::content::Intent arg0);
		void onTrimMemory(jint arg0);
		jboolean onUnbind(android::content::Intent arg0);
		void startForeground(jint arg0, android::app::Notification arg1);
		void startForeground(jint arg0, android::app::Notification arg1, jint arg2);
		void stopForeground(jboolean arg0);
		void stopForeground(jint arg0);
		void stopSelf();
		void stopSelf(jint arg0);
		jboolean stopSelfResult(jint arg0);
	};
} // namespace android::app

