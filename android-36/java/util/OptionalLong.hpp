#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./OptionalLong.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::util::OptionalLong OptionalLong::empty()
	{
		return callStaticObjectMethod(
			"java.util.OptionalLong",
			"empty",
			"()Ljava/util/OptionalLong;"
		);
	}
	inline java::util::OptionalLong OptionalLong::of(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.util.OptionalLong",
			"of",
			"(J)Ljava/util/OptionalLong;",
			arg0
		);
	}
	inline jboolean OptionalLong::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong OptionalLong::getAsLong() const
	{
		return callMethod<jlong>(
			"getAsLong",
			"()J"
		);
	}
	inline jint OptionalLong::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void OptionalLong::ifPresent(JObject arg0) const
	{
		callMethod<void>(
			"ifPresent",
			"(Ljava/util/function/LongConsumer;)V",
			arg0.object()
		);
	}
	inline void OptionalLong::ifPresentOrElse(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"ifPresentOrElse",
			"(Ljava/util/function/LongConsumer;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean OptionalLong::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline jboolean OptionalLong::isPresent() const
	{
		return callMethod<jboolean>(
			"isPresent",
			"()Z"
		);
	}
	inline jlong OptionalLong::orElse(jlong arg0) const
	{
		return callMethod<jlong>(
			"orElse",
			"(J)J",
			arg0
		);
	}
	inline jlong OptionalLong::orElseGet(JObject arg0) const
	{
		return callMethod<jlong>(
			"orElseGet",
			"(Ljava/util/function/LongSupplier;)J",
			arg0.object()
		);
	}
	inline jlong OptionalLong::orElseThrow() const
	{
		return callMethod<jlong>(
			"orElseThrow",
			"()J"
		);
	}
	inline jlong OptionalLong::orElseThrow(JObject arg0) const
	{
		return callMethod<jlong>(
			"orElseThrow",
			"(Ljava/util/function/Supplier;)J",
			arg0.object()
		);
	}
	inline JObject OptionalLong::stream() const
	{
		return callObjectMethod(
			"stream",
			"()Ljava/util/stream/LongStream;"
		);
	}
	inline JString OptionalLong::toString() const
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
