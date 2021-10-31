#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class UserHandle;
}

namespace android::os
{
	class Process : public __JniBaseClass
	{
	public:
		// Fields
		static jint BLUETOOTH_UID();
		static jint FIRST_APPLICATION_UID();
		static jint INVALID_UID();
		static jint LAST_APPLICATION_UID();
		static jint PHONE_UID();
		static jint ROOT_UID();
		static jint SHELL_UID();
		static jint SIGNAL_KILL();
		static jint SIGNAL_QUIT();
		static jint SIGNAL_USR1();
		static jint SYSTEM_UID();
		static jint THREAD_PRIORITY_AUDIO();
		static jint THREAD_PRIORITY_BACKGROUND();
		static jint THREAD_PRIORITY_DEFAULT();
		static jint THREAD_PRIORITY_DISPLAY();
		static jint THREAD_PRIORITY_FOREGROUND();
		static jint THREAD_PRIORITY_LESS_FAVORABLE();
		static jint THREAD_PRIORITY_LOWEST();
		static jint THREAD_PRIORITY_MORE_FAVORABLE();
		static jint THREAD_PRIORITY_URGENT_AUDIO();
		static jint THREAD_PRIORITY_URGENT_DISPLAY();
		static jint THREAD_PRIORITY_VIDEO();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Process(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Process(QAndroidJniObject obj);
		
		// Constructors
		Process();
		
		// Methods
		static jlong getElapsedCpuTime();
		static jintArray getExclusiveCores();
		static jint getGidForName(jstring arg0);
		static jlong getStartElapsedRealtime();
		static jlong getStartUptimeMillis();
		static jint getThreadPriority(jint arg0);
		static jint getUidForName(jstring arg0);
		static jboolean is64Bit();
		static jboolean isApplicationUid(jint arg0);
		static jboolean isIsolated();
		static void killProcess(jint arg0);
		static jint myPid();
		static jint myTid();
		static jint myUid();
		static android::os::UserHandle myUserHandle();
		static void sendSignal(jint arg0, jint arg1);
		static void setThreadPriority(jint arg0);
		static void setThreadPriority(jint arg0, jint arg1);
		static jboolean supportsProcesses();
	};
} // namespace android::os

