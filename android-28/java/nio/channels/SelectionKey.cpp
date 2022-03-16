#include "../../../JObject.hpp"
#include "./SelectableChannel.hpp"
#include "./Selector.hpp"
#include "./SelectionKey.hpp"

namespace java::nio::channels
{
	// Fields
	jint SelectionKey::OP_ACCEPT()
	{
		return getStaticField<jint>(
			"java.nio.channels.SelectionKey",
			"OP_ACCEPT"
		);
	}
	jint SelectionKey::OP_CONNECT()
	{
		return getStaticField<jint>(
			"java.nio.channels.SelectionKey",
			"OP_CONNECT"
		);
	}
	jint SelectionKey::OP_READ()
	{
		return getStaticField<jint>(
			"java.nio.channels.SelectionKey",
			"OP_READ"
		);
	}
	jint SelectionKey::OP_WRITE()
	{
		return getStaticField<jint>(
			"java.nio.channels.SelectionKey",
			"OP_WRITE"
		);
	}
	
	// Constructors
	
	// Methods
	JObject SelectionKey::attach(JObject arg0) const
	{
		return callObjectMethod(
			"attach",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	JObject SelectionKey::attachment() const
	{
		return callObjectMethod(
			"attachment",
			"()Ljava/lang/Object;"
		);
	}
	void SelectionKey::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	java::nio::channels::SelectableChannel SelectionKey::channel() const
	{
		return callObjectMethod(
			"channel",
			"()Ljava/nio/channels/SelectableChannel;"
		);
	}
	jint SelectionKey::interestOps() const
	{
		return callMethod<jint>(
			"interestOps",
			"()I"
		);
	}
	java::nio::channels::SelectionKey SelectionKey::interestOps(jint arg0) const
	{
		return callObjectMethod(
			"interestOps",
			"(I)Ljava/nio/channels/SelectionKey;",
			arg0
		);
	}
	jint SelectionKey::interestOpsAnd(jint arg0) const
	{
		return callMethod<jint>(
			"interestOpsAnd",
			"(I)I",
			arg0
		);
	}
	jint SelectionKey::interestOpsOr(jint arg0) const
	{
		return callMethod<jint>(
			"interestOpsOr",
			"(I)I",
			arg0
		);
	}
	jboolean SelectionKey::isAcceptable() const
	{
		return callMethod<jboolean>(
			"isAcceptable",
			"()Z"
		);
	}
	jboolean SelectionKey::isConnectable() const
	{
		return callMethod<jboolean>(
			"isConnectable",
			"()Z"
		);
	}
	jboolean SelectionKey::isReadable() const
	{
		return callMethod<jboolean>(
			"isReadable",
			"()Z"
		);
	}
	jboolean SelectionKey::isValid() const
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	jboolean SelectionKey::isWritable() const
	{
		return callMethod<jboolean>(
			"isWritable",
			"()Z"
		);
	}
	jint SelectionKey::readyOps() const
	{
		return callMethod<jint>(
			"readyOps",
			"()I"
		);
	}
	java::nio::channels::Selector SelectionKey::selector() const
	{
		return callObjectMethod(
			"selector",
			"()Ljava/nio/channels/Selector;"
		);
	}
} // namespace java::nio::channels

