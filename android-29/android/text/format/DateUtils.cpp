#include "../../content/Context.hpp"
#include "../../../java/lang/StringBuilder.hpp"
#include "../../../java/util/Formatter.hpp"
#include "./DateUtils.hpp"

namespace android::text::format
{
	// Fields
	jstring DateUtils::ABBREV_MONTH_FORMAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.format.DateUtils",
			"ABBREV_MONTH_FORMAT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateUtils::ABBREV_WEEKDAY_FORMAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.format.DateUtils",
			"ABBREV_WEEKDAY_FORMAT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jlong DateUtils::DAY_IN_MILLIS()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.text.format.DateUtils",
			"DAY_IN_MILLIS"
		);
	}
	jint DateUtils::FORMAT_12HOUR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_12HOUR"
		);
	}
	jint DateUtils::FORMAT_24HOUR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_24HOUR"
		);
	}
	jint DateUtils::FORMAT_ABBREV_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_ABBREV_ALL"
		);
	}
	jint DateUtils::FORMAT_ABBREV_MONTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_ABBREV_MONTH"
		);
	}
	jint DateUtils::FORMAT_ABBREV_RELATIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_ABBREV_RELATIVE"
		);
	}
	jint DateUtils::FORMAT_ABBREV_TIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_ABBREV_TIME"
		);
	}
	jint DateUtils::FORMAT_ABBREV_WEEKDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_ABBREV_WEEKDAY"
		);
	}
	jint DateUtils::FORMAT_CAP_AMPM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_CAP_AMPM"
		);
	}
	jint DateUtils::FORMAT_CAP_MIDNIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_CAP_MIDNIGHT"
		);
	}
	jint DateUtils::FORMAT_CAP_NOON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_CAP_NOON"
		);
	}
	jint DateUtils::FORMAT_CAP_NOON_MIDNIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_CAP_NOON_MIDNIGHT"
		);
	}
	jint DateUtils::FORMAT_NO_MIDNIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_NO_MIDNIGHT"
		);
	}
	jint DateUtils::FORMAT_NO_MONTH_DAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_NO_MONTH_DAY"
		);
	}
	jint DateUtils::FORMAT_NO_NOON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_NO_NOON"
		);
	}
	jint DateUtils::FORMAT_NO_NOON_MIDNIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_NO_NOON_MIDNIGHT"
		);
	}
	jint DateUtils::FORMAT_NO_YEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_NO_YEAR"
		);
	}
	jint DateUtils::FORMAT_NUMERIC_DATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_NUMERIC_DATE"
		);
	}
	jint DateUtils::FORMAT_SHOW_DATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_SHOW_DATE"
		);
	}
	jint DateUtils::FORMAT_SHOW_TIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_SHOW_TIME"
		);
	}
	jint DateUtils::FORMAT_SHOW_WEEKDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_SHOW_WEEKDAY"
		);
	}
	jint DateUtils::FORMAT_SHOW_YEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_SHOW_YEAR"
		);
	}
	jint DateUtils::FORMAT_UTC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"FORMAT_UTC"
		);
	}
	jlong DateUtils::HOUR_IN_MILLIS()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.text.format.DateUtils",
			"HOUR_IN_MILLIS"
		);
	}
	jstring DateUtils::HOUR_MINUTE_24()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.format.DateUtils",
			"HOUR_MINUTE_24",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint DateUtils::LENGTH_LONG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"LENGTH_LONG"
		);
	}
	jint DateUtils::LENGTH_MEDIUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"LENGTH_MEDIUM"
		);
	}
	jint DateUtils::LENGTH_SHORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"LENGTH_SHORT"
		);
	}
	jint DateUtils::LENGTH_SHORTER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"LENGTH_SHORTER"
		);
	}
	jint DateUtils::LENGTH_SHORTEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.DateUtils",
			"LENGTH_SHORTEST"
		);
	}
	jlong DateUtils::MINUTE_IN_MILLIS()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.text.format.DateUtils",
			"MINUTE_IN_MILLIS"
		);
	}
	jstring DateUtils::MONTH_DAY_FORMAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.format.DateUtils",
			"MONTH_DAY_FORMAT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateUtils::MONTH_FORMAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.format.DateUtils",
			"MONTH_FORMAT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateUtils::NUMERIC_MONTH_FORMAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.format.DateUtils",
			"NUMERIC_MONTH_FORMAT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jlong DateUtils::SECOND_IN_MILLIS()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.text.format.DateUtils",
			"SECOND_IN_MILLIS"
		);
	}
	jstring DateUtils::WEEKDAY_FORMAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.format.DateUtils",
			"WEEKDAY_FORMAT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jlong DateUtils::WEEK_IN_MILLIS()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.text.format.DateUtils",
			"WEEK_IN_MILLIS"
		);
	}
	jstring DateUtils::YEAR_FORMAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.format.DateUtils",
			"YEAR_FORMAT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DateUtils::YEAR_FORMAT_TWO_DIGITS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.format.DateUtils",
			"YEAR_FORMAT_TWO_DIGITS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jlong DateUtils::YEAR_IN_MILLIS()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.text.format.DateUtils",
			"YEAR_IN_MILLIS"
		);
	}
	jintArray DateUtils::sameMonthTable()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.format.DateUtils",
			"sameMonthTable",
			"[I"
		).object<jintArray>();
	}
	jintArray DateUtils::sameYearTable()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.format.DateUtils",
			"sameYearTable",
			"[I"
		).object<jintArray>();
	}
	
	DateUtils::DateUtils(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DateUtils::DateUtils()
	{
		__thiz = QAndroidJniObject(
			"android.text.format.DateUtils",
			"()V"
		);
	}
	
	// Methods
	jstring DateUtils::formatDateRange(android::content::Context arg0, jlong arg1, jlong arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateUtils",
			"formatDateRange",
			"(Landroid/content/Context;JJI)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		).object<jstring>();
	}
	QAndroidJniObject DateUtils::formatDateRange(android::content::Context arg0, java::util::Formatter arg1, jlong arg2, jlong arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateUtils",
			"formatDateRange",
			"(Landroid/content/Context;Ljava/util/Formatter;JJI)Ljava/util/Formatter;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject DateUtils::formatDateRange(android::content::Context arg0, java::util::Formatter arg1, jlong arg2, jlong arg3, jint arg4, jstring arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateUtils",
			"formatDateRange",
			"(Landroid/content/Context;Ljava/util/Formatter;JJILjava/lang/String;)Ljava/util/Formatter;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	QAndroidJniObject DateUtils::formatDateRange(android::content::Context arg0, java::util::Formatter arg1, jlong arg2, jlong arg3, jint arg4, const QString &arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateUtils",
			"formatDateRange",
			"(Landroid/content/Context;Ljava/util/Formatter;JJILjava/lang/String;)Ljava/util/Formatter;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4,
			QAndroidJniObject::fromString(arg5).object<jstring>()
		);
	}
	jstring DateUtils::formatDateTime(android::content::Context arg0, jlong arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateUtils",
			"formatDateTime",
			"(Landroid/content/Context;JI)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		).object<jstring>();
	}
	jstring DateUtils::formatElapsedTime(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateUtils",
			"formatElapsedTime",
			"(J)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring DateUtils::formatElapsedTime(java::lang::StringBuilder arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateUtils",
			"formatElapsedTime",
			"(Ljava/lang/StringBuilder;J)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jstring>();
	}
	jstring DateUtils::formatSameDayTime(jlong arg0, jlong arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateUtils",
			"formatSameDayTime",
			"(JJII)Ljava/lang/CharSequence;",
			arg0,
			arg1,
			arg2,
			arg3
		).object<jstring>();
	}
	jstring DateUtils::getAMPMString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateUtils",
			"getAMPMString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring DateUtils::getDayOfWeekString(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateUtils",
			"getDayOfWeekString",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring DateUtils::getMonthString(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateUtils",
			"getMonthString",
			"(II)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring DateUtils::getRelativeDateTimeString(android::content::Context arg0, jlong arg1, jlong arg2, jlong arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateUtils",
			"getRelativeDateTimeString",
			"(Landroid/content/Context;JJJI)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		).object<jstring>();
	}
	jstring DateUtils::getRelativeTimeSpanString(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateUtils",
			"getRelativeTimeSpanString",
			"(J)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jstring DateUtils::getRelativeTimeSpanString(android::content::Context arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateUtils",
			"getRelativeTimeSpanString",
			"(Landroid/content/Context;J)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1
		).object<jstring>();
	}
	jstring DateUtils::getRelativeTimeSpanString(android::content::Context arg0, jlong arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateUtils",
			"getRelativeTimeSpanString",
			"(Landroid/content/Context;JZ)Ljava/lang/CharSequence;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		).object<jstring>();
	}
	jstring DateUtils::getRelativeTimeSpanString(jlong arg0, jlong arg1, jlong arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateUtils",
			"getRelativeTimeSpanString",
			"(JJJ)Ljava/lang/CharSequence;",
			arg0,
			arg1,
			arg2
		).object<jstring>();
	}
	jstring DateUtils::getRelativeTimeSpanString(jlong arg0, jlong arg1, jlong arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.DateUtils",
			"getRelativeTimeSpanString",
			"(JJJI)Ljava/lang/CharSequence;",
			arg0,
			arg1,
			arg2,
			arg3
		).object<jstring>();
	}
	jboolean DateUtils::isToday(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.format.DateUtils",
			"isToday",
			"(J)Z",
			arg0
		);
	}
} // namespace android::text::format

