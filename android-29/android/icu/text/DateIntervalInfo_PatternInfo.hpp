#pragma once

#ifndef ANDROID_ICU_TEXT_DATEINTERVALINFO_PATTERNINFO
#define ANDROID_ICU_TEXT_DATEINTERVALINFO_PATTERNINFO

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::text
{
	class DateIntervalInfo_PatternInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jboolean arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jboolean firstDateInPtnIsLaterDate();
		QAndroidJniObject getFirstPart();
		QAndroidJniObject getSecondPart();
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void DateIntervalInfo_PatternInfo::__constructor(jstring arg0, jstring arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateIntervalInfo$PatternInfo",
			"(Ljava/lang/String;Ljava/lang/String;Z)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
	jboolean DateIntervalInfo_PatternInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject DateIntervalInfo_PatternInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint DateIntervalInfo_PatternInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jboolean DateIntervalInfo_PatternInfo::firstDateInPtnIsLaterDate()
	{
		return __thiz.callMethod<jboolean>(
			"firstDateInPtnIsLaterDate",
			"()Z");
	}
	QAndroidJniObject DateIntervalInfo_PatternInfo::getFirstPart()
	{
		return __thiz.callObjectMethod(
			"getFirstPart",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject DateIntervalInfo_PatternInfo::getSecondPart()
	{
		return __thiz.callObjectMethod(
			"getSecondPart",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class DateIntervalInfo_PatternInfo : public __jni_impl::android::icu::text::DateIntervalInfo_PatternInfo
	{
	public:
		DateIntervalInfo_PatternInfo(QAndroidJniObject obj) { __thiz = obj; }
		DateIntervalInfo_PatternInfo(jstring arg0, jstring arg1, jboolean arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_DATEINTERVALINFO_PATTERNINFO

