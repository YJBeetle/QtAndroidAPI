#pragma once

#ifndef JAVA_NIO_CHANNELS_SELECTIONKEY
#define JAVA_NIO_CHANNELS_SELECTIONKEY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicReferenceFieldUpdater;
}
namespace __jni_impl::java::nio::channels
{
	class SelectableChannel;
}
namespace __jni_impl::java::nio::channels
{
	class Selector;
}

namespace __jni_impl::java::nio::channels
{
	class SelectionKey : public __JniBaseClass
	{
	public:
		// Fields
		static jint OP_READ();
		static jint OP_WRITE();
		static jint OP_CONNECT();
		static jint OP_ACCEPT();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject attachment();
		QAndroidJniObject attach(jobject arg0);
		QAndroidJniObject channel();
		jboolean isReadable();
		jboolean isWritable();
		QAndroidJniObject selector();
		void cancel();
		jboolean isValid();
		jint interestOps();
		QAndroidJniObject interestOps(jint arg0);
		jint readyOps();
		jint interestOpsOr(jint arg0);
		jint interestOpsAnd(jint arg0);
		jboolean isAcceptable();
		jboolean isConnectable();
	};
} // namespace __jni_impl::java::nio::channels

#include "../../util/concurrent/atomic/AtomicReferenceFieldUpdater.hpp"
#include "SelectableChannel.hpp"
#include "Selector.hpp"

namespace __jni_impl::java::nio::channels
{
	// Fields
	jint SelectionKey::OP_READ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.nio.channels.SelectionKey",
			"OP_READ");
	}
	jint SelectionKey::OP_WRITE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.nio.channels.SelectionKey",
			"OP_WRITE");
	}
	jint SelectionKey::OP_CONNECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.nio.channels.SelectionKey",
			"OP_CONNECT");
	}
	jint SelectionKey::OP_ACCEPT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.nio.channels.SelectionKey",
			"OP_ACCEPT");
	}
	
	// Constructors
	void SelectionKey::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.SelectionKey",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SelectionKey::attachment()
	{
		return __thiz.callObjectMethod(
			"attachment",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject SelectionKey::attach(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"attach",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject SelectionKey::channel()
	{
		return __thiz.callObjectMethod(
			"channel",
			"()Ljava/nio/channels/SelectableChannel;");
	}
	jboolean SelectionKey::isReadable()
	{
		return __thiz.callMethod<jboolean>(
			"isReadable",
			"()Z");
	}
	jboolean SelectionKey::isWritable()
	{
		return __thiz.callMethod<jboolean>(
			"isWritable",
			"()Z");
	}
	QAndroidJniObject SelectionKey::selector()
	{
		return __thiz.callObjectMethod(
			"selector",
			"()Ljava/nio/channels/Selector;");
	}
	void SelectionKey::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V");
	}
	jboolean SelectionKey::isValid()
	{
		return __thiz.callMethod<jboolean>(
			"isValid",
			"()Z");
	}
	jint SelectionKey::interestOps()
	{
		return __thiz.callMethod<jint>(
			"interestOps",
			"()I");
	}
	QAndroidJniObject SelectionKey::interestOps(jint arg0)
	{
		return __thiz.callObjectMethod(
			"interestOps",
			"(I)Ljava/nio/channels/SelectionKey;",
			arg0);
	}
	jint SelectionKey::readyOps()
	{
		return __thiz.callMethod<jint>(
			"readyOps",
			"()I");
	}
	jint SelectionKey::interestOpsOr(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"interestOpsOr",
			"(I)I",
			arg0);
	}
	jint SelectionKey::interestOpsAnd(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"interestOpsAnd",
			"(I)I",
			arg0);
	}
	jboolean SelectionKey::isAcceptable()
	{
		return __thiz.callMethod<jboolean>(
			"isAcceptable",
			"()Z");
	}
	jboolean SelectionKey::isConnectable()
	{
		return __thiz.callMethod<jboolean>(
			"isConnectable",
			"()Z");
	}
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class SelectionKey : public __jni_impl::java::nio::channels::SelectionKey
	{
	public:
		SelectionKey(QAndroidJniObject obj) { __thiz = obj; }
		SelectionKey()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_SELECTIONKEY

