#pragma once

#include "../../JObjectArray.hpp"
#include "./AsyncTask_Status.def.hpp"
#include "../../JObject.hpp"
#include "../../java/util/concurrent/TimeUnit.def.hpp"
#include "./AsyncTask.def.hpp"

namespace android::os
{
	// Fields
	inline JObject AsyncTask::SERIAL_EXECUTOR()
	{
		return getStaticObjectField(
			"android.os.AsyncTask",
			"SERIAL_EXECUTOR",
			"Ljava/util/concurrent/Executor;"
		);
	}
	inline JObject AsyncTask::THREAD_POOL_EXECUTOR()
	{
		return getStaticObjectField(
			"android.os.AsyncTask",
			"THREAD_POOL_EXECUTOR",
			"Ljava/util/concurrent/Executor;"
		);
	}
	
	// Constructors
	inline AsyncTask::AsyncTask()
		: JObject(
			"android.os.AsyncTask",
			"()V"
		) {}
	
	// Methods
	inline void AsyncTask::execute(JObject arg0)
	{
		callStaticMethod<void>(
			"android.os.AsyncTask",
			"execute",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	inline jboolean AsyncTask::cancel(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"cancel",
			"(Z)Z",
			arg0
		);
	}
	inline android::os::AsyncTask AsyncTask::execute(JObjectArray arg0) const
	{
		return callObjectMethod(
			"execute",
			"([Ljava/lang/Object;)Landroid/os/AsyncTask;",
			arg0.object<jobjectArray>()
		);
	}
	inline android::os::AsyncTask AsyncTask::executeOnExecutor(JObject arg0, JObjectArray arg1) const
	{
		return callObjectMethod(
			"executeOnExecutor",
			"(Ljava/util/concurrent/Executor;[Ljava/lang/Object;)Landroid/os/AsyncTask;",
			arg0.object(),
			arg1.object<jobjectArray>()
		);
	}
	inline JObject AsyncTask::get() const
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject AsyncTask::get(jlong arg0, java::util::concurrent::TimeUnit arg1) const
	{
		return callObjectMethod(
			"get",
			"(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;",
			arg0,
			arg1.object()
		);
	}
	inline android::os::AsyncTask_Status AsyncTask::getStatus() const
	{
		return callObjectMethod(
			"getStatus",
			"()Landroid/os/AsyncTask$Status;"
		);
	}
	inline jboolean AsyncTask::isCancelled() const
	{
		return callMethod<jboolean>(
			"isCancelled",
			"()Z"
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
