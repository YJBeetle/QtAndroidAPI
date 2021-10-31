#include "../io/ObjectInputStream.hpp"
#include "../lang/StringBuffer.hpp"
#include "../lang/StringBuilder.hpp"
#include "./DateFormatSymbols.hpp"
#include "./FieldPosition.hpp"
#include "./NumberFormat.hpp"
#include "./ParsePosition.hpp"
#include "../util/Date.hpp"
#include "../util/Locale.hpp"
#include "./SimpleDateFormat.hpp"

namespace java::text
{
	// Fields
	
	SimpleDateFormat::SimpleDateFormat(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SimpleDateFormat::SimpleDateFormat()
	{
		__thiz = QAndroidJniObject(
			"java.text.SimpleDateFormat",
			"()V"
		);
	}
	SimpleDateFormat::SimpleDateFormat(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.SimpleDateFormat",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SimpleDateFormat::SimpleDateFormat(jstring arg0, java::text::DateFormatSymbols arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.SimpleDateFormat",
			"(Ljava/lang/String;Ljava/text/DateFormatSymbols;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	SimpleDateFormat::SimpleDateFormat(jstring arg0, java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.SimpleDateFormat",
			"(Ljava/lang/String;Ljava/util/Locale;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void SimpleDateFormat::applyLocalizedPattern(jstring arg0)
	{
		__thiz.callMethod<void>(
			"applyLocalizedPattern",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SimpleDateFormat::applyPattern(jstring arg0)
	{
		__thiz.callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jobject SimpleDateFormat::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean SimpleDateFormat::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject SimpleDateFormat::format(java::util::Date arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/util/Date;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject SimpleDateFormat::formatToCharacterIterator(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"formatToCharacterIterator",
			"(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;",
			arg0
		);
	}
	QAndroidJniObject SimpleDateFormat::get2DigitYearStart()
	{
		return __thiz.callObjectMethod(
			"get2DigitYearStart",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject SimpleDateFormat::getDateFormatSymbols()
	{
		return __thiz.callObjectMethod(
			"getDateFormatSymbols",
			"()Ljava/text/DateFormatSymbols;"
		);
	}
	jint SimpleDateFormat::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject SimpleDateFormat::parse(jstring arg0, java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Date;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SimpleDateFormat::set2DigitYearStart(java::util::Date arg0)
	{
		__thiz.callMethod<void>(
			"set2DigitYearStart",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	void SimpleDateFormat::setDateFormatSymbols(java::text::DateFormatSymbols arg0)
	{
		__thiz.callMethod<void>(
			"setDateFormatSymbols",
			"(Ljava/text/DateFormatSymbols;)V",
			arg0.__jniObject().object()
		);
	}
	jstring SimpleDateFormat::toLocalizedPattern()
	{
		return __thiz.callObjectMethod(
			"toLocalizedPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SimpleDateFormat::toPattern()
	{
		return __thiz.callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::text

