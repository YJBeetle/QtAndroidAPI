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
		
		HandlerThread(QAndroidJniObject obj);
		// Constructors
		HandlerThread(jstring &arg0);
		HandlerThread(const QString &arg0);
		HandlerThread(jstring &arg0, jint &arg1);
		HandlerThread(const QString &arg0, jint &arg1);
		HandlerThread() = default;
		
		// Methods
		QAndroidJniObject getLooper();
		jint getThreadId();
		jboolean quit();
		jboolean quitSafely();
		void run();
	};
} // namespace android::os

