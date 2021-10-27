#include "./Optional.hpp"

namespace java::util
{
	// Fields
	
	Optional::Optional(QAndroidJniObject obj) { __thiz = obj; }
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
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Optional::filter(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"filter",
			"(Ljava/util/function/Predicate;)Ljava/util/Optional;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Optional::flatMap(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"flatMap",
			"(Ljava/util/function/Function;)Ljava/util/Optional;",
			arg0.__jniObject().object()
		);
	}
	jobject Optional::get()
	{
		return __thiz.callObjectMethod(
			"get",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jint Optional::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Optional::ifPresent(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"ifPresent",
			"(Ljava/util/function/Consumer;)V",
			arg0.__jniObject().object()
		);
	}
	void Optional::ifPresentOrElse(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"ifPresentOrElse",
			"(Ljava/util/function/Consumer;Ljava/lang/Runnable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Optional::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jboolean Optional::isPresent()
	{
		return __thiz.callMethod<jboolean>(
			"isPresent",
			"()Z"
		);
	}
	QAndroidJniObject Optional::map(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"map",
			"(Ljava/util/function/Function;)Ljava/util/Optional;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Optional::_or(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"or",
			"(Ljava/util/function/Supplier;)Ljava/util/Optional;",
			arg0.__jniObject().object()
		);
	}
	jobject Optional::orElse(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"orElse",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject Optional::orElseGet(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"orElseGet",
			"(Ljava/util/function/Supplier;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jobject Optional::orElseThrow()
	{
		return __thiz.callObjectMethod(
			"orElseThrow",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject Optional::orElseThrow(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"orElseThrow",
			"(Ljava/util/function/Supplier;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject Optional::stream()
	{
		return __thiz.callObjectMethod(
			"stream",
			"()Ljava/util/stream/Stream;"
		);
	}
	jstring Optional::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

