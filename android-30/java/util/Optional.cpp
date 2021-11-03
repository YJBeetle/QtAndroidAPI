#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Optional.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	Optional::Optional(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::util::Optional Optional::empty()
	{
		return callStaticObjectMethod(
			"java.util.Optional",
			"empty",
			"()Ljava/util/Optional;"
		);
	}
	java::util::Optional Optional::of(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Optional",
			"of",
			"(Ljava/lang/Object;)Ljava/util/Optional;",
			arg0.object<jobject>()
		);
	}
	java::util::Optional Optional::ofNullable(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.util.Optional",
			"ofNullable",
			"(Ljava/lang/Object;)Ljava/util/Optional;",
			arg0.object<jobject>()
		);
	}
	jboolean Optional::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::util::Optional Optional::filter(JObject arg0) const
	{
		return callObjectMethod(
			"filter",
			"(Ljava/util/function/Predicate;)Ljava/util/Optional;",
			arg0.object()
		);
	}
	java::util::Optional Optional::flatMap(JObject arg0) const
	{
		return callObjectMethod(
			"flatMap",
			"(Ljava/util/function/Function;)Ljava/util/Optional;",
			arg0.object()
		);
	}
	JObject Optional::get() const
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		);
	}
	jint Optional::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Optional::ifPresent(JObject arg0) const
	{
		callMethod<void>(
			"ifPresent",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	void Optional::ifPresentOrElse(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"ifPresentOrElse",
			"(Ljava/util/function/Consumer;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Optional::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jboolean Optional::isPresent() const
	{
		return callMethod<jboolean>(
			"isPresent",
			"()Z"
		);
	}
	java::util::Optional Optional::map(JObject arg0) const
	{
		return callObjectMethod(
			"map",
			"(Ljava/util/function/Function;)Ljava/util/Optional;",
			arg0.object()
		);
	}
	java::util::Optional Optional::_or(JObject arg0) const
	{
		return callObjectMethod(
			"or",
			"(Ljava/util/function/Supplier;)Ljava/util/Optional;",
			arg0.object()
		);
	}
	JObject Optional::orElse(JObject arg0) const
	{
		return callObjectMethod(
			"orElse",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	JObject Optional::orElseGet(JObject arg0) const
	{
		return callObjectMethod(
			"orElseGet",
			"(Ljava/util/function/Supplier;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	JObject Optional::orElseThrow() const
	{
		return callObjectMethod(
			"orElseThrow",
			"()Ljava/lang/Object;"
		);
	}
	JObject Optional::orElseThrow(JObject arg0) const
	{
		return callObjectMethod(
			"orElseThrow",
			"(Ljava/util/function/Supplier;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	JObject Optional::stream() const
	{
		return callObjectMethod(
			"stream",
			"()Ljava/util/stream/Stream;"
		);
	}
	JString Optional::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

