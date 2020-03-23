#pragma once

#ifndef JAVA_UTIL_TIMERTASK
#define JAVA_UTIL_TIMERTASK

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class TimerTask : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void run();
		jboolean cancel();
		jlong scheduledExecutionTime();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void TimerTask::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.TimerTask",
			"(V)V");
	}
	
	// Methods
	void TimerTask::run()
	{
		__thiz.callMethod<void>(
			"run",
			"()V");
	}
	jboolean TimerTask::cancel()
	{
		return __thiz.callMethod<jboolean>(
			"cancel",
			"()Z");
	}
	jlong TimerTask::scheduledExecutionTime()
	{
		return __thiz.callMethod<jlong>(
			"scheduledExecutionTime",
			"()J");
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class TimerTask : public __jni_impl::java::util::TimerTask
	{
	public:
		TimerTask(QAndroidJniObject obj) { __thiz = obj; }
		TimerTask()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_TIMERTASK

