#include "./UserHandle.hpp"
#include "./Process.hpp"

namespace android::os
{
	// Fields
	jint Process::BLUETOOTH_UID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Process",
			"BLUETOOTH_UID"
		);
	}
	jint Process::FIRST_APPLICATION_UID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Process",
			"FIRST_APPLICATION_UID"
		);
	}
	jint Process::INVALID_UID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Process",
			"INVALID_UID"
		);
	}
	jint Process::LAST_APPLICATION_UID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Process",
			"LAST_APPLICATION_UID"
		);
	}
	jint Process::PHONE_UID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Process",
			"PHONE_UID"
		);
	}
	jint Process::ROOT_UID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Process",
			"ROOT_UID"
		);
	}
	jint Process::SHELL_UID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Process",
			"SHELL_UID"
		);
	}
	jint Process::SIGNAL_KILL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Process",
			"SIGNAL_KILL"
		);
	}
	jint Process::SIGNAL_QUIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Process",
			"SIGNAL_QUIT"
		);
	}
	jint Process::SIGNAL_USR1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Process",
			"SIGNAL_USR1"
		);
	}
	jint Process::SYSTEM_UID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Process",
			"SYSTEM_UID"
		);
	}
	jint Process::THREAD_PRIORITY_AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_AUDIO"
		);
	}
	jint Process::THREAD_PRIORITY_BACKGROUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_BACKGROUND"
		);
	}
	jint Process::THREAD_PRIORITY_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_DEFAULT"
		);
	}
	jint Process::THREAD_PRIORITY_DISPLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_DISPLAY"
		);
	}
	jint Process::THREAD_PRIORITY_FOREGROUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_FOREGROUND"
		);
	}
	jint Process::THREAD_PRIORITY_LESS_FAVORABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_LESS_FAVORABLE"
		);
	}
	jint Process::THREAD_PRIORITY_LOWEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_LOWEST"
		);
	}
	jint Process::THREAD_PRIORITY_MORE_FAVORABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_MORE_FAVORABLE"
		);
	}
	jint Process::THREAD_PRIORITY_URGENT_AUDIO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_URGENT_AUDIO"
		);
	}
	jint Process::THREAD_PRIORITY_URGENT_DISPLAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_URGENT_DISPLAY"
		);
	}
	jint Process::THREAD_PRIORITY_VIDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_VIDEO"
		);
	}
	
	// QAndroidJniObject forward
	Process::Process(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Process::Process()
		: __JniBaseClass(
			"android.os.Process",
			"()V"
		) {}
	
	// Methods
	jlong Process::getElapsedCpuTime()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.Process",
			"getElapsedCpuTime",
			"()J"
		);
	}
	jintArray Process::getExclusiveCores()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Process",
			"getExclusiveCores",
			"()[I"
		).object<jintArray>();
	}
	jint Process::getGidForName(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Process",
			"getGidForName",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jlong Process::getStartElapsedRealtime()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.Process",
			"getStartElapsedRealtime",
			"()J"
		);
	}
	jlong Process::getStartUptimeMillis()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.os.Process",
			"getStartUptimeMillis",
			"()J"
		);
	}
	jint Process::getThreadPriority(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Process",
			"getThreadPriority",
			"(I)I",
			arg0
		);
	}
	jint Process::getUidForName(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Process",
			"getUidForName",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jboolean Process::is64Bit()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Process",
			"is64Bit",
			"()Z"
		);
	}
	jboolean Process::isApplicationUid(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Process",
			"isApplicationUid",
			"(I)Z",
			arg0
		);
	}
	jboolean Process::isIsolated()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Process",
			"isIsolated",
			"()Z"
		);
	}
	void Process::killProcess(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Process",
			"killProcess",
			"(I)V",
			arg0
		);
	}
	jint Process::myPid()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Process",
			"myPid",
			"()I"
		);
	}
	jint Process::myTid()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Process",
			"myTid",
			"()I"
		);
	}
	jint Process::myUid()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.os.Process",
			"myUid",
			"()I"
		);
	}
	android::os::UserHandle Process::myUserHandle()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Process",
			"myUserHandle",
			"()Landroid/os/UserHandle;"
		);
	}
	void Process::sendSignal(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Process",
			"sendSignal",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Process::setThreadPriority(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Process",
			"setThreadPriority",
			"(I)V",
			arg0
		);
	}
	void Process::setThreadPriority(jint arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Process",
			"setThreadPriority",
			"(II)V",
			arg0,
			arg1
		);
	}
	jboolean Process::supportsProcesses()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.os.Process",
			"supportsProcesses",
			"()Z"
		);
	}
} // namespace android::os

