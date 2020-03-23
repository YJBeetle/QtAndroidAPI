#pragma once

#ifndef ANDROID_ICU_TEXT_DATETIMEPATTERNGENERATOR_PATTERNINFO
#define ANDROID_ICU_TEXT_DATETIMEPATTERNGENERATOR_PATTERNINFO

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::text
{
	class DateTimePatternGenerator_PatternInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint BASE_CONFLICT();
		static jint CONFLICT();
		static jint OK();
		QAndroidJniObject conflictingPattern();
		jint status();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	jint DateTimePatternGenerator_PatternInfo::BASE_CONFLICT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator$PatternInfo",
			"BASE_CONFLICT");
	}
	jint DateTimePatternGenerator_PatternInfo::CONFLICT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator$PatternInfo",
			"CONFLICT");
	}
	jint DateTimePatternGenerator_PatternInfo::OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator$PatternInfo",
			"OK");
	}
	QAndroidJniObject DateTimePatternGenerator_PatternInfo::conflictingPattern()
	{
		return __thiz.getObjectField(
			"conflictingPattern",
			"Ljava/lang/String;");
	}
	jint DateTimePatternGenerator_PatternInfo::status()
	{
		return __thiz.getField<jint>(
			"status");
	}
	
	// Constructors
	void DateTimePatternGenerator_PatternInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateTimePatternGenerator$PatternInfo",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class DateTimePatternGenerator_PatternInfo : public __jni_impl::android::icu::text::DateTimePatternGenerator_PatternInfo
	{
	public:
		DateTimePatternGenerator_PatternInfo(QAndroidJniObject obj) { __thiz = obj; }
		DateTimePatternGenerator_PatternInfo()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_DATETIMEPATTERNGENERATOR_PATTERNINFO

