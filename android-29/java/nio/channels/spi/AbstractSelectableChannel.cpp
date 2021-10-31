#include "../SelectableChannel.hpp"
#include "../SelectionKey.hpp"
#include "../Selector.hpp"
#include "./SelectorProvider.hpp"
#include "./AbstractSelectableChannel.hpp"

namespace java::nio::channels::spi
{
	// Fields
	
	// QAndroidJniObject forward
	AbstractSelectableChannel::AbstractSelectableChannel(QAndroidJniObject obj) : java::nio::channels::SelectableChannel(obj) {}
	
	// Constructors
	
	// Methods
	jobject AbstractSelectableChannel::blockingLock()
	{
		return callObjectMethod(
			"blockingLock",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject AbstractSelectableChannel::configureBlocking(jboolean arg0)
	{
		return callObjectMethod(
			"configureBlocking",
			"(Z)Ljava/nio/channels/SelectableChannel;",
			arg0
		);
	}
	jboolean AbstractSelectableChannel::isBlocking()
	{
		return callMethod<jboolean>(
			"isBlocking",
			"()Z"
		);
	}
	jboolean AbstractSelectableChannel::isRegistered()
	{
		return callMethod<jboolean>(
			"isRegistered",
			"()Z"
		);
	}
	QAndroidJniObject AbstractSelectableChannel::keyFor(java::nio::channels::Selector arg0)
	{
		return callObjectMethod(
			"keyFor",
			"(Ljava/nio/channels/Selector;)Ljava/nio/channels/SelectionKey;",
			arg0.object()
		);
	}
	QAndroidJniObject AbstractSelectableChannel::provider()
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/SelectorProvider;"
		);
	}
	QAndroidJniObject AbstractSelectableChannel::_register(java::nio::channels::Selector arg0, jint arg1, jobject arg2)
	{
		return callObjectMethod(
			"register",
			"(Ljava/nio/channels/Selector;ILjava/lang/Object;)Ljava/nio/channels/SelectionKey;",
			arg0.object(),
			arg1,
			arg2
		);
	}
} // namespace java::nio::channels::spi

