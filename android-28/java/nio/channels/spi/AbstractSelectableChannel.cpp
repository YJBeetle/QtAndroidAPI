#include "../../../../JArray.hpp"
#include "../../../../JObject.hpp"
#include "../SelectableChannel.hpp"
#include "../SelectionKey.hpp"
#include "../Selector.hpp"
#include "./SelectorProvider.hpp"
#include "./AbstractSelectableChannel.hpp"

namespace java::nio::channels::spi
{
	// Fields
	
	// QJniObject forward
	AbstractSelectableChannel::AbstractSelectableChannel(QJniObject obj) : java::nio::channels::SelectableChannel(obj) {}
	
	// Constructors
	
	// Methods
	JObject AbstractSelectableChannel::blockingLock() const
	{
		return callObjectMethod(
			"blockingLock",
			"()Ljava/lang/Object;"
		);
	}
	java::nio::channels::SelectableChannel AbstractSelectableChannel::configureBlocking(jboolean arg0) const
	{
		return callObjectMethod(
			"configureBlocking",
			"(Z)Ljava/nio/channels/SelectableChannel;",
			arg0
		);
	}
	jboolean AbstractSelectableChannel::isBlocking() const
	{
		return callMethod<jboolean>(
			"isBlocking",
			"()Z"
		);
	}
	jboolean AbstractSelectableChannel::isRegistered() const
	{
		return callMethod<jboolean>(
			"isRegistered",
			"()Z"
		);
	}
	java::nio::channels::SelectionKey AbstractSelectableChannel::keyFor(java::nio::channels::Selector arg0) const
	{
		return callObjectMethod(
			"keyFor",
			"(Ljava/nio/channels/Selector;)Ljava/nio/channels/SelectionKey;",
			arg0.object()
		);
	}
	java::nio::channels::spi::SelectorProvider AbstractSelectableChannel::provider() const
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/SelectorProvider;"
		);
	}
	java::nio::channels::SelectionKey AbstractSelectableChannel::_register(java::nio::channels::Selector arg0, jint arg1, JObject arg2) const
	{
		return callObjectMethod(
			"register",
			"(Ljava/nio/channels/Selector;ILjava/lang/Object;)Ljava/nio/channels/SelectionKey;",
			arg0.object(),
			arg1,
			arg2.object<jobject>()
		);
	}
} // namespace java::nio::channels::spi

