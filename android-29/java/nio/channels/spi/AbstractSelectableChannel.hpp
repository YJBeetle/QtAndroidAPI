#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "AbstractInterruptibleChannel.hpp"
#include "../SelectableChannel.hpp"

namespace __jni_impl::java::nio::channels
{
	class SelectableChannel;
}
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

namespace __jni_impl::java::nio::channels::spi
{
	class AbstractSelectableChannel : public __jni_impl::java::nio::channels::SelectableChannel
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jobject blockingLock();
		QAndroidJniObject configureBlocking(jboolean arg0);
		jboolean isBlocking();
		jboolean isRegistered();
		QAndroidJniObject keyFor(__jni_impl::java::nio::channels::Selector arg0);
		QAndroidJniObject provider();
		QAndroidJniObject _register(__jni_impl::java::nio::channels::Selector arg0, jint arg1, jobject arg2);
	};
} // namespace __jni_impl::java::nio::channels::spi

#include "../SelectableChannel.hpp"
#include "../SelectionKey.hpp"
#include "../Selector.hpp"
#include "SelectorProvider.hpp"

namespace __jni_impl::java::nio::channels::spi
{
	// Fields
	
	// Constructors
	void AbstractSelectableChannel::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.spi.AbstractSelectableChannel",
			"(V)V");
	}
	
	// Methods
	jobject AbstractSelectableChannel::blockingLock()
	{
		return __thiz.callObjectMethod(
			"blockingLock",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject AbstractSelectableChannel::configureBlocking(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"configureBlocking",
			"(Z)Ljava/nio/channels/SelectableChannel;",
			arg0
		);
	}
	jboolean AbstractSelectableChannel::isBlocking()
	{
		return __thiz.callMethod<jboolean>(
			"isBlocking",
			"()Z"
		);
	}
	jboolean AbstractSelectableChannel::isRegistered()
	{
		return __thiz.callMethod<jboolean>(
			"isRegistered",
			"()Z"
		);
	}
	QAndroidJniObject AbstractSelectableChannel::keyFor(__jni_impl::java::nio::channels::Selector arg0)
	{
		return __thiz.callObjectMethod(
			"keyFor",
			"(Ljava/nio/channels/Selector;)Ljava/nio/channels/SelectionKey;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AbstractSelectableChannel::provider()
	{
		return __thiz.callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/SelectorProvider;"
		);
	}
	QAndroidJniObject AbstractSelectableChannel::_register(__jni_impl::java::nio::channels::Selector arg0, jint arg1, jobject arg2)
	{
		return __thiz.callObjectMethod(
			"register",
			"(Ljava/nio/channels/Selector;ILjava/lang/Object;)Ljava/nio/channels/SelectionKey;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::java::nio::channels::spi

namespace java::nio::channels::spi
{
	class AbstractSelectableChannel : public __jni_impl::java::nio::channels::spi::AbstractSelectableChannel
	{
	public:
		AbstractSelectableChannel(QAndroidJniObject obj) { __thiz = obj; }
		AbstractSelectableChannel()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels::spi

