#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./DateIntervalInfo_PatternInfo.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	DateIntervalInfo_PatternInfo::DateIntervalInfo_PatternInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DateIntervalInfo_PatternInfo::DateIntervalInfo_PatternInfo(JString arg0, JString arg1, jboolean arg2)
		: JObject(
			"android.icu.text.DateIntervalInfo$PatternInfo",
			"(Ljava/lang/String;Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	
	// Methods
	jboolean DateIntervalInfo_PatternInfo::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jboolean DateIntervalInfo_PatternInfo::firstDateInPtnIsLaterDate()
	{
		return callMethod<jboolean>(
			"firstDateInPtnIsLaterDate",
			"()Z"
		);
	}
	JString DateIntervalInfo_PatternInfo::getFirstPart()
	{
		return callObjectMethod(
			"getFirstPart",
			"()Ljava/lang/String;"
		);
	}
	JString DateIntervalInfo_PatternInfo::getSecondPart()
	{
		return callObjectMethod(
			"getSecondPart",
			"()Ljava/lang/String;"
		);
	}
	jint DateIntervalInfo_PatternInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString DateIntervalInfo_PatternInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

