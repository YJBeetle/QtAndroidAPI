#pragma once

#ifndef ANDROID_ICU_TEXT_DATETIMEPATTERNGENERATOR
#define ANDROID_ICU_TEXT_DATETIMEPATTERNGENERATOR

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::android::icu::text
{
	class DateTimePatternGenerator_PatternInfo;
}

namespace __jni_impl::android::icu::text
{
	class DateTimePatternGenerator : public __JniBaseClass
	{
	public:
		// Fields
		static jint DAY();
		static jint DAYPERIOD();
		static jint DAY_OF_WEEK_IN_MONTH();
		static jint DAY_OF_YEAR();
		static jint ERA();
		static jint FRACTIONAL_SECOND();
		static jint HOUR();
		static jint MATCH_ALL_FIELDS_LENGTH();
		static jint MATCH_HOUR_FIELD_LENGTH();
		static jint MATCH_NO_OPTIONS();
		static jint MINUTE();
		static jint MONTH();
		static jint QUARTER();
		static jint SECOND();
		static jint WEEKDAY();
		static jint WEEK_OF_MONTH();
		static jint WEEK_OF_YEAR();
		static jint YEAR();
		static jint ZONE();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject clone();
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::ULocale arg0);
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getInstance();
		jboolean isFrozen();
		QAndroidJniObject freeze();
		QAndroidJniObject cloneAsThawed();
		static QAndroidJniObject getEmptyInstance();
		QAndroidJniObject getBestPattern(jstring arg0, jint arg1);
		QAndroidJniObject getBestPattern(jstring arg0);
		QAndroidJniObject addPattern(jstring arg0, jboolean arg1, __jni_impl::android::icu::text::DateTimePatternGenerator_PatternInfo arg2);
		QAndroidJniObject getSkeleton(jstring arg0);
		QAndroidJniObject getBaseSkeleton(jstring arg0);
		QAndroidJniObject getSkeletons(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getBaseSkeletons(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject replaceFieldTypes(jstring arg0, jstring arg1);
		QAndroidJniObject replaceFieldTypes(jstring arg0, jstring arg1, jint arg2);
		void setDateTimeFormat(jstring arg0);
		QAndroidJniObject getDateTimeFormat();
		void setDecimal(jstring arg0);
		QAndroidJniObject getDecimal();
		void setAppendItemFormat(jint arg0, jstring arg1);
		QAndroidJniObject getAppendItemFormat(jint arg0);
		void setAppendItemName(jint arg0, jstring arg1);
		QAndroidJniObject getAppendItemName(jint arg0);
	};
} // namespace __jni_impl::android::icu::text

#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "DateTimePatternGenerator_PatternInfo.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	jint DateTimePatternGenerator::DAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"DAY");
	}
	jint DateTimePatternGenerator::DAYPERIOD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"DAYPERIOD");
	}
	jint DateTimePatternGenerator::DAY_OF_WEEK_IN_MONTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"DAY_OF_WEEK_IN_MONTH");
	}
	jint DateTimePatternGenerator::DAY_OF_YEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"DAY_OF_YEAR");
	}
	jint DateTimePatternGenerator::ERA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"ERA");
	}
	jint DateTimePatternGenerator::FRACTIONAL_SECOND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"FRACTIONAL_SECOND");
	}
	jint DateTimePatternGenerator::HOUR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"HOUR");
	}
	jint DateTimePatternGenerator::MATCH_ALL_FIELDS_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"MATCH_ALL_FIELDS_LENGTH");
	}
	jint DateTimePatternGenerator::MATCH_HOUR_FIELD_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"MATCH_HOUR_FIELD_LENGTH");
	}
	jint DateTimePatternGenerator::MATCH_NO_OPTIONS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"MATCH_NO_OPTIONS");
	}
	jint DateTimePatternGenerator::MINUTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"MINUTE");
	}
	jint DateTimePatternGenerator::MONTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"MONTH");
	}
	jint DateTimePatternGenerator::QUARTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"QUARTER");
	}
	jint DateTimePatternGenerator::SECOND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"SECOND");
	}
	jint DateTimePatternGenerator::WEEKDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"WEEKDAY");
	}
	jint DateTimePatternGenerator::WEEK_OF_MONTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"WEEK_OF_MONTH");
	}
	jint DateTimePatternGenerator::WEEK_OF_YEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"WEEK_OF_YEAR");
	}
	jint DateTimePatternGenerator::YEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"YEAR");
	}
	jint DateTimePatternGenerator::ZONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.text.DateTimePatternGenerator",
			"ZONE");
	}
	
	// Constructors
	void DateTimePatternGenerator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.DateTimePatternGenerator",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject DateTimePatternGenerator::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject DateTimePatternGenerator::getInstance(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateTimePatternGenerator",
			"getInstance",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/DateTimePatternGenerator;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DateTimePatternGenerator::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateTimePatternGenerator",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/icu/text/DateTimePatternGenerator;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DateTimePatternGenerator::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateTimePatternGenerator",
			"getInstance",
			"()Landroid/icu/text/DateTimePatternGenerator;");
	}
	jboolean DateTimePatternGenerator::isFrozen()
	{
		return __thiz.callMethod<jboolean>(
			"isFrozen",
			"()Z");
	}
	QAndroidJniObject DateTimePatternGenerator::freeze()
	{
		return __thiz.callObjectMethod(
			"freeze",
			"()Landroid/icu/text/DateTimePatternGenerator;");
	}
	QAndroidJniObject DateTimePatternGenerator::cloneAsThawed()
	{
		return __thiz.callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/DateTimePatternGenerator;");
	}
	QAndroidJniObject DateTimePatternGenerator::getEmptyInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.DateTimePatternGenerator",
			"getEmptyInstance",
			"()Landroid/icu/text/DateTimePatternGenerator;");
	}
	QAndroidJniObject DateTimePatternGenerator::getBestPattern(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getBestPattern",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject DateTimePatternGenerator::getBestPattern(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getBestPattern",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject DateTimePatternGenerator::addPattern(jstring arg0, jboolean arg1, __jni_impl::android::icu::text::DateTimePatternGenerator_PatternInfo arg2)
	{
		return __thiz.callObjectMethod(
			"addPattern",
			"(Ljava/lang/String;ZLandroid/icu/text/DateTimePatternGenerator$PatternInfo;)Landroid/icu/text/DateTimePatternGenerator;",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject DateTimePatternGenerator::getSkeleton(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getSkeleton",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject DateTimePatternGenerator::getBaseSkeleton(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getBaseSkeleton",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject DateTimePatternGenerator::getSkeletons(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getSkeletons",
			"(Ljava/util/Map;)Ljava/util/Map;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DateTimePatternGenerator::getBaseSkeletons(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getBaseSkeletons",
			"(Ljava/util/Set;)Ljava/util/Set;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DateTimePatternGenerator::replaceFieldTypes(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"replaceFieldTypes",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject DateTimePatternGenerator::replaceFieldTypes(jstring arg0, jstring arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"replaceFieldTypes",
			"(Ljava/lang/String;Ljava/lang/String;I)Ljava/lang/String;",
			arg0,
			arg1,
			arg2);
	}
	void DateTimePatternGenerator::setDateTimeFormat(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDateTimeFormat",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject DateTimePatternGenerator::getDateTimeFormat()
	{
		return __thiz.callObjectMethod(
			"getDateTimeFormat",
			"()Ljava/lang/String;");
	}
	void DateTimePatternGenerator::setDecimal(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDecimal",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject DateTimePatternGenerator::getDecimal()
	{
		return __thiz.callObjectMethod(
			"getDecimal",
			"()Ljava/lang/String;");
	}
	void DateTimePatternGenerator::setAppendItemFormat(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setAppendItemFormat",
			"(ILjava/lang/String;)V",
			arg0,
			arg1);
	}
	QAndroidJniObject DateTimePatternGenerator::getAppendItemFormat(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getAppendItemFormat",
			"(I)Ljava/lang/String;",
			arg0);
	}
	void DateTimePatternGenerator::setAppendItemName(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setAppendItemName",
			"(ILjava/lang/String;)V",
			arg0,
			arg1);
	}
	QAndroidJniObject DateTimePatternGenerator::getAppendItemName(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getAppendItemName",
			"(I)Ljava/lang/String;",
			arg0);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class DateTimePatternGenerator : public __jni_impl::android::icu::text::DateTimePatternGenerator
	{
	public:
		DateTimePatternGenerator(QAndroidJniObject obj) { __thiz = obj; }
		DateTimePatternGenerator()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_DATETIMEPATTERNGENERATOR

