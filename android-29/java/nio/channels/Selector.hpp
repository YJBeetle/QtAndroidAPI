#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio::channels
{
	class SelectionKey;
}
namespace __jni_impl::java::nio::channels::spi
{
	class SelectorProvider;
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
		static QAndroidJniObject open();
		void close();
		jboolean isOpen();
		QAndroidJniObject keys();
		QAndroidJniObject provider();
		jint select();
		jint select(__jni_impl::__JniBaseClass arg0);
		jint select(jlong arg0);
		jint select(__jni_impl::__JniBaseClass arg0, jlong arg1);
		jint selectNow();
		jint selectNow(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject selectedKeys();
		QAndroidJniObject wakeup();
	};
} // namespace __jni_impl::java::nio::channels

#include "./SelectionKey.hpp"
#include "./spi/SelectorProvider.hpp"

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
	QAndroidJniObject Selector::open()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.channels.Selector",
			"open",
			"()Ljava/nio/channels/Selector;"
		);
	}
	void Selector::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean Selector::isOpen()
	{
		return __thiz.callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	QAndroidJniObject Selector::keys()
	{
		return __thiz.callObjectMethod(
			"keys",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject Selector::provider()
	{
		return __thiz.callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/SelectorProvider;"
		);
	}
	jint Selector::select()
	{
		return __thiz.callMethod<jint>(
			"select",
			"()I"
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
	jint Selector::select(jlong arg0)
	{
		return __thiz.callMethod<jint>(
			"select",
			"(J)I",
			arg0
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
	jint Selector::selectNow()
	{
		return __thiz.callMethod<jint>(
			"selectNow",
			"()I"
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
	QAndroidJniObject Selector::selectedKeys()
	{
		return __thiz.callObjectMethod(
			"selectedKeys",
			"()Ljava/util/Set;"
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

