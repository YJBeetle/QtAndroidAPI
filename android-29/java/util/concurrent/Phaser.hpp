#pragma once

#ifndef JAVA_UTIL_CONCURRENT_PHASER
#define JAVA_UTIL_CONCURRENT_PHASER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicReference;
}
namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}

namespace __jni_impl::java::util::concurrent
{
	class Phaser : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor();
		void __constructor(__jni_impl::java::util::concurrent::Phaser arg0, jint arg1);
		void __constructor(__jni_impl::java::util::concurrent::Phaser arg0);
		
		// Methods
		jstring toString();
		jint _register();
		QAndroidJniObject getParent();
		QAndroidJniObject getRoot();
		jboolean isTerminated();
		jint getPhase();
		jint arriveAndAwaitAdvance();
		jint bulkRegister(jint arg0);
		jint arrive();
		jint arriveAndDeregister();
		jint awaitAdvance(jint arg0);
		jint awaitAdvanceInterruptibly(jint arg0);
		jint awaitAdvanceInterruptibly(jint arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2);
		void forceTermination();
		jint getRegisteredParties();
		jint getArrivedParties();
		jint getUnarrivedParties();
	};
} // namespace __jni_impl::java::util::concurrent

#include "atomic/AtomicReference.hpp"
#include "TimeUnit.hpp"

namespace __jni_impl::java::util::concurrent
{
	// Fields
	
	// Constructors
	void Phaser::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.Phaser",
			"(I)V",
			arg0
		);
	}
	void Phaser::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.Phaser",
			"()V"
		);
	}
	void Phaser::__constructor(__jni_impl::java::util::concurrent::Phaser arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.Phaser",
			"(Ljava/util/concurrent/Phaser;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Phaser::__constructor(__jni_impl::java::util::concurrent::Phaser arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.concurrent.Phaser",
			"(Ljava/util/concurrent/Phaser;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jstring Phaser::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Phaser::_register()
	{
		return __thiz.callMethod<jint>(
			"register",
			"()I"
		);
	}
	QAndroidJniObject Phaser::getParent()
	{
		return __thiz.callObjectMethod(
			"getParent",
			"()Ljava/util/concurrent/Phaser;"
		);
	}
	QAndroidJniObject Phaser::getRoot()
	{
		return __thiz.callObjectMethod(
			"getRoot",
			"()Ljava/util/concurrent/Phaser;"
		);
	}
	jboolean Phaser::isTerminated()
	{
		return __thiz.callMethod<jboolean>(
			"isTerminated",
			"()Z"
		);
	}
	jint Phaser::getPhase()
	{
		return __thiz.callMethod<jint>(
			"getPhase",
			"()I"
		);
	}
	jint Phaser::arriveAndAwaitAdvance()
	{
		return __thiz.callMethod<jint>(
			"arriveAndAwaitAdvance",
			"()I"
		);
	}
	jint Phaser::bulkRegister(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"bulkRegister",
			"(I)I",
			arg0
		);
	}
	jint Phaser::arrive()
	{
		return __thiz.callMethod<jint>(
			"arrive",
			"()I"
		);
	}
	jint Phaser::arriveAndDeregister()
	{
		return __thiz.callMethod<jint>(
			"arriveAndDeregister",
			"()I"
		);
	}
	jint Phaser::awaitAdvance(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"awaitAdvance",
			"(I)I",
			arg0
		);
	}
	jint Phaser::awaitAdvanceInterruptibly(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"awaitAdvanceInterruptibly",
			"(I)I",
			arg0
		);
	}
	jint Phaser::awaitAdvanceInterruptibly(jint arg0, jlong arg1, __jni_impl::java::util::concurrent::TimeUnit arg2)
	{
		return __thiz.callMethod<jint>(
			"awaitAdvanceInterruptibly",
			"(IJLjava/util/concurrent/TimeUnit;)I",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Phaser::forceTermination()
	{
		__thiz.callMethod<void>(
			"forceTermination",
			"()V"
		);
	}
	jint Phaser::getRegisteredParties()
	{
		return __thiz.callMethod<jint>(
			"getRegisteredParties",
			"()I"
		);
	}
	jint Phaser::getArrivedParties()
	{
		return __thiz.callMethod<jint>(
			"getArrivedParties",
			"()I"
		);
	}
	jint Phaser::getUnarrivedParties()
	{
		return __thiz.callMethod<jint>(
			"getUnarrivedParties",
			"()I"
		);
	}
} // namespace __jni_impl::java::util::concurrent

namespace java::util::concurrent
{
	class Phaser : public __jni_impl::java::util::concurrent::Phaser
	{
	public:
		Phaser(QAndroidJniObject obj) { __thiz = obj; }
		Phaser(jint arg0)
		{
			__constructor(
				arg0);
		}
		Phaser()
		{
			__constructor();
		}
		Phaser(__jni_impl::java::util::concurrent::Phaser arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Phaser(__jni_impl::java::util::concurrent::Phaser arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::concurrent

#endif // JAVA_UTIL_CONCURRENT_PHASER

