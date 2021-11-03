#include "../../JIntArray.hpp"
#include "./UserHandle.hpp"
#include "../../JString.hpp"
#include "./Process.hpp"

namespace android::os
{
	// Fields
	jint Process::BLUETOOTH_UID()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"BLUETOOTH_UID"
		);
	}
	jint Process::FIRST_APPLICATION_UID()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"FIRST_APPLICATION_UID"
		);
	}
	jint Process::INVALID_UID()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"INVALID_UID"
		);
	}
	jint Process::LAST_APPLICATION_UID()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"LAST_APPLICATION_UID"
		);
	}
	jint Process::PHONE_UID()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"PHONE_UID"
		);
	}
	jint Process::ROOT_UID()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"ROOT_UID"
		);
	}
	jint Process::SHELL_UID()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"SHELL_UID"
		);
	}
	jint Process::SIGNAL_KILL()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"SIGNAL_KILL"
		);
	}
	jint Process::SIGNAL_QUIT()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"SIGNAL_QUIT"
		);
	}
	jint Process::SIGNAL_USR1()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"SIGNAL_USR1"
		);
	}
	jint Process::SYSTEM_UID()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"SYSTEM_UID"
		);
	}
	jint Process::THREAD_PRIORITY_AUDIO()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_AUDIO"
		);
	}
	jint Process::THREAD_PRIORITY_BACKGROUND()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_BACKGROUND"
		);
	}
	jint Process::THREAD_PRIORITY_DEFAULT()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_DEFAULT"
		);
	}
	jint Process::THREAD_PRIORITY_DISPLAY()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_DISPLAY"
		);
	}
	jint Process::THREAD_PRIORITY_FOREGROUND()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_FOREGROUND"
		);
	}
	jint Process::THREAD_PRIORITY_LESS_FAVORABLE()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_LESS_FAVORABLE"
		);
	}
	jint Process::THREAD_PRIORITY_LOWEST()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_LOWEST"
		);
	}
	jint Process::THREAD_PRIORITY_MORE_FAVORABLE()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_MORE_FAVORABLE"
		);
	}
	jint Process::THREAD_PRIORITY_URGENT_AUDIO()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_URGENT_AUDIO"
		);
	}
	jint Process::THREAD_PRIORITY_URGENT_DISPLAY()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_URGENT_DISPLAY"
		);
	}
	jint Process::THREAD_PRIORITY_VIDEO()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_VIDEO"
		);
	}
	
	// QAndroidJniObject forward
	Process::Process(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Process::Process()
		: JObject(
			"android.os.Process",
			"()V"
		) {}
	
	// Methods
	jlong Process::getElapsedCpuTime()
	{
		return callStaticMethod<jlong>(
			"android.os.Process",
			"getElapsedCpuTime",
			"()J"
		);
	}
	JIntArray Process::getExclusiveCores()
	{
		return callStaticObjectMethod(
			"android.os.Process",
			"getExclusiveCores",
			"()[I"
		);
	}
	jint Process::getGidForName(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.os.Process",
			"getGidForName",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jlong Process::getStartElapsedRealtime()
	{
		return callStaticMethod<jlong>(
			"android.os.Process",
			"getStartElapsedRealtime",
			"()J"
		);
	}
	jlong Process::getStartUptimeMillis()
	{
		return callStaticMethod<jlong>(
			"android.os.Process",
			"getStartUptimeMillis",
			"()J"
		);
	}
	jint Process::getThreadPriority(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.os.Process",
			"getThreadPriority",
			"(I)I",
			arg0
		);
	}
	jint Process::getUidForName(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.os.Process",
			"getUidForName",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jboolean Process::is64Bit()
	{
		return callStaticMethod<jboolean>(
			"android.os.Process",
			"is64Bit",
			"()Z"
		);
	}
	jboolean Process::isApplicationUid(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.os.Process",
			"isApplicationUid",
			"(I)Z",
			arg0
		);
	}
	jboolean Process::isIsolated()
	{
		return callStaticMethod<jboolean>(
			"android.os.Process",
			"isIsolated",
			"()Z"
		);
	}
	void Process::killProcess(jint arg0)
	{
		callStaticMethod<void>(
			"android.os.Process",
			"killProcess",
			"(I)V",
			arg0
		);
	}
	jint Process::myPid()
	{
		return callStaticMethod<jint>(
			"android.os.Process",
			"myPid",
			"()I"
		);
	}
	jint Process::myTid()
	{
		return callStaticMethod<jint>(
			"android.os.Process",
			"myTid",
			"()I"
		);
	}
	jint Process::myUid()
	{
		return callStaticMethod<jint>(
			"android.os.Process",
			"myUid",
			"()I"
		);
	}
	android::os::UserHandle Process::myUserHandle()
	{
		return callStaticObjectMethod(
			"android.os.Process",
			"myUserHandle",
			"()Landroid/os/UserHandle;"
		);
	}
	void Process::sendSignal(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.os.Process",
			"sendSignal",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Process::setThreadPriority(jint arg0)
	{
		callStaticMethod<void>(
			"android.os.Process",
			"setThreadPriority",
			"(I)V",
			arg0
		);
	}
	void Process::setThreadPriority(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.os.Process",
			"setThreadPriority",
			"(II)V",
			arg0,
			arg1
		);
	}
	jboolean Process::supportsProcesses()
	{
		return callStaticMethod<jboolean>(
			"android.os.Process",
			"supportsProcesses",
			"()Z"
		);
	}
} // namespace android::os

