#include "./DateInterval.hpp"

namespace android::icu::util
{
	// Fields
	
	// QJniObject forward
	DateInterval::DateInterval(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DateInterval::DateInterval(jlong arg0, jlong arg1)
		: JObject(
			"android.icu.util.DateInterval",
			"(JJ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jboolean DateInterval::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong DateInterval::getFromDate()
	{
		return callMethod<jlong>(
			"getFromDate",
			"()J"
		);
	}
	jlong DateInterval::getToDate()
	{
		return callMethod<jlong>(
			"getToDate",
			"()J"
		);
	}
	jint DateInterval::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring DateInterval::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::util

