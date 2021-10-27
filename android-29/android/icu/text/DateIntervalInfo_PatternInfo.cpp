#include "./DateIntervalInfo_PatternInfo.hpp"

namespace android::icu::text
{
	// Fields
	
	DateIntervalInfo_PatternInfo::DateIntervalInfo_PatternInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DateIntervalInfo_PatternInfo::DateIntervalInfo_PatternInfo(jstring &arg0, jstring &arg1, jboolean &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateIntervalInfo$PatternInfo",
			"(Ljava/lang/String;Ljava/lang/String;Z)V",
			arg0,
			arg1,
			arg2
		);
	}
	DateIntervalInfo_PatternInfo::DateIntervalInfo_PatternInfo(const QString &arg0, const QString &arg1, jboolean &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateIntervalInfo$PatternInfo",
			"(Ljava/lang/String;Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	
	// Methods
	jboolean DateIntervalInfo_PatternInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jboolean DateIntervalInfo_PatternInfo::firstDateInPtnIsLaterDate()
	{
		return __thiz.callMethod<jboolean>(
			"firstDateInPtnIsLaterDate",
			"()Z"
		);
	}
	jstring DateIntervalInfo_PatternInfo::getFirstPart()
	{
		return __thiz.callObjectMethod(
			"getFirstPart",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateIntervalInfo_PatternInfo::getSecondPart()
	{
		return __thiz.callObjectMethod(
			"getSecondPart",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateIntervalInfo_PatternInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring DateIntervalInfo_PatternInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::icu::text

