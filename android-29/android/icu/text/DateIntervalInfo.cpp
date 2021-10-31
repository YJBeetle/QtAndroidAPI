#include "./DateIntervalInfo_PatternInfo.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "./DateIntervalInfo.hpp"

namespace android::icu::text
{
	// Fields
	
	DateIntervalInfo::DateIntervalInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DateIntervalInfo::DateIntervalInfo(android::icu::util::ULocale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateIntervalInfo",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object()
		);
	}
	DateIntervalInfo::DateIntervalInfo(java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateIntervalInfo",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jobject DateIntervalInfo::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject DateIntervalInfo::cloneAsThawed()
	{
		return __thiz.callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/DateIntervalInfo;"
		);
	}
	jboolean DateIntervalInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject DateIntervalInfo::freeze()
	{
		return __thiz.callObjectMethod(
			"freeze",
			"()Landroid/icu/text/DateIntervalInfo;"
		);
	}
	jboolean DateIntervalInfo::getDefaultOrder()
	{
		return __thiz.callMethod<jboolean>(
			"getDefaultOrder",
			"()Z"
		);
	}
	jstring DateIntervalInfo::getFallbackIntervalPattern()
	{
		return __thiz.callObjectMethod(
			"getFallbackIntervalPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject DateIntervalInfo::getIntervalPattern(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getIntervalPattern",
			"(Ljava/lang/String;I)Landroid/icu/text/DateIntervalInfo$PatternInfo;",
			arg0,
			arg1
		);
	}
	jint DateIntervalInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean DateIntervalInfo::isFrozen()
	{
		return __thiz.callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	void DateIntervalInfo::setFallbackIntervalPattern(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setFallbackIntervalPattern",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DateIntervalInfo::setIntervalPattern(jstring arg0, jint arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"setIntervalPattern",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::icu::text

