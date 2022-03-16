#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./OptionalDouble.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	
	// Methods
	java::util::OptionalDouble OptionalDouble::empty()
	{
		return callStaticObjectMethod(
			"java.util.OptionalDouble",
			"empty",
			"()Ljava/util/OptionalDouble;"
		);
	}
	java::util::OptionalDouble OptionalDouble::of(jdouble arg0)
	{
		return callStaticObjectMethod(
			"java.util.OptionalDouble",
			"of",
			"(D)Ljava/util/OptionalDouble;",
			arg0
		);
	}
	jboolean OptionalDouble::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jdouble OptionalDouble::getAsDouble() const
	{
		return callMethod<jdouble>(
			"getAsDouble",
			"()D"
		);
	}
	jint OptionalDouble::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void OptionalDouble::ifPresent(JObject arg0) const
	{
		callMethod<void>(
			"ifPresent",
			"(Ljava/util/function/DoubleConsumer;)V",
			arg0.object()
		);
	}
	void OptionalDouble::ifPresentOrElse(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"ifPresentOrElse",
			"(Ljava/util/function/DoubleConsumer;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean OptionalDouble::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jboolean OptionalDouble::isPresent() const
	{
		return callMethod<jboolean>(
			"isPresent",
			"()Z"
		);
	}
	jdouble OptionalDouble::orElse(jdouble arg0) const
	{
		return callMethod<jdouble>(
			"orElse",
			"(D)D",
			arg0
		);
	}
	jdouble OptionalDouble::orElseGet(JObject arg0) const
	{
		return callMethod<jdouble>(
			"orElseGet",
			"(Ljava/util/function/DoubleSupplier;)D",
			arg0.object()
		);
	}
	jdouble OptionalDouble::orElseThrow() const
	{
		return callMethod<jdouble>(
			"orElseThrow",
			"()D"
		);
	}
	jdouble OptionalDouble::orElseThrow(JObject arg0) const
	{
		return callMethod<jdouble>(
			"orElseThrow",
			"(Ljava/util/function/Supplier;)D",
			arg0.object()
		);
	}
	JObject OptionalDouble::stream() const
	{
		return callObjectMethod(
			"stream",
			"()Ljava/util/stream/DoubleStream;"
		);
	}
	JString OptionalDouble::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

