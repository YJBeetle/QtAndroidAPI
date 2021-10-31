#include "./Optional.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	Optional::Optional(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject Optional::empty()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Optional",
			"empty",
			"()Ljava/util/Optional;"
		);
	}
	QAndroidJniObject Optional::of(jobject arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Optional",
			"of",
			"(Ljava/lang/Object;)Ljava/util/Optional;",
			arg0
		);
	}
	QAndroidJniObject Optional::ofNullable(jobject arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.Optional",
			"ofNullable",
			"(Ljava/lang/Object;)Ljava/util/Optional;",
			arg0
		);
	}
	jboolean Optional::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Optional::filter(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"filter",
			"(Ljava/util/function/Predicate;)Ljava/util/Optional;",
			arg0.object()
		);
	}
	QAndroidJniObject Optional::flatMap(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"flatMap",
			"(Ljava/util/function/Function;)Ljava/util/Optional;",
			arg0.object()
		);
	}
	jobject Optional::get()
	{
		return callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint Optional::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Optional::ifPresent(__JniBaseClass arg0)
	{
		callMethod<void>(
			"ifPresent",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	void Optional::ifPresentOrElse(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"ifPresentOrElse",
			"(Ljava/util/function/Consumer;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Optional::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jboolean Optional::isPresent()
	{
		return callMethod<jboolean>(
			"isPresent",
			"()Z"
		);
	}
	QAndroidJniObject Optional::map(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"map",
			"(Ljava/util/function/Function;)Ljava/util/Optional;",
			arg0.object()
		);
	}
	QAndroidJniObject Optional::_or(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"or",
			"(Ljava/util/function/Supplier;)Ljava/util/Optional;",
			arg0.object()
		);
	}
	jobject Optional::orElse(jobject arg0)
	{
		return callObjectMethod(
			"orElse",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject Optional::orElseGet(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"orElseGet",
			"(Ljava/util/function/Supplier;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	jobject Optional::orElseThrow()
	{
		return callObjectMethod(
			"orElseThrow",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject Optional::orElseThrow(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"orElseThrow",
			"(Ljava/util/function/Supplier;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	QAndroidJniObject Optional::stream()
	{
		return callObjectMethod(
			"stream",
			"()Ljava/util/stream/Stream;"
		);
	}
	jstring Optional::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

