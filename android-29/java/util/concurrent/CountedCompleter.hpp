#pragma once

#ifndef JAVA_UTIL_CONCURRENT_COUNTEDCOMPLETER
#define JAVA_UTIL_CONCURRENT_COUNTEDCOMPLETER

#include "../../../__JniBaseClass.hpp"
#include "ForkJoinTask.hpp"


namespace __jni_impl::java::util::concurrent
{
	class CountedCompleter : public __jni_impl::java::util::concurrent::ForkJoinTask
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void compute();
		QAndroidJniObject getRoot();
		QAndroidJniObject getCompleter();
		void setPendingCount(jint arg0);
		void tryComplete();
		jobject getRawResult();
		QAndroidJniObject firstComplete();
		void helpComplete(jint arg0);
		jboolean onExceptionalCompletion(jthrowable arg0, __jni_impl::java::util::concurrent::CountedCompleter arg1);
		jint getPendingCount();
		void addToPendingCount(jint arg0);
		jboolean compareAndSetPendingCount(jint arg0, jint arg1);
		jint decrementPendingCountUnlessZero();
		void propagateCompletion();
		QAndroidJniObject nextComplete();
		void quietlyCompleteRoot();
		void complete(jobject arg0);
		void onCompletion(__jni_impl::java::util::concurrent::CountedCompleter arg0);
	};
} // namespace __jni_impl::java::util::concurrent


namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void CountedCompleter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.CountedCompleter",
			"(V)V");
	}
	
	// Methods
	void CountedCompleter::compute()
	{
		__thiz.callMethod<void>(
			"compute",
			"()V"
		);
	}
	QAndroidJniObject CountedCompleter::getRoot()
	{
		return __thiz.callObjectMethod(
			"getRoot",
			"()Ljava/util/concurrent/CountedCompleter;"
		);
	}
	QAndroidJniObject CountedCompleter::getCompleter()
	{
		return __thiz.callObjectMethod(
			"getCompleter",
			"()Ljava/util/concurrent/CountedCompleter;"
		);
	}
	void CountedCompleter::setPendingCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"setPendingCount",
			"(I)V",
			arg0
		);
	}
	void CountedCompleter::tryComplete()
	{
		__thiz.callMethod<void>(
			"tryComplete",
			"()V"
		);
	}
	jobject CountedCompleter::getRawResult()
	{
		return __thiz.callObjectMethod(
			"getRawResult",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject CountedCompleter::firstComplete()
	{
		return __thiz.callObjectMethod(
			"firstComplete",
			"()Ljava/util/concurrent/CountedCompleter;"
		);
	}
	void CountedCompleter::helpComplete(jint arg0)
	{
		__thiz.callMethod<void>(
			"helpComplete",
			"(I)V",
			arg0
		);
	}
	jboolean CountedCompleter::onExceptionalCompletion(jthrowable arg0, __jni_impl::java::util::concurrent::CountedCompleter arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onExceptionalCompletion",
			"(Ljava/lang/Throwable;Ljava/util/concurrent/CountedCompleter;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint CountedCompleter::getPendingCount()
	{
		return __thiz.callMethod<jint>(
			"getPendingCount",
			"()I"
		);
	}
	void CountedCompleter::addToPendingCount(jint arg0)
	{
		__thiz.callMethod<void>(
			"addToPendingCount",
			"(I)V",
			arg0
		);
	}
	jboolean CountedCompleter::compareAndSetPendingCount(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"compareAndSetPendingCount",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jint CountedCompleter::decrementPendingCountUnlessZero()
	{
		return __thiz.callMethod<jint>(
			"decrementPendingCountUnlessZero",
			"()I"
		);
	}
	void CountedCompleter::propagateCompletion()
	{
		__thiz.callMethod<void>(
			"propagateCompletion",
			"()V"
		);
	}
	QAndroidJniObject CountedCompleter::nextComplete()
	{
		return __thiz.callObjectMethod(
			"nextComplete",
			"()Ljava/util/concurrent/CountedCompleter;"
		);
	}
	void CountedCompleter::quietlyCompleteRoot()
	{
		__thiz.callMethod<void>(
			"quietlyCompleteRoot",
			"()V"
		);
	}
	void CountedCompleter::complete(jobject arg0)
	{
		__thiz.callMethod<void>(
			"complete",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void CountedCompleter::onCompletion(__jni_impl::java::util::concurrent::CountedCompleter arg0)
	{
		__thiz.callMethod<void>(
			"onCompletion",
			"(Ljava/util/concurrent/CountedCompleter;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class CountedCompleter : public __jni_impl::java::util::concurrent::CountedCompleter
	{
	public:
		CountedCompleter(QAndroidJniObject obj) { __thiz = obj; }
		CountedCompleter()
		{
			__constructor();
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_COUNTEDCOMPLETER

