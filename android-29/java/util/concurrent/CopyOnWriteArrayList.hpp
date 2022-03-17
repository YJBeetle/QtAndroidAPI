#pragma once

#include "../../../JLongArray.hpp"
#include "../../../JObjectArray.hpp"
#include "../../io/ObjectInputStream.def.hpp"
#include "../../io/ObjectOutputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../lang/reflect/Field.def.hpp"
#include "./CopyOnWriteArrayList.def.hpp"

namespace java::util::concurrent
{
	// Fields
	
	// Constructors
	inline CopyOnWriteArrayList::CopyOnWriteArrayList()
		: JObject(
			"java.util.concurrent.CopyOnWriteArrayList",
			"()V"
		) {}
	inline CopyOnWriteArrayList::CopyOnWriteArrayList(JObjectArray arg0)
		: JObject(
			"java.util.concurrent.CopyOnWriteArrayList",
			"([Ljava/lang/Object;)V",
			arg0.object<jobjectArray>()
		) {}
	inline CopyOnWriteArrayList::CopyOnWriteArrayList(JObject arg0)
		: JObject(
			"java.util.concurrent.CopyOnWriteArrayList",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean CopyOnWriteArrayList::add(JObject arg0) const
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void CopyOnWriteArrayList::add(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"add",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline jboolean CopyOnWriteArrayList::addAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline jboolean CopyOnWriteArrayList::addAll(jint arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"addAll",
			"(ILjava/util/Collection;)Z",
			arg0,
			arg1.object()
		);
	}
	inline jint CopyOnWriteArrayList::addAllAbsent(JObject arg0) const
	{
		return callMethod<jint>(
			"addAllAbsent",
			"(Ljava/util/Collection;)I",
			arg0.object()
		);
	}
	inline jboolean CopyOnWriteArrayList::addIfAbsent(JObject arg0) const
	{
		return callMethod<jboolean>(
			"addIfAbsent",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void CopyOnWriteArrayList::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline JObject CopyOnWriteArrayList::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean CopyOnWriteArrayList::contains(JObject arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean CopyOnWriteArrayList::containsAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline jboolean CopyOnWriteArrayList::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void CopyOnWriteArrayList::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	inline JObject CopyOnWriteArrayList::get(jint arg0) const
	{
		return callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	inline jint CopyOnWriteArrayList::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint CopyOnWriteArrayList::indexOf(JObject arg0) const
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint CopyOnWriteArrayList::indexOf(JObject arg0, jint arg1) const
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;I)I",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline jboolean CopyOnWriteArrayList::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline JObject CopyOnWriteArrayList::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline jint CopyOnWriteArrayList::lastIndexOf(JObject arg0) const
	{
		return callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint CopyOnWriteArrayList::lastIndexOf(JObject arg0, jint arg1) const
	{
		return callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/Object;I)I",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline JObject CopyOnWriteArrayList::listIterator() const
	{
		return callObjectMethod(
			"listIterator",
			"()Ljava/util/ListIterator;"
		);
	}
	inline JObject CopyOnWriteArrayList::listIterator(jint arg0) const
	{
		return callObjectMethod(
			"listIterator",
			"(I)Ljava/util/ListIterator;",
			arg0
		);
	}
	inline jboolean CopyOnWriteArrayList::remove(JObject arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject CopyOnWriteArrayList::remove(jint arg0) const
	{
		return callObjectMethod(
			"remove",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	inline jboolean CopyOnWriteArrayList::removeAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline jboolean CopyOnWriteArrayList::removeIf(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	inline void CopyOnWriteArrayList::replaceAll(JObject arg0) const
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/UnaryOperator;)V",
			arg0.object()
		);
	}
	inline jboolean CopyOnWriteArrayList::retainAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline JObject CopyOnWriteArrayList::set(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"set",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline jint CopyOnWriteArrayList::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline void CopyOnWriteArrayList::sort(JObject arg0) const
	{
		callMethod<void>(
			"sort",
			"(Ljava/util/Comparator;)V",
			arg0.object()
		);
	}
	inline JObject CopyOnWriteArrayList::spliterator() const
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	inline JObject CopyOnWriteArrayList::subList(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"subList",
			"(II)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	inline JObjectArray CopyOnWriteArrayList::toArray() const
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	inline JObjectArray CopyOnWriteArrayList::toArray(JObjectArray arg0) const
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JString CopyOnWriteArrayList::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::concurrent

// Base class headers

