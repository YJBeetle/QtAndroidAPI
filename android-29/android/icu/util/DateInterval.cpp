#include "./DateInterval.hpp"

namespace android::icu::util
{
	// Fields
	
	DateInterval::DateInterval(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DateInterval::DateInterval(jlong arg0, jlong arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.DateInterval",
			"(JJ)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jboolean DateInterval::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong DateInterval::getFromDate()
	{
		return __thiz.callMethod<jlong>(
			"getFromDate",
			"()J"
		);
	}
	jlong DateInterval::getToDate()
	{
		return __thiz.callMethod<jlong>(
			"getToDate",
			"()J"
		);
	}
	jint DateInterval::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring DateInterval::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::util

