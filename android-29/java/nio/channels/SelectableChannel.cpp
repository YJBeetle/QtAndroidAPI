#include "./SelectionKey.hpp"
#include "./Selector.hpp"
#include "./spi/SelectorProvider.hpp"
#include "./SelectableChannel.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	SelectableChannel::SelectableChannel(QJniObject obj) : java::nio::channels::spi::AbstractInterruptibleChannel(obj) {}
	
	// Constructors
	
	// Methods
	jobject SelectableChannel::blockingLock()
	{
		return callObjectMethod(
			"blockingLock",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	java::nio::channels::SelectableChannel SelectableChannel::configureBlocking(jboolean arg0)
	{
		return callObjectMethod(
			"configureBlocking",
			"(Z)Ljava/nio/channels/SelectableChannel;",
			arg0
		);
	}
	jboolean SelectableChannel::isBlocking()
	{
		return callMethod<jboolean>(
			"isBlocking",
			"()Z"
		);
	}
	jboolean SelectableChannel::isRegistered()
	{
		return callMethod<jboolean>(
			"isRegistered",
			"()Z"
		);
	}
	java::nio::channels::SelectionKey SelectableChannel::keyFor(java::nio::channels::Selector arg0)
	{
		return callObjectMethod(
			"keyFor",
			"(Ljava/nio/channels/Selector;)Ljava/nio/channels/SelectionKey;",
			arg0.object()
		);
	}
	java::nio::channels::spi::SelectorProvider SelectableChannel::provider()
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/SelectorProvider;"
		);
	}
	java::nio::channels::SelectionKey SelectableChannel::_register(java::nio::channels::Selector arg0, jint arg1)
	{
		return callObjectMethod(
			"register",
			"(Ljava/nio/channels/Selector;I)Ljava/nio/channels/SelectionKey;",
			arg0.object(),
			arg1
		);
	}
	java::nio::channels::SelectionKey SelectableChannel::_register(java::nio::channels::Selector arg0, jint arg1, jobject arg2)
	{
		return callObjectMethod(
			"register",
			"(Ljava/nio/channels/Selector;ILjava/lang/Object;)Ljava/nio/channels/SelectionKey;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jint SelectableChannel::validOps()
	{
		return callMethod<jint>(
			"validOps",
			"()I"
		);
	}
} // namespace java::nio::channels

