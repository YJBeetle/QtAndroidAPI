#pragma once

#include "../../../__JniBaseClass.hpp"

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
		static jint OP_ACCEPT();
		static jint OP_CONNECT();
		static jint OP_READ();
		static jint OP_WRITE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jobject attach(jobject arg0);
		jobject attachment();
		void cancel();
		QAndroidJniObject channel();
		jint interestOps();
		QAndroidJniObject interestOps(jint arg0);
		jint interestOpsAnd(jint arg0);
		jint interestOpsOr(jint arg0);
		jboolean isAcceptable();
		jboolean isConnectable();
		jboolean isReadable();
		jboolean isValid();
		jboolean isWritable();
		jint readyOps();
		QAndroidJniObject selector();
	};
} // namespace __jni_impl::java::nio::channels

#include "SelectableChannel.hpp"
#include "Selector.hpp"

namespace __jni_impl::java::nio::channels
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
	
	// Constructors
	void SelectionKey::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.SelectionKey",
			"(V)V");
	}
	
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

