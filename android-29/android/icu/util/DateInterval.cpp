#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	jboolean DateInterval::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jlong DateInterval::getFromDate() const
	{
		return callMethod<jlong>(
			"getFromDate",
			"()J"
		);
	}
	jlong DateInterval::getToDate() const
	{
		return callMethod<jlong>(
			"getToDate",
			"()J"
		);
	}
	jint DateInterval::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString DateInterval::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::util

