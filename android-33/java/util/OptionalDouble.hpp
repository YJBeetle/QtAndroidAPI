#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./OptionalDouble.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::util::OptionalDouble OptionalDouble::empty()
	{
		return callStaticObjectMethod(
			"java.util.OptionalDouble",
			"empty",
			"()Ljava/util/OptionalDouble;"
		);
	}
	inline java::util::OptionalDouble OptionalDouble::of(jdouble arg0)
	{
		return callStaticObjectMethod(
			"java.util.OptionalDouble",
			"of",
			"(D)Ljava/util/OptionalDouble;",
			arg0
		);
	}
	inline jboolean OptionalDouble::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jdouble OptionalDouble::getAsDouble() const
	{
		return callMethod<jdouble>(
			"getAsDouble",
			"()D"
		);
	}
	inline jint OptionalDouble::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void OptionalDouble::ifPresent(JObject arg0) const
	{
		callMethod<void>(
			"ifPresent",
			"(Ljava/util/function/DoubleConsumer;)V",
			arg0.object()
		);
	}
	inline void OptionalDouble::ifPresentOrElse(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"ifPresentOrElse",
			"(Ljava/util/function/DoubleConsumer;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean OptionalDouble::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline jboolean OptionalDouble::isPresent() const
	{
		return callMethod<jboolean>(
			"isPresent",
			"()Z"
		);
	}
	inline jdouble OptionalDouble::orElse(jdouble arg0) const
	{
		return callMethod<jdouble>(
			"orElse",
			"(D)D",
			arg0
		);
	}
	inline jdouble OptionalDouble::orElseGet(JObject arg0) const
	{
		return callMethod<jdouble>(
			"orElseGet",
			"(Ljava/util/function/DoubleSupplier;)D",
			arg0.object()
		);
	}
	inline jdouble OptionalDouble::orElseThrow() const
	{
		return callMethod<jdouble>(
			"orElseThrow",
			"()D"
		);
	}
	inline jdouble OptionalDouble::orElseThrow(JObject arg0) const
	{
		return callMethod<jdouble>(
			"orElseThrow",
			"(Ljava/util/function/Supplier;)D",
			arg0.object()
		);
	}
	inline JObject OptionalDouble::stream() const
	{
		return callObjectMethod(
			"stream",
			"()Ljava/util/stream/DoubleStream;"
		);
	}
	inline JString OptionalDouble::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif
