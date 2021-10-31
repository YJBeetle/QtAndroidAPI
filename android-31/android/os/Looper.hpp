#pragma once

#include "../../__JniBaseClass.hpp"

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
	class Looper : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Looper(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Looper(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::os::Looper getMainLooper();
		static void loop();
		static android::os::Looper myLooper();
		static android::os::MessageQueue myQueue();
		static void prepare();
		static void prepareMainLooper();
		void dump(__JniBaseClass arg0, jstring arg1);
		android::os::MessageQueue getQueue();
		java::lang::Thread getThread();
		jboolean isCurrentThread();
		void quit();
		void quitSafely();
		void setMessageLogging(__JniBaseClass arg0);
		jstring toString();
	};
} // namespace android::os

