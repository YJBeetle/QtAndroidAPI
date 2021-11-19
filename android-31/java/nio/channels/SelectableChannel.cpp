#include "../../../JObject.hpp"
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
	JObject SelectableChannel::blockingLock() const
	{
		return callObjectMethod(
			"blockingLock",
			"()Ljava/lang/Object;"
		);
	}
	java::nio::channels::SelectableChannel SelectableChannel::configureBlocking(jboolean arg0) const
	{
		return callObjectMethod(
			"configureBlocking",
			"(Z)Ljava/nio/channels/SelectableChannel;",
			arg0
		);
	}
	jboolean SelectableChannel::isBlocking() const
	{
		return callMethod<jboolean>(
			"isBlocking",
			"()Z"
		);
	}
	jboolean SelectableChannel::isRegistered() const
	{
		return callMethod<jboolean>(
			"isRegistered",
			"()Z"
		);
	}
	java::nio::channels::SelectionKey SelectableChannel::keyFor(java::nio::channels::Selector arg0) const
	{
		return callObjectMethod(
			"keyFor",
			"(Ljava/nio/channels/Selector;)Ljava/nio/channels/SelectionKey;",
			arg0.object()
		);
	}
	java::nio::channels::spi::SelectorProvider SelectableChannel::provider() const
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/SelectorProvider;"
		);
	}
	java::nio::channels::SelectionKey SelectableChannel::register_(java::nio::channels::Selector arg0, jint arg1) const
	{
		return callObjectMethod(
			"register",
			"(Ljava/nio/channels/Selector;I)Ljava/nio/channels/SelectionKey;",
			arg0.object(),
			arg1
		);
	}
	java::nio::channels::SelectionKey SelectableChannel::register_(java::nio::channels::Selector arg0, jint arg1, JObject arg2) const
	{
		return callObjectMethod(
			"register",
			"(Ljava/nio/channels/Selector;ILjava/lang/Object;)Ljava/nio/channels/SelectionKey;",
			arg0.object(),
			arg1,
			arg2.object<jobject>()
		);
	}
	jint SelectableChannel::validOps() const
	{
		return callMethod<jint>(
			"validOps",
			"()I"
		);
	}
} // namespace java::nio::channels

