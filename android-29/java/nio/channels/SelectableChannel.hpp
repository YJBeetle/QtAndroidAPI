#pragma once

#ifndef JAVA_NIO_CHANNELS_SELECTABLECHANNEL
#define JAVA_NIO_CHANNELS_SELECTABLECHANNEL

#include "../../../__JniBaseClass.hpp"
#include "spi/AbstractInterruptibleChannel.hpp"

namespace __jni_impl::java::nio::channels
{
	class SelectionKey;
}
namespace __jni_impl::java::nio::channels
{
	class Selector;
}
namespace __jni_impl::java::nio::channels::spi
{
	class SelectorProvider;
}

namespace __jni_impl::java::nio::channels
{
	class SelectableChannel : public __jni_impl::java::nio::channels::spi::AbstractInterruptibleChannel
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean isRegistered();
		QAndroidJniObject _register(__jni_impl::java::nio::channels::Selector arg0, jint arg1);
		QAndroidJniObject _register(__jni_impl::java::nio::channels::Selector arg0, jint arg1, jobject arg2);
		QAndroidJniObject provider();
		QAndroidJniObject keyFor(__jni_impl::java::nio::channels::Selector arg0);
		jint validOps();
		jobject blockingLock();
		QAndroidJniObject configureBlocking(jboolean arg0);
		jboolean isBlocking();
	};
} // namespace __jni_impl::java::nio::channels

#include "SelectionKey.hpp"
#include "Selector.hpp"
#include "spi/SelectorProvider.hpp"

namespace __jni_impl::java::nio::channels
{
	// Fields
	
	// Constructors
	void SelectableChannel::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.SelectableChannel",
			"(V)V");
	}
	
	// Methods
	jboolean SelectableChannel::isRegistered()
	{
		return __thiz.callMethod<jboolean>(
			"isRegistered",
			"()Z"
		);
	}
	QAndroidJniObject SelectableChannel::_register(__jni_impl::java::nio::channels::Selector arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"register",
			"(Ljava/nio/channels/Selector;I)Ljava/nio/channels/SelectionKey;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject SelectableChannel::_register(__jni_impl::java::nio::channels::Selector arg0, jint arg1, jobject arg2)
	{
		return __thiz.callObjectMethod(
			"register",
			"(Ljava/nio/channels/Selector;ILjava/lang/Object;)Ljava/nio/channels/SelectionKey;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject SelectableChannel::provider()
	{
		return __thiz.callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/SelectorProvider;"
		);
	}
	QAndroidJniObject SelectableChannel::keyFor(__jni_impl::java::nio::channels::Selector arg0)
	{
		return __thiz.callObjectMethod(
			"keyFor",
			"(Ljava/nio/channels/Selector;)Ljava/nio/channels/SelectionKey;",
			arg0.__jniObject().object()
		);
	}
	jint SelectableChannel::validOps()
	{
		return __thiz.callMethod<jint>(
			"validOps",
			"()I"
		);
	}
	jobject SelectableChannel::blockingLock()
	{
		return __thiz.callObjectMethod(
			"blockingLock",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject SelectableChannel::configureBlocking(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"configureBlocking",
			"(Z)Ljava/nio/channels/SelectableChannel;",
			arg0
		);
	}
	jboolean SelectableChannel::isBlocking()
	{
		return __thiz.callMethod<jboolean>(
			"isBlocking",
			"()Z"
		);
	}
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class SelectableChannel : public __jni_impl::java::nio::channels::SelectableChannel
	{
	public:
		SelectableChannel(QAndroidJniObject obj) { __thiz = obj; }
		SelectableChannel()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_SELECTABLECHANNEL

