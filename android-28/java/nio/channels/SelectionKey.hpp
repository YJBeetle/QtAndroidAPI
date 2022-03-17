#pragma once

#include "../../../JObject.hpp"
#include "./SelectableChannel.def.hpp"
#include "./Selector.def.hpp"
#include "./SelectionKey.def.hpp"

namespace java::nio::channels
{
	// Fields
	inline jint SelectionKey::OP_ACCEPT()
	{
		return getStaticField<jint>(
			"java.nio.channels.SelectionKey",
			"OP_ACCEPT"
		);
	}
	inline jint SelectionKey::OP_CONNECT()
	{
		return getStaticField<jint>(
			"java.nio.channels.SelectionKey",
			"OP_CONNECT"
		);
	}
	inline jint SelectionKey::OP_READ()
	{
		return getStaticField<jint>(
			"java.nio.channels.SelectionKey",
			"OP_READ"
		);
	}
	inline jint SelectionKey::OP_WRITE()
	{
		return getStaticField<jint>(
			"java.nio.channels.SelectionKey",
			"OP_WRITE"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject SelectionKey::attach(JObject arg0) const
	{
		return callObjectMethod(
			"attach",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline JObject SelectionKey::attachment() const
	{
		return callObjectMethod(
			"attachment",
			"()Ljava/lang/Object;"
		);
	}
	inline void SelectionKey::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline java::nio::channels::SelectableChannel SelectionKey::channel() const
	{
		return callObjectMethod(
			"channel",
			"()Ljava/nio/channels/SelectableChannel;"
		);
	}
	inline jint SelectionKey::interestOps() const
	{
		return callMethod<jint>(
			"interestOps",
			"()I"
		);
	}
	inline java::nio::channels::SelectionKey SelectionKey::interestOps(jint arg0) const
	{
		return callObjectMethod(
			"interestOps",
			"(I)Ljava/nio/channels/SelectionKey;",
			arg0
		);
	}
	inline jint SelectionKey::interestOpsAnd(jint arg0) const
	{
		return callMethod<jint>(
			"interestOpsAnd",
			"(I)I",
			arg0
		);
	}
	inline jint SelectionKey::interestOpsOr(jint arg0) const
	{
		return callMethod<jint>(
			"interestOpsOr",
			"(I)I",
			arg0
		);
	}
	inline jboolean SelectionKey::isAcceptable() const
	{
		return callMethod<jboolean>(
			"isAcceptable",
			"()Z"
		);
	}
	inline jboolean SelectionKey::isConnectable() const
	{
		return callMethod<jboolean>(
			"isConnectable",
			"()Z"
		);
	}
	inline jboolean SelectionKey::isReadable() const
	{
		return callMethod<jboolean>(
			"isReadable",
			"()Z"
		);
	}
	inline jboolean SelectionKey::isValid() const
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	inline jboolean SelectionKey::isWritable() const
	{
		return callMethod<jboolean>(
			"isWritable",
			"()Z"
		);
	}
	inline jint SelectionKey::readyOps() const
	{
		return callMethod<jint>(
			"readyOps",
			"()I"
		);
	}
	inline java::nio::channels::Selector SelectionKey::selector() const
	{
		return callObjectMethod(
			"selector",
			"()Ljava/nio/channels/Selector;"
		);
	}
} // namespace java::nio::channels

// Base class headers

