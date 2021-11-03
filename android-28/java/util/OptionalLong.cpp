#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./OptionalLong.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	OptionalLong::OptionalLong(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::util::OptionalLong OptionalLong::empty()
	{
		return callStaticObjectMethod(
			"java.util.OptionalLong",
			"empty",
			"()Ljava/util/OptionalLong;"
		);
	}
	java::util::OptionalLong OptionalLong::of(jlong arg0)
	{
		return callStaticObjectMethod(
			"java.util.OptionalLong",
			"of",
			"(J)Ljava/util/OptionalLong;",
			arg0
		);
	}
	jboolean OptionalLong::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jlong OptionalLong::getAsLong()
	{
		return callMethod<jlong>(
			"getAsLong",
			"()J"
		);
	}
	jint OptionalLong::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void OptionalLong::ifPresent(JObject arg0)
	{
		callMethod<void>(
			"ifPresent",
			"(Ljava/util/function/LongConsumer;)V",
			arg0.object()
		);
	}
	void OptionalLong::ifPresentOrElse(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"ifPresentOrElse",
			"(Ljava/util/function/LongConsumer;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean OptionalLong::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jboolean OptionalLong::isPresent()
	{
		return callMethod<jboolean>(
			"isPresent",
			"()Z"
		);
	}
	jlong OptionalLong::orElse(jlong arg0)
	{
		return callMethod<jlong>(
			"orElse",
			"(J)J",
			arg0
		);
	}
	jlong OptionalLong::orElseGet(JObject arg0)
	{
		return callMethod<jlong>(
			"orElseGet",
			"(Ljava/util/function/LongSupplier;)J",
			arg0.object()
		);
	}
	jlong OptionalLong::orElseThrow()
	{
		return callMethod<jlong>(
			"orElseThrow",
			"()J"
		);
	}
	jlong OptionalLong::orElseThrow(JObject arg0)
	{
		return callMethod<jlong>(
			"orElseThrow",
			"(Ljava/util/function/Supplier;)J",
			arg0.object()
		);
	}
	JObject OptionalLong::stream()
	{
		return callObjectMethod(
			"stream",
			"()Ljava/util/stream/LongStream;"
		);
	}
	JString OptionalLong::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

