#pragma once

#include "./SelectionKey.def.hpp"
#include "./spi/SelectorProvider.def.hpp"
#include "./Selector.def.hpp"

namespace java::nio::channels
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::nio::channels::Selector Selector::open()
	{
		return callStaticObjectMethod(
			"java.nio.channels.Selector",
			"open",
			"()Ljava/nio/channels/Selector;"
		);
	}
	inline void Selector::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jboolean Selector::isOpen() const
	{
		return callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	inline JObject Selector::keys() const
	{
		return callObjectMethod(
			"keys",
			"()Ljava/util/Set;"
		);
	}
	inline java::nio::channels::spi::SelectorProvider Selector::provider() const
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/channels/spi/SelectorProvider;"
		);
	}
	inline jint Selector::select() const
	{
		return callMethod<jint>(
			"select",
			"()I"
		);
	}
	inline jint Selector::select(JObject arg0) const
	{
		return callMethod<jint>(
			"select",
			"(Ljava/util/function/Consumer;)I",
			arg0.object()
		);
	}
	inline jint Selector::select(jlong arg0) const
	{
		return callMethod<jint>(
			"select",
			"(J)I",
			arg0
		);
	}
	inline jint Selector::select(JObject arg0, jlong arg1) const
	{
		return callMethod<jint>(
			"select",
			"(Ljava/util/function/Consumer;J)I",
			arg0.object(),
			arg1
		);
	}
	inline jint Selector::selectNow() const
	{
		return callMethod<jint>(
			"selectNow",
			"()I"
		);
	}
	inline jint Selector::selectNow(JObject arg0) const
	{
		return callMethod<jint>(
			"selectNow",
			"(Ljava/util/function/Consumer;)I",
			arg0.object()
		);
	}
	inline JObject Selector::selectedKeys() const
	{
		return callObjectMethod(
			"selectedKeys",
			"()Ljava/util/Set;"
		);
	}
	inline java::nio::channels::Selector Selector::wakeup() const
	{
		return callObjectMethod(
			"wakeup",
			"()Ljava/nio/channels/Selector;"
		);
	}
} // namespace java::nio::channels

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::channels;
#endif
