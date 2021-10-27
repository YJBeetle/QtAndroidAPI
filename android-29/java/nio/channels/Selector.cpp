#include "./SelectionKey.hpp"
#include "./spi/SelectorProvider.hpp"
#include "./Selector.hpp"

namespace java::nio::channels
{
	// Fields
	
	Selector::Selector(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
	jint Selector::select(__JniBaseClass arg0)
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
	jint Selector::select(__JniBaseClass arg0, jlong arg1)
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
	jint Selector::selectNow(__JniBaseClass arg0)
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
} // namespace java::nio::channels

