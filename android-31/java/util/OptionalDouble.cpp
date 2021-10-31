#include "./OptionalDouble.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	OptionalDouble::OptionalDouble(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
	jboolean OptionalDouble::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jdouble OptionalDouble::getAsDouble()
	{
		return callMethod<jdouble>(
			"getAsDouble",
			"()D"
		);
	}
	jint OptionalDouble::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void OptionalDouble::ifPresent(__JniBaseClass arg0)
	{
		callMethod<void>(
			"ifPresent",
			"(Ljava/util/function/DoubleConsumer;)V",
			arg0.object()
		);
	}
	void OptionalDouble::ifPresentOrElse(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"ifPresentOrElse",
			"(Ljava/util/function/DoubleConsumer;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean OptionalDouble::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jboolean OptionalDouble::isPresent()
	{
		return callMethod<jboolean>(
			"isPresent",
			"()Z"
		);
	}
	jdouble OptionalDouble::orElse(jdouble arg0)
	{
		return callMethod<jdouble>(
			"orElse",
			"(D)D",
			arg0
		);
	}
	jdouble OptionalDouble::orElseGet(__JniBaseClass arg0)
	{
		return callMethod<jdouble>(
			"orElseGet",
			"(Ljava/util/function/DoubleSupplier;)D",
			arg0.object()
		);
	}
	jdouble OptionalDouble::orElseThrow()
	{
		return callMethod<jdouble>(
			"orElseThrow",
			"()D"
		);
	}
	jdouble OptionalDouble::orElseThrow(__JniBaseClass arg0)
	{
		return callMethod<jdouble>(
			"orElseThrow",
			"(Ljava/util/function/Supplier;)D",
			arg0.object()
		);
	}
	__JniBaseClass OptionalDouble::stream()
	{
		return callObjectMethod(
			"stream",
			"()Ljava/util/stream/DoubleStream;"
		);
	}
	jstring OptionalDouble::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

