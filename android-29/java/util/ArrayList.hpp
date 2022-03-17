#pragma once

#include "../../JLongArray.hpp"
#include "../../JObjectArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ArrayList.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline ArrayList::ArrayList()
		: java::util::AbstractList(
			"java.util.ArrayList",
			"()V"
		) {}
	inline ArrayList::ArrayList(jint arg0)
		: java::util::AbstractList(
			"java.util.ArrayList",
			"(I)V",
			arg0
		) {}
	inline ArrayList::ArrayList(JObject arg0)
		: java::util::AbstractList(
			"java.util.ArrayList",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean ArrayList::add(JObject arg0) const
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void ArrayList::add(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"add",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline jboolean ArrayList::addAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline jboolean ArrayList::addAll(jint arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"addAll",
			"(ILjava/util/Collection;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void ArrayList::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline JObject ArrayList::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean ArrayList::contains(JObject arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void ArrayList::ensureCapacity(jint arg0) const
	{
		callMethod<void>(
			"ensureCapacity",
			"(I)V",
			arg0
		);
	}
	inline jboolean ArrayList::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void ArrayList::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	inline JObject ArrayList::get(jint arg0) const
	{
		return callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	inline jint ArrayList::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint ArrayList::indexOf(JObject arg0) const
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jboolean ArrayList::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline JObject ArrayList::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline jint ArrayList::lastIndexOf(JObject arg0) const
	{
		return callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline JObject ArrayList::listIterator() const
	{
		return callObjectMethod(
			"listIterator",
			"()Ljava/util/ListIterator;"
		);
	}
	inline JObject ArrayList::listIterator(jint arg0) const
	{
		return callObjectMethod(
			"listIterator",
			"(I)Ljava/util/ListIterator;",
			arg0
		);
	}
	inline jboolean ArrayList::remove(JObject arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject ArrayList::remove(jint arg0) const
	{
		return callObjectMethod(
			"remove",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	inline jboolean ArrayList::removeAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline jboolean ArrayList::removeIf(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	inline void ArrayList::replaceAll(JObject arg0) const
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/UnaryOperator;)V",
			arg0.object()
		);
	}
	inline jboolean ArrayList::retainAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline JObject ArrayList::set(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"set",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline jint ArrayList::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline void ArrayList::sort(JObject arg0) const
	{
		callMethod<void>(
			"sort",
			"(Ljava/util/Comparator;)V",
			arg0.object()
		);
	}
	inline JObject ArrayList::spliterator() const
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	inline JObject ArrayList::subList(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"subList",
			"(II)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	inline JObjectArray ArrayList::toArray() const
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	inline JObjectArray ArrayList::toArray(JObjectArray arg0) const
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline void ArrayList::trimToSize() const
	{
		callMethod<void>(
			"trimToSize",
			"()V"
		);
	}
} // namespace java::util

// Base class headers
#include "./AbstractCollection.hpp"
#include "./AbstractList.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
