#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./OptionalInt.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	OptionalInt::OptionalInt(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::util::OptionalInt OptionalInt::empty()
	{
		return callStaticObjectMethod(
			"java.util.OptionalInt",
			"empty",
			"()Ljava/util/OptionalInt;"
		);
	}
	java::util::OptionalInt OptionalInt::of(jint arg0)
	{
		return callStaticObjectMethod(
			"java.util.OptionalInt",
			"of",
			"(I)Ljava/util/OptionalInt;",
			arg0
		);
	}
	jboolean OptionalInt::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint OptionalInt::getAsInt()
	{
		return callMethod<jint>(
			"getAsInt",
			"()I"
		);
	}
	jint OptionalInt::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void OptionalInt::ifPresent(JObject arg0)
	{
		callMethod<void>(
			"ifPresent",
			"(Ljava/util/function/IntConsumer;)V",
			arg0.object()
		);
	}
	void OptionalInt::ifPresentOrElse(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"ifPresentOrElse",
			"(Ljava/util/function/IntConsumer;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean OptionalInt::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jboolean OptionalInt::isPresent()
	{
		return callMethod<jboolean>(
			"isPresent",
			"()Z"
		);
	}
	jint OptionalInt::orElse(jint arg0)
	{
		return callMethod<jint>(
			"orElse",
			"(I)I",
			arg0
		);
	}
	jint OptionalInt::orElseGet(JObject arg0)
	{
		return callMethod<jint>(
			"orElseGet",
			"(Ljava/util/function/IntSupplier;)I",
			arg0.object()
		);
	}
	jint OptionalInt::orElseThrow()
	{
		return callMethod<jint>(
			"orElseThrow",
			"()I"
		);
	}
	jint OptionalInt::orElseThrow(JObject arg0)
	{
		return callMethod<jint>(
			"orElseThrow",
			"(Ljava/util/function/Supplier;)I",
			arg0.object()
		);
	}
	JObject OptionalInt::stream()
	{
		return callObjectMethod(
			"stream",
			"()Ljava/util/stream/IntStream;"
		);
	}
	JString OptionalInt::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

