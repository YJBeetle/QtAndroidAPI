#pragma once

#include "../../JLongArray.hpp"
#include "../../JObjectArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Vector.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline Vector::Vector()
		: java::util::AbstractList(
			"java.util.Vector",
			"()V"
		) {}
	inline Vector::Vector(jint arg0)
		: java::util::AbstractList(
			"java.util.Vector",
			"(I)V",
			arg0
		) {}
	inline Vector::Vector(JObject arg0)
		: java::util::AbstractList(
			"java.util.Vector",
			"(Ljava/util/Collection;)V",
			arg0.object()
		) {}
	inline Vector::Vector(jint arg0, jint arg1)
		: java::util::AbstractList(
			"java.util.Vector",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jboolean Vector::add(JObject arg0) const
	{
		return callMethod<jboolean>(
			"add",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void Vector::add(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"add",
			"(ILjava/lang/Object;)V",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline jboolean Vector::addAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"addAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline jboolean Vector::addAll(jint arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"addAll",
			"(ILjava/util/Collection;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void Vector::addElement(JObject arg0) const
	{
		callMethod<void>(
			"addElement",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline jint Vector::capacity() const
	{
		return callMethod<jint>(
			"capacity",
			"()I"
		);
	}
	inline void Vector::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline JObject Vector::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean Vector::contains(JObject arg0) const
	{
		return callMethod<jboolean>(
			"contains",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean Vector::containsAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"containsAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline void Vector::copyInto(JObjectArray arg0) const
	{
		callMethod<void>(
			"copyInto",
			"([Ljava/lang/Object;)V",
			arg0.object<jobjectArray>()
		);
	}
	inline JObject Vector::elementAt(jint arg0) const
	{
		return callObjectMethod(
			"elementAt",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	inline JObject Vector::elements() const
	{
		return callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	inline void Vector::ensureCapacity(jint arg0) const
	{
		callMethod<void>(
			"ensureCapacity",
			"(I)V",
			arg0
		);
	}
	inline jboolean Vector::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject Vector::firstElement() const
	{
		return callObjectMethod(
			"firstElement",
			"()Ljava/lang/Object;"
		);
	}
	inline void Vector::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	inline JObject Vector::get(jint arg0) const
	{
		return callObjectMethod(
			"get",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	inline jint Vector::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jint Vector::indexOf(JObject arg0) const
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint Vector::indexOf(JObject arg0, jint arg1) const
	{
		return callMethod<jint>(
			"indexOf",
			"(Ljava/lang/Object;I)I",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline void Vector::insertElementAt(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"insertElementAt",
			"(Ljava/lang/Object;I)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline jboolean Vector::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline JObject Vector::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline JObject Vector::lastElement() const
	{
		return callObjectMethod(
			"lastElement",
			"()Ljava/lang/Object;"
		);
	}
	inline jint Vector::lastIndexOf(JObject arg0) const
	{
		return callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jint Vector::lastIndexOf(JObject arg0, jint arg1) const
	{
		return callMethod<jint>(
			"lastIndexOf",
			"(Ljava/lang/Object;I)I",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline JObject Vector::listIterator() const
	{
		return callObjectMethod(
			"listIterator",
			"()Ljava/util/ListIterator;"
		);
	}
	inline JObject Vector::listIterator(jint arg0) const
	{
		return callObjectMethod(
			"listIterator",
			"(I)Ljava/util/ListIterator;",
			arg0
		);
	}
	inline jboolean Vector::remove(JObject arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject Vector::remove(jint arg0) const
	{
		return callObjectMethod(
			"remove",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	inline jboolean Vector::removeAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline void Vector::removeAllElements() const
	{
		callMethod<void>(
			"removeAllElements",
			"()V"
		);
	}
	inline jboolean Vector::removeElement(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeElement",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void Vector::removeElementAt(jint arg0) const
	{
		callMethod<void>(
			"removeElementAt",
			"(I)V",
			arg0
		);
	}
	inline jboolean Vector::removeIf(JObject arg0) const
	{
		return callMethod<jboolean>(
			"removeIf",
			"(Ljava/util/function/Predicate;)Z",
			arg0.object()
		);
	}
	inline void Vector::replaceAll(JObject arg0) const
	{
		callMethod<void>(
			"replaceAll",
			"(Ljava/util/function/UnaryOperator;)V",
			arg0.object()
		);
	}
	inline jboolean Vector::retainAll(JObject arg0) const
	{
		return callMethod<jboolean>(
			"retainAll",
			"(Ljava/util/Collection;)Z",
			arg0.object()
		);
	}
	inline JObject Vector::set(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"set",
			"(ILjava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1.object<jobject>()
		);
	}
	inline void Vector::setElementAt(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"setElementAt",
			"(Ljava/lang/Object;I)V",
			arg0.object<jobject>(),
			arg1
		);
	}
	inline void Vector::setSize(jint arg0) const
	{
		callMethod<void>(
			"setSize",
			"(I)V",
			arg0
		);
	}
	inline jint Vector::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	inline void Vector::sort(JObject arg0) const
	{
		callMethod<void>(
			"sort",
			"(Ljava/util/Comparator;)V",
			arg0.object()
		);
	}
	inline JObject Vector::spliterator() const
	{
		return callObjectMethod(
			"spliterator",
			"()Ljava/util/Spliterator;"
		);
	}
	inline JObject Vector::subList(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"subList",
			"(II)Ljava/util/List;",
			arg0,
			arg1
		);
	}
	inline JObjectArray Vector::toArray() const
	{
		return callObjectMethod(
			"toArray",
			"()[Ljava/lang/Object;"
		);
	}
	inline JObjectArray Vector::toArray(JObjectArray arg0) const
	{
		return callObjectMethod(
			"toArray",
			"([Ljava/lang/Object;)[Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	inline JString Vector::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Vector::trimToSize() const
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
