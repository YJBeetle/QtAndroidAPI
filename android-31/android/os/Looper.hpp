#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class MessageQueue;
}
namespace java::lang
{
	class Thread;
}

namespace android::os
{
	class Looper : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Looper(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Looper(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::os::Looper getMainLooper();
		static void loop();
		static android::os::Looper myLooper();
		static android::os::MessageQueue myQueue();
		static void prepare();
		static void prepareMainLooper();
		void dump(JObject arg0, jstring arg1);
		android::os::MessageQueue getQueue();
		java::lang::Thread getThread();
		jboolean isCurrentThread();
		void quit();
		void quitSafely();
		void setMessageLogging(JObject arg0);
		jstring toString();
	};
} // namespace android::os

