#include "./OptionalLong.hpp"

namespace java::util
{
	// Fields
	
	OptionalLong::OptionalLong(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject OptionalLong::empty()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.OptionalLong",
			"empty",
			"()Ljava/util/OptionalLong;"
		);
	}
	QAndroidJniObject OptionalLong::of(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.OptionalLong",
			"of",
			"(J)Ljava/util/OptionalLong;",
			arg0
		);
	}
	jboolean OptionalLong::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong OptionalLong::getAsLong()
	{
		return __thiz.callMethod<jlong>(
			"getAsLong",
			"()J"
		);
	}
	jint OptionalLong::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void OptionalLong::ifPresent(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"ifPresent",
			"(Ljava/util/function/LongConsumer;)V",
			arg0.__jniObject().object()
		);
	}
	void OptionalLong::ifPresentOrElse(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"ifPresentOrElse",
			"(Ljava/util/function/LongConsumer;Ljava/lang/Runnable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean OptionalLong::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jboolean OptionalLong::isPresent()
	{
		return __thiz.callMethod<jboolean>(
			"isPresent",
			"()Z"
		);
	}
	jlong OptionalLong::orElse(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"orElse",
			"(J)J",
			arg0
		);
	}
	jlong OptionalLong::orElseGet(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"orElseGet",
			"(Ljava/util/function/LongSupplier;)J",
			arg0.__jniObject().object()
		);
	}
	jlong OptionalLong::orElseThrow()
	{
		return __thiz.callMethod<jlong>(
			"orElseThrow",
			"()J"
		);
	}
	jlong OptionalLong::orElseThrow(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"orElseThrow",
			"(Ljava/util/function/Supplier;)J",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject OptionalLong::stream()
	{
		return __thiz.callObjectMethod(
			"stream",
			"()Ljava/util/stream/LongStream;"
		);
	}
	jstring OptionalLong::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

