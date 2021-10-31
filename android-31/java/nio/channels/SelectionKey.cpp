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
	
	// QAndroidJniObject forward
	SelectionKey::SelectionKey(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jobject SelectionKey::attach(jobject arg0)
	{
		return callObjectMethod(
			"attach",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject SelectionKey::attachment()
	{
		return callObjectMethod(
			"attachment",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void SelectionKey::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	java::nio::channels::SelectableChannel SelectionKey::channel()
	{
		return callObjectMethod(
			"channel",
			"()Ljava/nio/channels/SelectableChannel;"
		);
	}
	jint SelectionKey::interestOps()
	{
		return callMethod<jint>(
			"interestOps",
			"()I"
		);
	}
	java::nio::channels::SelectionKey SelectionKey::interestOps(jint arg0)
	{
		return callObjectMethod(
			"interestOps",
			"(I)Ljava/nio/channels/SelectionKey;",
			arg0
		);
	}
	jint SelectionKey::interestOpsAnd(jint arg0)
	{
		return callMethod<jint>(
			"interestOpsAnd",
			"(I)I",
			arg0
		);
	}
	jint SelectionKey::interestOpsOr(jint arg0)
	{
		return callMethod<jint>(
			"interestOpsOr",
			"(I)I",
			arg0
		);
	}
	jboolean SelectionKey::isAcceptable()
	{
		return callMethod<jboolean>(
			"isAcceptable",
			"()Z"
		);
	}
	jboolean SelectionKey::isConnectable()
	{
		return callMethod<jboolean>(
			"isConnectable",
			"()Z"
		);
	}
	jboolean SelectionKey::isReadable()
	{
		return callMethod<jboolean>(
			"isReadable",
			"()Z"
		);
	}
	jboolean SelectionKey::isValid()
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	jboolean SelectionKey::isWritable()
	{
		return callMethod<jboolean>(
			"isWritable",
			"()Z"
		);
	}
	jint SelectionKey::readyOps()
	{
		return callMethod<jint>(
			"readyOps",
			"()I"
		);
	}
	java::nio::channels::Selector SelectionKey::selector()
	{
		return callObjectMethod(
			"selector",
			"()Ljava/nio/channels/Selector;"
		);
	}
} // namespace java::nio::channels

