#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./Date.hpp"
#include "./TimeZone.hpp"
#include "./SimpleTimeZone.hpp"

namespace java::util
{
	// Fields
	jint SimpleTimeZone::STANDARD_TIME()
	{
		return getStaticField<jint>(
			"java.util.SimpleTimeZone",
			"STANDARD_TIME"
		);
	}
	jint SimpleTimeZone::UTC_TIME()
	{
		return getStaticField<jint>(
			"java.util.SimpleTimeZone",
			"UTC_TIME"
		);
	}
	jint SimpleTimeZone::WALL_TIME()
	{
		return getStaticField<jint>(
			"java.util.SimpleTimeZone",
			"WALL_TIME"
		);
	}
	
	// QAndroidJniObject forward
	SimpleTimeZone::SimpleTimeZone(QAndroidJniObject obj) : java::util::TimeZone(obj) {}
	
	// Constructors
	SimpleTimeZone::SimpleTimeZone(jint arg0, jstring arg1)
		: java::util::TimeZone(
			"java.util.SimpleTimeZone",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		) {}
	SimpleTimeZone::SimpleTimeZone(jint arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9)
		: java::util::TimeZone(
			"java.util.SimpleTimeZone",
			"(ILjava/lang/String;IIIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9
		) {}
	SimpleTimeZone::SimpleTimeZone(jint arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10)
		: java::util::TimeZone(
			"java.util.SimpleTimeZone",
			"(ILjava/lang/String;IIIIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10
		) {}
	SimpleTimeZone::SimpleTimeZone(jint arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10, jint arg11, jint arg12)
		: java::util::TimeZone(
			"java.util.SimpleTimeZone",
			"(ILjava/lang/String;IIIIIIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8,
			arg9,
			arg10,
			arg11,
			arg12
		) {}
	
	// Methods
	jobject SimpleTimeZone::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean SimpleTimeZone::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint SimpleTimeZone::getDSTSavings()
	{
		return callMethod<jint>(
			"getDSTSavings",
			"()I"
		);
	}
	jint SimpleTimeZone::getOffset(jlong arg0)
	{
		return callMethod<jint>(
			"getOffset",
			"(J)I",
			arg0
		);
	}
	jint SimpleTimeZone::getOffset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		return callMethod<jint>(
			"getOffset",
			"(IIIIII)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	jint SimpleTimeZone::getRawOffset()
	{
		return callMethod<jint>(
			"getRawOffset",
			"()I"
		);
	}
	jboolean SimpleTimeZone::hasSameRules(java::util::TimeZone arg0)
	{
		return callMethod<jboolean>(
			"hasSameRules",
			"(Ljava/util/TimeZone;)Z",
			arg0.object()
		);
	}
	jint SimpleTimeZone::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean SimpleTimeZone::inDaylightTime(java::util::Date arg0)
	{
		return callMethod<jboolean>(
			"inDaylightTime",
			"(Ljava/util/Date;)Z",
			arg0.object()
		);
	}
	jboolean SimpleTimeZone::observesDaylightTime()
	{
		return callMethod<jboolean>(
			"observesDaylightTime",
			"()Z"
		);
	}
	void SimpleTimeZone::setDSTSavings(jint arg0)
	{
		callMethod<void>(
			"setDSTSavings",
			"(I)V",
			arg0
		);
	}
	void SimpleTimeZone::setEndRule(jint arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"setEndRule",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void SimpleTimeZone::setEndRule(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"setEndRule",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void SimpleTimeZone::setEndRule(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4)
	{
		callMethod<void>(
			"setEndRule",
			"(IIIIZ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void SimpleTimeZone::setRawOffset(jint arg0)
	{
		callMethod<void>(
			"setRawOffset",
			"(I)V",
			arg0
		);
	}
	void SimpleTimeZone::setStartRule(jint arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"setStartRule",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void SimpleTimeZone::setStartRule(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"setStartRule",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void SimpleTimeZone::setStartRule(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4)
	{
		callMethod<void>(
			"setStartRule",
			"(IIIIZ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void SimpleTimeZone::setStartYear(jint arg0)
	{
		callMethod<void>(
			"setStartYear",
			"(I)V",
			arg0
		);
	}
	jstring SimpleTimeZone::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean SimpleTimeZone::useDaylightTime()
	{
		return callMethod<jboolean>(
			"useDaylightTime",
			"()Z"
		);
	}
} // namespace java::util

