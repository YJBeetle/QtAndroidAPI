#include "../SelectableChannel.hpp"
#include "../SelectionKey.hpp"
#include "../Selector.hpp"
#include "./SelectorProvider.hpp"
#include "./AbstractSelectableChannel.hpp"

namespace java::nio::channels::spi
{
	// Fields
	
	AbstractSelectableChannel::AbstractSelectableChannel(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
	QAndroidJniObject AbstractSelectableChannel::keyFor(java::nio::channels::Selector arg0)
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
	QAndroidJniObject AbstractSelectableChannel::_register(java::nio::channels::Selector arg0, jint arg1, jobject arg2)
	{
		return __thiz.callObjectMethod(
			"register",
			"(Ljava/nio/channels/Selector;ILjava/lang/Object;)Ljava/nio/channels/SelectionKey;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace java::nio::channels::spi

