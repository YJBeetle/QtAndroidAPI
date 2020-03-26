#pragma once

#ifndef JAVA_NIO_CHANNELS_SELECTOR
#define JAVA_NIO_CHANNELS_SELECTOR

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio::channels::spi
{
	class SelectorProvider;
}
namespace __jni_impl::java::nio::channels
{
	class SelectionKey;
}

namespace __jni_impl::java::nio::channels
{
	class Selector : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean isOpen();
		QAndroidJniObject provider();
		void close();
		QAndroidJniObject keys();
		static QAndroidJniObject open();
		jint select(__jni_impl::__JniBaseClass arg0, jlong arg1);
		jint select(__jni_impl::__JniBaseClass arg0);
		jint select();
		jint select(jlong arg0);
		QAndroidJniObject selectedKeys();
		jint selectNow(__jni_impl::__JniBaseClass arg0);
		jint selectNow();
		QAndroidJniObject wakeup();
	};
} // namespace __jni_impl::java::nio::channels

#include "spi/SelectorProvider.hpp"
#include "SelectionKey.hpp"

namespace __jni_impl::java::nio::channels
{
	// Fields
	
	// Constructors
	void Selector::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.channels.Selector",
			"(V)V");
	}
	
	// Methods
	jboolean Selector::isOpen()
	{
		return __thiz.callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	QAndroidJniObject Selector::provider()
	{
		return __thiz.callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/SelectorProvider;"
		);
	}
	void Selector::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject Selector::keys()
	{
		return __thiz.callObjectMethod(
			"keys",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject Selector::open()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.Selector",
			"open",
			"()Ljava/nio/channels/Selector;"
		);
	}
	jint Selector::select(__jni_impl::__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callMethod<jint>(
			"select",
			"(Ljava/util/function/Consumer;J)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint Selector::select(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"select",
			"(Ljava/util/function/Consumer;)I",
			arg0.__jniObject().object()
		);
	}
	jint Selector::select()
	{
		return __thiz.callMethod<jint>(
			"select",
			"()I"
		);
	}
	jint Selector::select(jlong arg0)
	{
		return __thiz.callMethod<jint>(
			"select",
			"(J)I",
			arg0
		);
	}
	QAndroidJniObject Selector::selectedKeys()
	{
		return __thiz.callObjectMethod(
			"selectedKeys",
			"()Ljava/util/Set;"
		);
	}
	jint Selector::selectNow(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jint>(
			"selectNow",
			"(Ljava/util/function/Consumer;)I",
			arg0.__jniObject().object()
		);
	}
	jint Selector::selectNow()
	{
		return __thiz.callMethod<jint>(
			"selectNow",
			"()I"
		);
	}
	QAndroidJniObject Selector::wakeup()
	{
		return __thiz.callObjectMethod(
			"wakeup",
			"()Ljava/nio/channels/Selector;"
		);
	}
} // namespace __jni_impl::java::nio::channels

namespace java::nio::channels
{
	class Selector : public __jni_impl::java::nio::channels::Selector
	{
	public:
		Selector(QAndroidJniObject obj) { __thiz = obj; }
		Selector()
		{
			__constructor();
		}
	};
} // namespace java::nio::channels

#endif // JAVA_NIO_CHANNELS_SELECTOR

