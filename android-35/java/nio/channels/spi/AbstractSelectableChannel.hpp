#pragma once

#include "../../../../JArray.hpp"
#include "../../../../JObject.hpp"
#include "../SelectableChannel.def.hpp"
#include "../SelectionKey.def.hpp"
#include "../Selector.def.hpp"
#include "./SelectorProvider.def.hpp"
#include "./AbstractSelectableChannel.def.hpp"

namespace java::nio::channels::spi
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject AbstractSelectableChannel::blockingLock() const
	{
		return callObjectMethod(
			"blockingLock",
			"()Ljava/lang/Object;"
		);
	}
	inline java::nio::channels::SelectableChannel AbstractSelectableChannel::configureBlocking(jboolean arg0) const
	{
		return callObjectMethod(
			"configureBlocking",
			"(Z)Ljava/nio/channels/SelectableChannel;",
			arg0
		);
	}
	inline jboolean AbstractSelectableChannel::isBlocking() const
	{
		return callMethod<jboolean>(
			"isBlocking",
			"()Z"
		);
	}
	inline jboolean AbstractSelectableChannel::isRegistered() const
	{
		return callMethod<jboolean>(
			"isRegistered",
			"()Z"
		);
	}
	inline java::nio::channels::SelectionKey AbstractSelectableChannel::keyFor(java::nio::channels::Selector arg0) const
	{
		return callObjectMethod(
			"keyFor",
			"(Ljava/nio/channels/Selector;)Ljava/nio/channels/SelectionKey;",
			arg0.object()
		);
	}
	inline java::nio::channels::spi::SelectorProvider AbstractSelectableChannel::provider() const
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/SelectorProvider;"
		);
	}
	inline java::nio::channels::SelectionKey AbstractSelectableChannel::register_(java::nio::channels::Selector arg0, jint arg1, JObject arg2) const
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

// Base class headers
#include "./AbstractInterruptibleChannel.hpp"
#include "../SelectableChannel.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::channels::spi;
#endif
