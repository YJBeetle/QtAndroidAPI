#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Optional.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::util::Optional Optional::empty()
	{
		return callStaticObjectMethod(
			"java.util.Optional",
			"empty",
			"()Ljava/util/Optional;"
		);
	}
	inline java::util::Optional Optional::of(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Optional",
			"of",
			"(Ljava/lang/Object;)Ljava/util/Optional;",
			arg0.object<jobject>()
		);
	}
	inline java::util::Optional Optional::ofNullable(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Optional",
			"ofNullable",
			"(Ljava/lang/Object;)Ljava/util/Optional;",
			arg0.object<jobject>()
		);
	}
	inline jboolean Optional::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::util::Optional Optional::filter(JObject arg0) const
	{
		return callObjectMethod(
			"filter",
			"(Ljava/util/function/Predicate;)Ljava/util/Optional;",
			arg0.object()
		);
	}
	inline java::util::Optional Optional::flatMap(JObject arg0) const
	{
		return callObjectMethod(
			"flatMap",
			"(Ljava/util/function/Function;)Ljava/util/Optional;",
			arg0.object()
		);
	}
	inline JObject Optional::get() const
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		);
	}
	inline jint Optional::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void Optional::ifPresent(JObject arg0) const
	{
		callMethod<void>(
			"ifPresent",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	inline void Optional::ifPresentOrElse(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"ifPresentOrElse",
			"(Ljava/util/function/Consumer;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Optional::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline jboolean Optional::isPresent() const
	{
		return callMethod<jboolean>(
			"isPresent",
			"()Z"
		);
	}
	inline java::util::Optional Optional::map(JObject arg0) const
	{
		return callObjectMethod(
			"map",
			"(Ljava/util/function/Function;)Ljava/util/Optional;",
			arg0.object()
		);
	}
	inline java::util::Optional Optional::or_(JObject arg0) const
	{
		return callObjectMethod(
			"or",
			"(Ljava/util/function/Supplier;)Ljava/util/Optional;",
			arg0.object()
		);
	}
	inline JObject Optional::orElse(JObject arg0) const
	{
		return callObjectMethod(
			"orElse",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline JObject Optional::orElseGet(JObject arg0) const
	{
		return callObjectMethod(
			"orElseGet",
			"(Ljava/util/function/Supplier;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline JObject Optional::orElseThrow() const
	{
		return callObjectMethod(
			"orElseThrow",
			"()Ljava/lang/Object;"
		);
	}
	inline JObject Optional::orElseThrow(JObject arg0) const
	{
		return callObjectMethod(
			"orElseThrow",
			"(Ljava/util/function/Supplier;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline JObject Optional::stream() const
	{
		return callObjectMethod(
			"stream",
			"()Ljava/util/stream/Stream;"
		);
	}
	inline JString Optional::toString() const
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
