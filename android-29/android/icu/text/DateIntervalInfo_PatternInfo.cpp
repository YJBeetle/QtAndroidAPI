#include "./DateIntervalInfo_PatternInfo.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	DateIntervalInfo_PatternInfo::DateIntervalInfo_PatternInfo(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DateIntervalInfo_PatternInfo::DateIntervalInfo_PatternInfo(jstring arg0, jstring arg1, jboolean arg2)
		: __JniBaseClass(
			"android.icu.text.DateIntervalInfo$PatternInfo",
			"(Ljava/lang/String;Ljava/lang/String;Z)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jboolean DateIntervalInfo_PatternInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean DateIntervalInfo_PatternInfo::firstDateInPtnIsLaterDate()
	{
		return callMethod<jboolean>(
			"firstDateInPtnIsLaterDate",
			"()Z"
		);
	}
	jstring DateIntervalInfo_PatternInfo::getFirstPart()
	{
		return callObjectMethod(
			"getFirstPart",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateIntervalInfo_PatternInfo::getSecondPart()
	{
		return callObjectMethod(
			"getSecondPart",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateIntervalInfo_PatternInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring DateIntervalInfo_PatternInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text

