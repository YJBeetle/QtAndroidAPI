#include "../../io/ObjectInputStream.hpp"
#include "./ValueRange.hpp"

namespace java::time::temporal
{
	// Fields
	
	ValueRange::ValueRange(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ValueRange::of(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.ValueRange",
			"of",
			"(JJ)Ljava/time/temporal/ValueRange;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ValueRange::of(jlong arg0, jlong arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.ValueRange",
			"of",
			"(JJJ)Ljava/time/temporal/ValueRange;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject ValueRange::of(jlong arg0, jlong arg1, jlong arg2, jlong arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.ValueRange",
			"of",
			"(JJJJ)Ljava/time/temporal/ValueRange;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint ValueRange::checkValidIntValue(jlong arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jint>(
			"checkValidIntValue",
			"(JLjava/time/temporal/TemporalField;)I",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jlong ValueRange::checkValidValue(jlong arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"checkValidValue",
			"(JLjava/time/temporal/TemporalField;)J",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean ValueRange::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong ValueRange::getLargestMinimum()
	{
		return __thiz.callMethod<jlong>(
			"getLargestMinimum",
			"()J"
		);
	}
	jlong ValueRange::getMaximum()
	{
		return __thiz.callMethod<jlong>(
			"getMaximum",
			"()J"
		);
	}
	jlong ValueRange::getMinimum()
	{
		return __thiz.callMethod<jlong>(
			"getMinimum",
			"()J"
		);
	}
	jlong ValueRange::getSmallestMaximum()
	{
		return __thiz.callMethod<jlong>(
			"getSmallestMaximum",
			"()J"
		);
	}
	jint ValueRange::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ValueRange::isFixed()
	{
		return __thiz.callMethod<jboolean>(
			"isFixed",
			"()Z"
		);
	}
	jboolean ValueRange::isIntValue()
	{
		return __thiz.callMethod<jboolean>(
			"isIntValue",
			"()Z"
		);
	}
	jboolean ValueRange::isValidIntValue(jlong arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isValidIntValue",
			"(J)Z",
			arg0
		);
	}
	jboolean ValueRange::isValidValue(jlong arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isValidValue",
			"(J)Z",
			arg0
		);
	}
	jstring ValueRange::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::time::temporal

