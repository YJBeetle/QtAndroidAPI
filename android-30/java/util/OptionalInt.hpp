#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./OptionalInt.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::util::OptionalInt OptionalInt::empty()
	{
		return callStaticObjectMethod(
			"java.util.OptionalInt",
			"empty",
			"()Ljava/util/OptionalInt;"
		);
	}
	inline java::util::OptionalInt OptionalInt::of(jint arg0)
	{
		return callStaticObjectMethod(
			"java.util.OptionalInt",
			"of",
			"(I)Ljava/util/OptionalInt;",
			arg0
		);
	}
	inline jboolean OptionalInt::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint OptionalInt::getAsInt() const
	{
		return callMethod<jint>(
			"getAsInt",
			"()I"
		);
	}
	inline jint OptionalInt::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void OptionalInt::ifPresent(JObject arg0) const
	{
		callMethod<void>(
			"ifPresent",
			"(Ljava/util/function/IntConsumer;)V",
			arg0.object()
		);
	}
	inline void OptionalInt::ifPresentOrElse(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"ifPresentOrElse",
			"(Ljava/util/function/IntConsumer;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean OptionalInt::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline jboolean OptionalInt::isPresent() const
	{
		return callMethod<jboolean>(
			"isPresent",
			"()Z"
		);
	}
	inline jint OptionalInt::orElse(jint arg0) const
	{
		return callMethod<jint>(
			"orElse",
			"(I)I",
			arg0
		);
	}
	inline jint OptionalInt::orElseGet(JObject arg0) const
	{
		return callMethod<jint>(
			"orElseGet",
			"(Ljava/util/function/IntSupplier;)I",
			arg0.object()
		);
	}
	inline jint OptionalInt::orElseThrow() const
	{
		return callMethod<jint>(
			"orElseThrow",
			"()I"
		);
	}
	inline jint OptionalInt::orElseThrow(JObject arg0) const
	{
		return callMethod<jint>(
			"orElseThrow",
			"(Ljava/util/function/Supplier;)I",
			arg0.object()
		);
	}
	inline JObject OptionalInt::stream() const
	{
		return callObjectMethod(
			"stream",
			"()Ljava/util/stream/IntStream;"
		);
	}
	inline JString OptionalInt::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

// Base class headers

