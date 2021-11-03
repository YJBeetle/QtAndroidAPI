#include "./DateIntervalInfo_PatternInfo.hpp"
#include "../util/ULocale.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.hpp"
#include "./DateIntervalInfo.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	DateIntervalInfo::DateIntervalInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DateIntervalInfo::DateIntervalInfo(android::icu::util::ULocale arg0)
		: JObject(
			"android.icu.text.DateIntervalInfo",
			"(Landroid/icu/util/ULocale;)V",
			arg0.object()
		) {}
	DateIntervalInfo::DateIntervalInfo(java::util::Locale arg0)
		: JObject(
			"android.icu.text.DateIntervalInfo",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	JObject DateIntervalInfo::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	android::icu::text::DateIntervalInfo DateIntervalInfo::cloneAsThawed()
	{
		return callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/DateIntervalInfo;"
		);
	}
	jboolean DateIntervalInfo::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::icu::text::DateIntervalInfo DateIntervalInfo::freeze()
	{
		return callObjectMethod(
			"freeze",
			"()Landroid/icu/text/DateIntervalInfo;"
		);
	}
	jboolean DateIntervalInfo::getDefaultOrder()
	{
		return callMethod<jboolean>(
			"getDefaultOrder",
			"()Z"
		);
	}
	JString DateIntervalInfo::getFallbackIntervalPattern()
	{
		return callObjectMethod(
			"getFallbackIntervalPattern",
			"()Ljava/lang/String;"
		);
	}
	android::icu::text::DateIntervalInfo_PatternInfo DateIntervalInfo::getIntervalPattern(JString arg0, jint arg1)
	{
		return callObjectMethod(
			"getIntervalPattern",
			"(Ljava/lang/String;I)Landroid/icu/text/DateIntervalInfo$PatternInfo;",
			arg0.object<jstring>(),
			arg1
		);
	}
	jint DateIntervalInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean DateIntervalInfo::isFrozen()
	{
		return callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	void DateIntervalInfo::setFallbackIntervalPattern(JString arg0)
	{
		callMethod<void>(
			"setFallbackIntervalPattern",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void DateIntervalInfo::setIntervalPattern(JString arg0, jint arg1, JString arg2)
	{
		callMethod<void>(
			"setIntervalPattern",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		);
	}
} // namespace android::icu::text

