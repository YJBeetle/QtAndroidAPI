#pragma once

#ifndef JAVA_TIME_TEMPORAL_VALUERANGE
#define JAVA_TIME_TEMPORAL_VALUERANGE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}

namespace __jni_impl::java::time::temporal
{
	class ValueRange : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		static QAndroidJniObject of(jlong arg0, jlong arg1);
		static QAndroidJniObject of(jlong arg0, jlong arg1, jlong arg2, jlong arg3);
		static QAndroidJniObject of(jlong arg0, jlong arg1, jlong arg2);
		jlong checkValidValue(jlong arg0, __jni_impl::__JniBaseClass arg1);
		jint checkValidIntValue(jlong arg0, __jni_impl::__JniBaseClass arg1);
		jboolean isIntValue();
		jboolean isValidValue(jlong arg0);
		jlong getMinimum();
		jlong getMaximum();
		jboolean isValidIntValue(jlong arg0);
		jboolean isFixed();
		jlong getLargestMinimum();
		jlong getSmallestMaximum();
	};
} // namespace __jni_impl::java::time::temporal

#include "../../io/ObjectInputStream.hpp"

namespace __jni_impl::java::time::temporal
{
	// Fields
	
	// Constructors
	void ValueRange::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.temporal.ValueRange",
			"(V)V");
	}
	
	// Methods
	jboolean ValueRange::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject ValueRange::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint ValueRange::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject ValueRange::of(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.ValueRange",
			"of",
			"(JJ)Ljava/time/temporal/ValueRange;",
			arg0,
			arg1);
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
			arg3);
	}
	QAndroidJniObject ValueRange::of(jlong arg0, jlong arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.ValueRange",
			"of",
			"(JJJ)Ljava/time/temporal/ValueRange;",
			arg0,
			arg1,
			arg2);
	}
	jlong ValueRange::checkValidValue(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jlong>(
			"checkValidValue",
			"(JLjava/time/temporal/TemporalField;)J",
			arg0,
			arg1.__jniObject().object());
	}
	jint ValueRange::checkValidIntValue(jlong arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jint>(
			"checkValidIntValue",
			"(JLjava/time/temporal/TemporalField;)I",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean ValueRange::isIntValue()
	{
		return __thiz.callMethod<jboolean>(
			"isIntValue",
			"()Z");
	}
	jboolean ValueRange::isValidValue(jlong arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isValidValue",
			"(J)Z",
			arg0);
	}
	jlong ValueRange::getMinimum()
	{
		return __thiz.callMethod<jlong>(
			"getMinimum",
			"()J");
	}
	jlong ValueRange::getMaximum()
	{
		return __thiz.callMethod<jlong>(
			"getMaximum",
			"()J");
	}
	jboolean ValueRange::isValidIntValue(jlong arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isValidIntValue",
			"(J)Z",
			arg0);
	}
	jboolean ValueRange::isFixed()
	{
		return __thiz.callMethod<jboolean>(
			"isFixed",
			"()Z");
	}
	jlong ValueRange::getLargestMinimum()
	{
		return __thiz.callMethod<jlong>(
			"getLargestMinimum",
			"()J");
	}
	jlong ValueRange::getSmallestMaximum()
	{
		return __thiz.callMethod<jlong>(
			"getSmallestMaximum",
			"()J");
	}
} // namespace __jni_impl::java::time::temporal

namespace java::time::temporal
{
	class ValueRange : public __jni_impl::java::time::temporal::ValueRange
	{
	public:
		ValueRange(QAndroidJniObject obj) { __thiz = obj; }
		ValueRange()
		{
			__constructor();
		}
	};
} // namespace java::time::temporal

#endif // JAVA_TIME_TEMPORAL_VALUERANGE

