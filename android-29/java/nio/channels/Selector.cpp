#include "./SelectionKey.hpp"
#include "./spi/SelectorProvider.hpp"
#include "./Selector.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QAndroidJniObject forward
	Selector::Selector(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean Selector::isOpen()
	{
		return callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	QAndroidJniObject Selector::keys()
	{
		return callObjectMethod(
			"keys",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject Selector::provider()
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/SelectorProvider;"
		);
	}
	jint Selector::select()
	{
		return callMethod<jint>(
			"select",
			"()I"
		);
	}
	jint Selector::select(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"select",
			"(Ljava/util/function/Consumer;)I",
			arg0.object()
		);
	}
	jint Selector::select(jlong arg0)
	{
		return callMethod<jint>(
			"select",
			"(J)I",
			arg0
		);
	}
	jint Selector::select(__JniBaseClass arg0, jlong arg1)
	{
		return callMethod<jint>(
			"select",
			"(Ljava/util/function/Consumer;J)I",
			arg0.object(),
			arg1
		);
	}
	jint Selector::selectNow()
	{
		return callMethod<jint>(
			"selectNow",
			"()I"
		);
	}
	jint Selector::selectNow(__JniBaseClass arg0)
	{
		return callMethod<jint>(
			"selectNow",
			"(Ljava/util/function/Consumer;)I",
			arg0.object()
		);
	}
	QAndroidJniObject Selector::selectedKeys()
	{
		return callObjectMethod(
			"selectedKeys",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject Selector::wakeup()
	{
		return callObjectMethod(
			"wakeup",
			"()Ljava/nio/channels/Selector;"
		);
	}
} // namespace java::nio::channels

