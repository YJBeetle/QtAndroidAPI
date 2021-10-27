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
		
		Looper(QAndroidJniObject obj);
		// Constructors
		Looper() = default;
		
		// Methods
		static QAndroidJniObject getMainLooper();
		static void loop();
		static QAndroidJniObject myLooper();
		static QAndroidJniObject myQueue();
		static void prepare();
		static void prepareMainLooper();
		void dump(__JniBaseClass arg0, jstring arg1);
		void dump(__JniBaseClass arg0, const QString &arg1);
		QAndroidJniObject getQueue();
		QAndroidJniObject getThread();
		jboolean isCurrentThread();
		void quit();
		void quitSafely();
		void setMessageLogging(__JniBaseClass arg0);
		jstring toString();
	};
} // namespace android::os

