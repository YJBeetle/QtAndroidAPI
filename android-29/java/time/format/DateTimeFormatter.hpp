#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Boolean;
}
namespace __jni_impl::java::lang
{
	class RuntimeException;
}
namespace __jni_impl::java::text
{
	class Format;
}
namespace __jni_impl::java::text
{
	class ParsePosition;
}
namespace __jni_impl::java::time
{
	class Period;
}
namespace __jni_impl::java::time
{
	class ZoneId;
}
namespace __jni_impl::java::time::format
{
	class DateTimeParseException;
}
namespace __jni_impl::java::time::format
{
	class DecimalStyle;
}
namespace __jni_impl::java::time::format
{
	class FormatStyle;
}
namespace __jni_impl::java::time::format
{
	class ResolverStyle;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::java::time::format
{
	class DateTimeFormatter : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject BASIC_ISO_DATE();
		static QAndroidJniObject ISO_DATE();
		static QAndroidJniObject ISO_DATE_TIME();
		static QAndroidJniObject ISO_INSTANT();
		static QAndroidJniObject ISO_LOCAL_DATE();
		static QAndroidJniObject ISO_LOCAL_DATE_TIME();
		static QAndroidJniObject ISO_LOCAL_TIME();
		static QAndroidJniObject ISO_OFFSET_DATE();
		static QAndroidJniObject ISO_OFFSET_DATE_TIME();
		static QAndroidJniObject ISO_OFFSET_TIME();
		static QAndroidJniObject ISO_ORDINAL_DATE();
		static QAndroidJniObject ISO_TIME();
		static QAndroidJniObject ISO_WEEK_DATE();
		static QAndroidJniObject ISO_ZONED_DATE_TIME();
		static QAndroidJniObject RFC_1123_DATE_TIME();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject ofLocalizedDate(__jni_impl::java::time::format::FormatStyle arg0);
		static QAndroidJniObject ofLocalizedDateTime(__jni_impl::java::time::format::FormatStyle arg0);
		static QAndroidJniObject ofLocalizedDateTime(__jni_impl::java::time::format::FormatStyle arg0, __jni_impl::java::time::format::FormatStyle arg1);
		static QAndroidJniObject ofLocalizedTime(__jni_impl::java::time::format::FormatStyle arg0);
		static QAndroidJniObject ofPattern(jstring arg0);
		static QAndroidJniObject ofPattern(const QString &arg0);
		static QAndroidJniObject ofPattern(jstring arg0, __jni_impl::java::util::Locale arg1);
		static QAndroidJniObject ofPattern(const QString &arg0, __jni_impl::java::util::Locale arg1);
		static QAndroidJniObject parsedExcessDays();
		static QAndroidJniObject parsedLeapSecond();
		jstring format(__jni_impl::__JniBaseClass arg0);
		void formatTo(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject getChronology();
		QAndroidJniObject getDecimalStyle();
		QAndroidJniObject getLocale();
		QAndroidJniObject getResolverFields();
		QAndroidJniObject getResolverStyle();
		QAndroidJniObject getZone();
		QAndroidJniObject localizedBy(__jni_impl::java::util::Locale arg0);
		jobject parse(jstring arg0, __jni_impl::__JniBaseClass arg1);
		jobject parse(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject parse(jstring arg0);
		QAndroidJniObject parse(const QString &arg0);
		QAndroidJniObject parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject parse(const QString &arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject parseBest(jstring arg0, jarray arg1);
		QAndroidJniObject parseBest(const QString &arg0, jarray arg1);
		QAndroidJniObject parseUnresolved(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject parseUnresolved(const QString &arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject toFormat();
		QAndroidJniObject toFormat(__jni_impl::__JniBaseClass arg0);
		jstring toString();
		QAndroidJniObject withChronology(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject withDecimalStyle(__jni_impl::java::time::format::DecimalStyle arg0);
		QAndroidJniObject withLocale(__jni_impl::java::util::Locale arg0);
		QAndroidJniObject withResolverFields(jarray arg0);
		QAndroidJniObject withResolverFields(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject withResolverStyle(__jni_impl::java::time::format::ResolverStyle arg0);
		QAndroidJniObject withZone(__jni_impl::java::time::ZoneId arg0);
	};
} // namespace __jni_impl::java::time::format

#include "../../lang/Boolean.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../text/Format.hpp"
#include "../../text/ParsePosition.hpp"
#include "../Period.hpp"
#include "../ZoneId.hpp"
#include "./DateTimeParseException.hpp"
#include "./DecimalStyle.hpp"
#include "./FormatStyle.hpp"
#include "./ResolverStyle.hpp"
#include "../../util/Locale.hpp"

namespace __jni_impl::java::time::format
{
	// Fields
	QAndroidJniObject DateTimeFormatter::BASIC_ISO_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"BASIC_ISO_DATE",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_DATE",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_DATE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_DATE_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_INSTANT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_INSTANT",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_LOCAL_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_LOCAL_DATE",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_LOCAL_DATE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_LOCAL_DATE_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_LOCAL_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_LOCAL_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_OFFSET_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_OFFSET_DATE",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_OFFSET_DATE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_OFFSET_DATE_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_OFFSET_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_OFFSET_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_ORDINAL_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_ORDINAL_DATE",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_WEEK_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_WEEK_DATE",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::ISO_ZONED_DATE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"ISO_ZONED_DATE_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatter::RFC_1123_DATE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.DateTimeFormatter",
			"RFC_1123_DATE_TIME",
			"Ljava/time/format/DateTimeFormatter;"
		);
	}
	
	// Constructors
	void DateTimeFormatter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.format.DateTimeFormatter",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject DateTimeFormatter::ofLocalizedDate(__jni_impl::java::time::format::FormatStyle arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofLocalizedDate",
			"(Ljava/time/format/FormatStyle;)Ljava/time/format/DateTimeFormatter;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::ofLocalizedDateTime(__jni_impl::java::time::format::FormatStyle arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofLocalizedDateTime",
			"(Ljava/time/format/FormatStyle;)Ljava/time/format/DateTimeFormatter;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::ofLocalizedDateTime(__jni_impl::java::time::format::FormatStyle arg0, __jni_impl::java::time::format::FormatStyle arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofLocalizedDateTime",
			"(Ljava/time/format/FormatStyle;Ljava/time/format/FormatStyle;)Ljava/time/format/DateTimeFormatter;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::ofLocalizedTime(__jni_impl::java::time::format::FormatStyle arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofLocalizedTime",
			"(Ljava/time/format/FormatStyle;)Ljava/time/format/DateTimeFormatter;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::ofPattern(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofPattern",
			"(Ljava/lang/String;)Ljava/time/format/DateTimeFormatter;",
			arg0
		);
	}
	QAndroidJniObject DateTimeFormatter::ofPattern(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofPattern",
			"(Ljava/lang/String;)Ljava/time/format/DateTimeFormatter;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DateTimeFormatter::ofPattern(jstring arg0, __jni_impl::java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofPattern",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/time/format/DateTimeFormatter;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::ofPattern(const QString &arg0, __jni_impl::java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"ofPattern",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/time/format/DateTimeFormatter;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::parsedExcessDays()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"parsedExcessDays",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	QAndroidJniObject DateTimeFormatter::parsedLeapSecond()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatter",
			"parsedLeapSecond",
			"()Ljava/time/temporal/TemporalQuery;"
		);
	}
	jstring DateTimeFormatter::format(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	void DateTimeFormatter::formatTo(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"formatTo",
			"(Ljava/time/temporal/TemporalAccessor;Ljava/lang/Appendable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::getChronology()
	{
		return __thiz.callObjectMethod(
			"getChronology",
			"()Ljava/time/chrono/Chronology;"
		);
	}
	QAndroidJniObject DateTimeFormatter::getDecimalStyle()
	{
		return __thiz.callObjectMethod(
			"getDecimalStyle",
			"()Ljava/time/format/DecimalStyle;"
		);
	}
	QAndroidJniObject DateTimeFormatter::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	QAndroidJniObject DateTimeFormatter::getResolverFields()
	{
		return __thiz.callObjectMethod(
			"getResolverFields",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject DateTimeFormatter::getResolverStyle()
	{
		return __thiz.callObjectMethod(
			"getResolverStyle",
			"()Ljava/time/format/ResolverStyle;"
		);
	}
	QAndroidJniObject DateTimeFormatter::getZone()
	{
		return __thiz.callObjectMethod(
			"getZone",
			"()Ljava/time/ZoneId;"
		);
	}
	QAndroidJniObject DateTimeFormatter::localizedBy(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"localizedBy",
			"(Ljava/util/Locale;)Ljava/time/format/DateTimeFormatter;",
			arg0.__jniObject().object()
		);
	}
	jobject DateTimeFormatter::parse(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject DateTimeFormatter::parse(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/CharSequence;Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject DateTimeFormatter::parse(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/temporal/TemporalAccessor;",
			arg0
		);
	}
	QAndroidJniObject DateTimeFormatter::parse(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/CharSequence;)Ljava/time/temporal/TemporalAccessor;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DateTimeFormatter::parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Ljava/time/temporal/TemporalAccessor;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::parse(const QString &arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Ljava/time/temporal/TemporalAccessor;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::parseBest(jstring arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"parseBest",
			"(Ljava/lang/CharSequence;[Ljava/time/temporal/TemporalQuery;)Ljava/time/temporal/TemporalAccessor;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DateTimeFormatter::parseBest(const QString &arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"parseBest",
			"(Ljava/lang/CharSequence;[Ljava/time/temporal/TemporalQuery;)Ljava/time/temporal/TemporalAccessor;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject DateTimeFormatter::parseUnresolved(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseUnresolved",
			"(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Ljava/time/temporal/TemporalAccessor;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::parseUnresolved(const QString &arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseUnresolved",
			"(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Ljava/time/temporal/TemporalAccessor;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::toFormat()
	{
		return __thiz.callObjectMethod(
			"toFormat",
			"()Ljava/text/Format;"
		);
	}
	QAndroidJniObject DateTimeFormatter::toFormat(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"toFormat",
			"(Ljava/time/temporal/TemporalQuery;)Ljava/text/Format;",
			arg0.__jniObject().object()
		);
	}
	jstring DateTimeFormatter::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject DateTimeFormatter::withChronology(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"withChronology",
			"(Ljava/time/chrono/Chronology;)Ljava/time/format/DateTimeFormatter;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::withDecimalStyle(__jni_impl::java::time::format::DecimalStyle arg0)
	{
		return __thiz.callObjectMethod(
			"withDecimalStyle",
			"(Ljava/time/format/DecimalStyle;)Ljava/time/format/DateTimeFormatter;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::withLocale(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"withLocale",
			"(Ljava/util/Locale;)Ljava/time/format/DateTimeFormatter;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::withResolverFields(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"withResolverFields",
			"([Ljava/time/temporal/TemporalField;)Ljava/time/format/DateTimeFormatter;",
			arg0
		);
	}
	QAndroidJniObject DateTimeFormatter::withResolverFields(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"withResolverFields",
			"(Ljava/util/Set;)Ljava/time/format/DateTimeFormatter;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::withResolverStyle(__jni_impl::java::time::format::ResolverStyle arg0)
	{
		return __thiz.callObjectMethod(
			"withResolverStyle",
			"(Ljava/time/format/ResolverStyle;)Ljava/time/format/DateTimeFormatter;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatter::withZone(__jni_impl::java::time::ZoneId arg0)
	{
		return __thiz.callObjectMethod(
			"withZone",
			"(Ljava/time/ZoneId;)Ljava/time/format/DateTimeFormatter;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::time::format

namespace java::time::format
{
	class DateTimeFormatter : public __jni_impl::java::time::format::DateTimeFormatter
	{
	public:
		DateTimeFormatter(QAndroidJniObject obj) { __thiz = obj; }
		DateTimeFormatter()
		{
			__constructor();
		}
	};
} // namespace java::time::format

