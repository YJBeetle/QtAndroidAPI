#include "./SelectableChannel.hpp"
#include "./Selector.hpp"
#include "./SelectionKey.hpp"

namespace java::nio::channels
{
	// Fields
	jint SelectionKey::OP_ACCEPT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.nio.channels.SelectionKey",
			"OP_ACCEPT"
		);
	}
	jint SelectionKey::OP_CONNECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.nio.channels.SelectionKey",
			"OP_CONNECT"
		);
	}
	jint SelectionKey::OP_READ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.nio.channels.SelectionKey",
			"OP_READ"
		);
	}
	jint SelectionKey::OP_WRITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.nio.channels.SelectionKey",
			"OP_WRITE"
		);
	}
	
	SelectionKey::SelectionKey(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jobject SelectionKey::attach(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"attach",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject SelectionKey::attachment()
	{
		return __thiz.callObjectMethod(
			"attachment",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void SelectionKey::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	QAndroidJniObject SelectionKey::channel()
	{
		return __thiz.callObjectMethod(
			"channel",
			"()Ljava/nio/channels/SelectableChannel;"
		);
	}
	jint SelectionKey::interestOps()
	{
		return __thiz.callMethod<jint>(
			"interestOps",
			"()I"
		);
	}
	QAndroidJniObject SelectionKey::interestOps(jint arg0)
	{
		return __thiz.callObjectMethod(
			"interestOps",
			"(I)Ljava/nio/channels/SelectionKey;",
			arg0
		);
	}
	jint SelectionKey::interestOpsAnd(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"interestOpsAnd",
			"(I)I",
			arg0
		);
	}
	jint SelectionKey::interestOpsOr(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"interestOpsOr",
			"(I)I",
			arg0
		);
	}
	jboolean SelectionKey::isAcceptable()
	{
		return __thiz.callMethod<jboolean>(
			"isAcceptable",
			"()Z"
		);
	}
	jboolean SelectionKey::isConnectable()
	{
		return __thiz.callMethod<jboolean>(
			"isConnectable",
			"()Z"
		);
	}
	jboolean SelectionKey::isReadable()
	{
		return __thiz.callMethod<jboolean>(
			"isReadable",
			"()Z"
		);
	}
	jboolean SelectionKey::isValid()
	{
		return __thiz.callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	jboolean SelectionKey::isWritable()
	{
		return __thiz.callMethod<jboolean>(
			"isWritable",
			"()Z"
		);
	}
	jint SelectionKey::readyOps()
	{
		return __thiz.callMethod<jint>(
			"readyOps",
			"()I"
		);
	}
	QAndroidJniObject SelectionKey::selector()
	{
		return __thiz.callObjectMethod(
			"selector",
			"()Ljava/nio/channels/Selector;"
		);
	}
} // namespace java::nio::channels

