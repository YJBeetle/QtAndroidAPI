#pragma once

#include "../../JIntArray.hpp"
#include "./UserHandle.def.hpp"
#include "../../JString.hpp"
#include "./Process.def.hpp"

namespace android::os
{
	// Fields
	inline jint Process::BLUETOOTH_UID()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"BLUETOOTH_UID"
		);
	}
	inline jint Process::FIRST_APPLICATION_UID()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"FIRST_APPLICATION_UID"
		);
	}
	inline jint Process::INVALID_UID()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"INVALID_UID"
		);
	}
	inline jint Process::LAST_APPLICATION_UID()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"LAST_APPLICATION_UID"
		);
	}
	inline jint Process::PHONE_UID()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"PHONE_UID"
		);
	}
	inline jint Process::ROOT_UID()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"ROOT_UID"
		);
	}
	inline jint Process::SHELL_UID()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"SHELL_UID"
		);
	}
	inline jint Process::SIGNAL_KILL()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"SIGNAL_KILL"
		);
	}
	inline jint Process::SIGNAL_QUIT()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"SIGNAL_QUIT"
		);
	}
	inline jint Process::SIGNAL_USR1()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"SIGNAL_USR1"
		);
	}
	inline jint Process::SYSTEM_UID()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"SYSTEM_UID"
		);
	}
	inline jint Process::THREAD_PRIORITY_AUDIO()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_AUDIO"
		);
	}
	inline jint Process::THREAD_PRIORITY_BACKGROUND()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_BACKGROUND"
		);
	}
	inline jint Process::THREAD_PRIORITY_DEFAULT()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_DEFAULT"
		);
	}
	inline jint Process::THREAD_PRIORITY_DISPLAY()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_DISPLAY"
		);
	}
	inline jint Process::THREAD_PRIORITY_FOREGROUND()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_FOREGROUND"
		);
	}
	inline jint Process::THREAD_PRIORITY_LESS_FAVORABLE()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_LESS_FAVORABLE"
		);
	}
	inline jint Process::THREAD_PRIORITY_LOWEST()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_LOWEST"
		);
	}
	inline jint Process::THREAD_PRIORITY_MORE_FAVORABLE()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_MORE_FAVORABLE"
		);
	}
	inline jint Process::THREAD_PRIORITY_URGENT_AUDIO()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_URGENT_AUDIO"
		);
	}
	inline jint Process::THREAD_PRIORITY_URGENT_DISPLAY()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_URGENT_DISPLAY"
		);
	}
	inline jint Process::THREAD_PRIORITY_VIDEO()
	{
		return getStaticField<jint>(
			"android.os.Process",
			"THREAD_PRIORITY_VIDEO"
		);
	}
	
	// Constructors
	inline Process::Process()
		: JObject(
			"android.os.Process",
			"()V"
		) {}
	
	// Methods
	inline jlong Process::getElapsedCpuTime()
	{
		return callStaticMethod<jlong>(
			"android.os.Process",
			"getElapsedCpuTime",
			"()J"
		);
	}
	inline JIntArray Process::getExclusiveCores()
	{
		return callStaticObjectMethod(
			"android.os.Process",
			"getExclusiveCores",
			"()[I"
		);
	}
	inline jint Process::getGidForName(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.os.Process",
			"getGidForName",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jlong Process::getStartElapsedRealtime()
	{
		return callStaticMethod<jlong>(
			"android.os.Process",
			"getStartElapsedRealtime",
			"()J"
		);
	}
	inline jlong Process::getStartUptimeMillis()
	{
		return callStaticMethod<jlong>(
			"android.os.Process",
			"getStartUptimeMillis",
			"()J"
		);
	}
	inline jint Process::getThreadPriority(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.os.Process",
			"getThreadPriority",
			"(I)I",
			arg0
		);
	}
	inline jint Process::getUidForName(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.os.Process",
			"getUidForName",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jboolean Process::is64Bit()
	{
		return callStaticMethod<jboolean>(
			"android.os.Process",
			"is64Bit",
			"()Z"
		);
	}
	inline jboolean Process::isApplicationUid(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.os.Process",
			"isApplicationUid",
			"(I)Z",
			arg0
		);
	}
	inline jboolean Process::isIsolated()
	{
		return callStaticMethod<jboolean>(
			"android.os.Process",
			"isIsolated",
			"()Z"
		);
	}
	inline void Process::killProcess(jint arg0)
	{
		callStaticMethod<void>(
			"android.os.Process",
			"killProcess",
			"(I)V",
			arg0
		);
	}
	inline jint Process::myPid()
	{
		return callStaticMethod<jint>(
			"android.os.Process",
			"myPid",
			"()I"
		);
	}
	inline jint Process::myTid()
	{
		return callStaticMethod<jint>(
			"android.os.Process",
			"myTid",
			"()I"
		);
	}
	inline jint Process::myUid()
	{
		return callStaticMethod<jint>(
			"android.os.Process",
			"myUid",
			"()I"
		);
	}
	inline android::os::UserHandle Process::myUserHandle()
	{
		return callStaticObjectMethod(
			"android.os.Process",
			"myUserHandle",
			"()Landroid/os/UserHandle;"
		);
	}
	inline void Process::sendSignal(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.os.Process",
			"sendSignal",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Process::setThreadPriority(jint arg0)
	{
		callStaticMethod<void>(
			"android.os.Process",
			"setThreadPriority",
			"(I)V",
			arg0
		);
	}
	inline void Process::setThreadPriority(jint arg0, jint arg1)
	{
		callStaticMethod<void>(
			"android.os.Process",
			"setThreadPriority",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline jboolean Process::supportsProcesses()
	{
		return callStaticMethod<jboolean>(
			"android.os.Process",
			"supportsProcesses",
			"()Z"
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
