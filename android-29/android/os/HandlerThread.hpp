#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Thread.hpp"

namespace android::os
{
	class Looper;
}

namespace android::os
{
	class HandlerThread : public java::lang::Thread
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HandlerThread(const char *className, const char *sig, Ts...agv) : java::lang::Thread(className, sig, std::forward<Ts>(agv)...) {}
		HandlerThread(QAndroidJniObject obj);
		
		// Constructors
		HandlerThread(jstring arg0);
		HandlerThread(jstring arg0, jint arg1);
		
		// Methods
		android::os::Looper getLooper();
		jint getThreadId();
		jboolean quit();
		jboolean quitSafely();
		void run();
	};
} // namespace android::os

