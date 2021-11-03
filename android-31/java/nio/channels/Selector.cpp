#include "./SelectionKey.hpp"
#include "./spi/SelectorProvider.hpp"
#include "./Selector.hpp"

namespace java::nio::channels
{
	// Fields
	
	// QJniObject forward
	Selector::Selector(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::channels::Selector Selector::open()
	{
		return callStaticObjectMethod(
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
	JObject Selector::keys()
	{
		return callObjectMethod(
			"keys",
			"()Ljava/util/Set;"
		);
	}
	java::nio::channels::spi::SelectorProvider Selector::provider()
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
	jint Selector::select(JObject arg0)
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
	jint Selector::select(JObject arg0, jlong arg1)
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
	jint Selector::selectNow(JObject arg0)
	{
		return callMethod<jint>(
			"selectNow",
			"(Ljava/util/function/Consumer;)I",
			arg0.object()
		);
	}
	JObject Selector::selectedKeys()
	{
		return callObjectMethod(
			"selectedKeys",
			"()Ljava/util/Set;"
		);
	}
	java::nio::channels::Selector Selector::wakeup()
	{
		return callObjectMethod(
			"wakeup",
			"()Ljava/nio/channels/Selector;"
		);
	}
} // namespace java::nio::channels

