#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio::channels::spi
{
	class AsynchronousChannelProvider;
}
namespace __jni_impl::java::util::concurrent
{
	class TimeUnit;
}

namespace __jni_impl::java::nio::channels
{
	class AsynchronousChannelGroup : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject withCachedThreadPool(__jni_impl::__JniBaseClass arg0, jint arg1);
		static QAndroidJniObject withFixedThreadPool(jint arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject withThreadPool(__jni_impl::__JniBaseClass arg0);
		jboolean awaitTermination(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1);
		jboolean isShutdown();
		jboolean isTerminated();
		QAndroidJniObject provider();
		void shutdown();
		void shutdownNow();
	};
} // namespace __jni_impl::java::nio::channels

#include "spi/AsynchronousChannelProvider.hpp"
#include "../../util/concurrent/TimeUnit.hpp"

namespace __jni_impl::java::nio::channels
{
	// Fields
	
	// Constructors
	void AsynchronousChannelGroup::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.AsynchronousChannelGroup",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AsynchronousChannelGroup::withCachedThreadPool(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.AsynchronousChannelGroup",
			"withCachedThreadPool",
			"(Ljava/util/concurrent/ExecutorService;I)Ljava/nio/channels/AsynchronousChannelGroup;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject AsynchronousChannelGroup::withFixedThreadPool(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.AsynchronousChannelGroup",
			"withFixedThreadPool",
			"(ILjava/util/concurrent/ThreadFactory;)Ljava/nio/channels/AsynchronousChannelGroup;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject AsynchronousChannelGroup::withThreadPool(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.AsynchronousChannelGroup",
			"withThreadPool",
			"(Ljava/util/concurrent/ExecutorService;)Ljava/nio/channels/AsynchronousChannelGroup;",
			arg0.__jniObject().object()
		);
	}
	jboolean AsynchronousChannelGroup::awaitTermination(jlong arg0, __jni_impl::java::util::concurrent::TimeUnit arg1)
	{
		return __thiz.callMethod<jboolean>(
			"awaitTermination",
			"(JLjava/util/concurrent/TimeUnit;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean AsynchronousChannelGroup::isShutdown()
	{
		return __thiz.callMethod<jboolean>(
			"isShutdown",
			"()Z"
		);
	}
	jboolean AsynchronousChannelGroup::isTerminated()
	{
		return __thiz.callMethod<jboolean>(
			"isTerminated",
			"()Z"
		);
	}
	QAndroidJniObject AsynchronousChannelGroup::provider()
	{
		return __thiz.callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/AsynchronousChannelProvider;"
		);
	}
	void AsynchronousChannelGroup::shutdown()
	{
		__thiz.callMethod<void>(
			"shutdown",
			"()V"
		);
	}
	void AsynchronousChannelGroup::shutdownNow()
	{
		__thiz.callMethod<void>(
			"shutdownNow",
			"()V"
		);
	}
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class AsynchronousChannelGroup : public __jni_impl::java::nio::channels::AsynchronousChannelGroup
	{
	public:
		AsynchronousChannelGroup(QAndroidJniObject obj) { __thiz = obj; }
		AsynchronousChannelGroup()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

