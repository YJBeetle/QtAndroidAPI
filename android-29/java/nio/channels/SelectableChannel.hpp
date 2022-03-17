#pragma once

#include "../../../JObject.hpp"
#include "./SelectionKey.def.hpp"
#include "./Selector.def.hpp"
#include "./spi/SelectorProvider.def.hpp"
#include "./SelectableChannel.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject SelectableChannel::blockingLock() const
	{
		return callObjectMethod(
			"blockingLock",
			"()Ljava/lang/Object;"
		);
	}
	inline java::nio::channels::SelectableChannel SelectableChannel::configureBlocking(jboolean arg0) const
	{
		return callObjectMethod(
			"configureBlocking",
			"(Z)Ljava/nio/channels/SelectableChannel;",
			arg0
		);
	}
	inline jboolean SelectableChannel::isBlocking() const
	{
		return callMethod<jboolean>(
			"isBlocking",
			"()Z"
		);
	}
	inline jboolean SelectableChannel::isRegistered() const
	{
		return callMethod<jboolean>(
			"isRegistered",
			"()Z"
		);
	}
	inline java::nio::channels::SelectionKey SelectableChannel::keyFor(java::nio::channels::Selector arg0) const
	{
		return callObjectMethod(
			"keyFor",
			"(Ljava/nio/channels/Selector;)Ljava/nio/channels/SelectionKey;",
			arg0.object()
		);
	}
	inline java::nio::channels::spi::SelectorProvider SelectableChannel::provider() const
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/SelectorProvider;"
		);
	}
	inline java::nio::channels::SelectionKey SelectableChannel::register_(java::nio::channels::Selector arg0, jint arg1) const
	{
		return callObjectMethod(
			"register",
			"(Ljava/nio/channels/Selector;I)Ljava/nio/channels/SelectionKey;",
			arg0.object(),
			arg1
		);
	}
	inline java::nio::channels::SelectionKey SelectableChannel::register_(java::nio::channels::Selector arg0, jint arg1, JObject arg2) const
	{
		return callObjectMethod(
			"register",
			"(Ljava/nio/channels/Selector;ILjava/lang/Object;)Ljava/nio/channels/SelectionKey;",
			arg0.object(),
			arg1,
			arg2.object<jobject>()
		);
	}
	inline jint SelectableChannel::validOps() const
	{
		return callMethod<jint>(
			"validOps",
			"()I"
		);
	}
} // namespace java::nio::channels

// Base class headers
#include "./spi/AbstractInterruptibleChannel.hpp"

