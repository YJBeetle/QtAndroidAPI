#pragma once

#ifndef JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER
#define JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::time::format
{
	class DateTimeFormatter;
}
namespace __jni_impl::java::time::format
{
	class FormatStyle;
}
namespace __jni_impl::java::time::format
{
	class SignStyle;
}
namespace __jni_impl::java::time::format
{
	class TextStyle;
}
namespace __jni_impl::java::time
{
	class ZoneId;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::time::format
{
	class ResolverStyle;
}

namespace __jni_impl::java::time::format
{
	class DateTimeFormatterBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject append(__jni_impl::java::time::format::DateTimeFormatter arg0);
		QAndroidJniObject appendLocalized(__jni_impl::java::time::format::FormatStyle arg0, __jni_impl::java::time::format::FormatStyle arg1);
		QAndroidJniObject appendValue(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject appendValue(__jni_impl::__JniBaseClass arg0, jint arg1);
		QAndroidJniObject appendValue(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, __jni_impl::java::time::format::SignStyle arg3);
		QAndroidJniObject appendLiteral(jstring arg0);
		QAndroidJniObject appendLiteral(jchar arg0);
		QAndroidJniObject parseCaseInsensitive();
		QAndroidJniObject appendOffsetId();
		QAndroidJniObject optionalStart();
		QAndroidJniObject appendFraction(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, jboolean arg3);
		QAndroidJniObject parseLenient();
		QAndroidJniObject parseStrict();
		QAndroidJniObject parseCaseSensitive();
		QAndroidJniObject appendZoneRegionId();
		QAndroidJniObject appendInstant(jint arg0);
		QAndroidJniObject appendInstant();
		QAndroidJniObject appendOffset(jstring arg0, jstring arg1);
		QAndroidJniObject appendText(__jni_impl::__JniBaseClass arg0, __jni_impl::java::time::format::TextStyle arg1);
		QAndroidJniObject appendText(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject appendText(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject optionalEnd();
		QAndroidJniObject padNext(jint arg0, jchar arg1);
		QAndroidJniObject padNext(jint arg0);
		QAndroidJniObject appendZoneText(__jni_impl::java::time::format::TextStyle arg0);
		QAndroidJniObject appendZoneText(__jni_impl::java::time::format::TextStyle arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject appendZoneId();
		QAndroidJniObject appendGenericZoneText(__jni_impl::java::time::format::TextStyle arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject appendGenericZoneText(__jni_impl::java::time::format::TextStyle arg0);
		QAndroidJniObject appendLocalizedOffset(__jni_impl::java::time::format::TextStyle arg0);
		QAndroidJniObject appendValueReduced(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, __jni_impl::__JniBaseClass arg3);
		QAndroidJniObject appendValueReduced(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, jint arg3);
		static jstring getLocalizedDateTimePattern(__jni_impl::java::time::format::FormatStyle arg0, __jni_impl::java::time::format::FormatStyle arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::java::util::Locale arg3);
		QAndroidJniObject parseDefaulting(__jni_impl::__JniBaseClass arg0, jlong arg1);
		QAndroidJniObject appendZoneOrOffsetId();
		QAndroidJniObject appendChronologyId();
		QAndroidJniObject appendChronologyText(__jni_impl::java::time::format::TextStyle arg0);
		QAndroidJniObject appendOptional(__jni_impl::java::time::format::DateTimeFormatter arg0);
		QAndroidJniObject appendPattern(jstring arg0);
		QAndroidJniObject toFormatter();
		QAndroidJniObject toFormatter(__jni_impl::java::util::Locale arg0);
	};
} // namespace __jni_impl::java::time::format

#include "DateTimeFormatter.hpp"
#include "FormatStyle.hpp"
#include "SignStyle.hpp"
#include "TextStyle.hpp"
#include "../ZoneId.hpp"
#include "../../util/Locale.hpp"
#include "ResolverStyle.hpp"

namespace __jni_impl::java::time::format
{
	// Fields
	
	// Constructors
	void DateTimeFormatterBuilder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.format.DateTimeFormatterBuilder",
			"()V");
	}
	
	// Methods
	QAndroidJniObject DateTimeFormatterBuilder::append(__jni_impl::java::time::format::DateTimeFormatter arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendLocalized(__jni_impl::java::time::format::FormatStyle arg0, __jni_impl::java::time::format::FormatStyle arg1)
	{
		return __thiz.callObjectMethod(
			"appendLocalized",
			"(Ljava/time/format/FormatStyle;Ljava/time/format/FormatStyle;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendValue(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"appendValue",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendValue(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"appendValue",
			"(Ljava/time/temporal/TemporalField;I)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendValue(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, __jni_impl::java::time::format::SignStyle arg3)
	{
		return __thiz.callObjectMethod(
			"appendValue",
			"(Ljava/time/temporal/TemporalField;IILjava/time/format/SignStyle;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendLiteral(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"appendLiteral",
			"(Ljava/lang/String;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendLiteral(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"appendLiteral",
			"(C)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::parseCaseInsensitive()
	{
		return __thiz.callObjectMethod(
			"parseCaseInsensitive",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendOffsetId()
	{
		return __thiz.callObjectMethod(
			"appendOffsetId",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::optionalStart()
	{
		return __thiz.callObjectMethod(
			"optionalStart",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendFraction(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, jboolean arg3)
	{
		return __thiz.callObjectMethod(
			"appendFraction",
			"(Ljava/time/temporal/TemporalField;IIZ)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::parseLenient()
	{
		return __thiz.callObjectMethod(
			"parseLenient",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::parseStrict()
	{
		return __thiz.callObjectMethod(
			"parseStrict",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::parseCaseSensitive()
	{
		return __thiz.callObjectMethod(
			"parseCaseSensitive",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendZoneRegionId()
	{
		return __thiz.callObjectMethod(
			"appendZoneRegionId",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendInstant(jint arg0)
	{
		return __thiz.callObjectMethod(
			"appendInstant",
			"(I)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendInstant()
	{
		return __thiz.callObjectMethod(
			"appendInstant",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendOffset(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"appendOffset",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendText(__jni_impl::__JniBaseClass arg0, __jni_impl::java::time::format::TextStyle arg1)
	{
		return __thiz.callObjectMethod(
			"appendText",
			"(Ljava/time/temporal/TemporalField;Ljava/time/format/TextStyle;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendText(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"appendText",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendText(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"appendText",
			"(Ljava/time/temporal/TemporalField;Ljava/util/Map;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::optionalEnd()
	{
		return __thiz.callObjectMethod(
			"optionalEnd",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::padNext(jint arg0, jchar arg1)
	{
		return __thiz.callObjectMethod(
			"padNext",
			"(IC)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::padNext(jint arg0)
	{
		return __thiz.callObjectMethod(
			"padNext",
			"(I)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendZoneText(__jni_impl::java::time::format::TextStyle arg0)
	{
		return __thiz.callObjectMethod(
			"appendZoneText",
			"(Ljava/time/format/TextStyle;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendZoneText(__jni_impl::java::time::format::TextStyle arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"appendZoneText",
			"(Ljava/time/format/TextStyle;Ljava/util/Set;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendZoneId()
	{
		return __thiz.callObjectMethod(
			"appendZoneId",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendGenericZoneText(__jni_impl::java::time::format::TextStyle arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"appendGenericZoneText",
			"(Ljava/time/format/TextStyle;Ljava/util/Set;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendGenericZoneText(__jni_impl::java::time::format::TextStyle arg0)
	{
		return __thiz.callObjectMethod(
			"appendGenericZoneText",
			"(Ljava/time/format/TextStyle;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendLocalizedOffset(__jni_impl::java::time::format::TextStyle arg0)
	{
		return __thiz.callObjectMethod(
			"appendLocalizedOffset",
			"(Ljava/time/format/TextStyle;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendValueReduced(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, __jni_impl::__JniBaseClass arg3)
	{
		return __thiz.callObjectMethod(
			"appendValueReduced",
			"(Ljava/time/temporal/TemporalField;IILjava/time/chrono/ChronoLocalDate;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendValueReduced(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"appendValueReduced",
			"(Ljava/time/temporal/TemporalField;III)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	jstring DateTimeFormatterBuilder::getLocalizedDateTimePattern(__jni_impl::java::time::format::FormatStyle arg0, __jni_impl::java::time::format::FormatStyle arg1, __jni_impl::__JniBaseClass arg2, __jni_impl::java::util::Locale arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.DateTimeFormatterBuilder",
			"getLocalizedDateTimePattern",
			"(Ljava/time/format/FormatStyle;Ljava/time/format/FormatStyle;Ljava/time/chrono/Chronology;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject DateTimeFormatterBuilder::parseDefaulting(__jni_impl::__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"parseDefaulting",
			"(Ljava/time/temporal/TemporalField;J)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendZoneOrOffsetId()
	{
		return __thiz.callObjectMethod(
			"appendZoneOrOffsetId",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendChronologyId()
	{
		return __thiz.callObjectMethod(
			"appendChronologyId",
			"()Ljava/time/format/DateTimeFormatterBuilder;"
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendChronologyText(__jni_impl::java::time::format::TextStyle arg0)
	{
		return __thiz.callObjectMethod(
			"appendChronologyText",
			"(Ljava/time/format/TextStyle;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendOptional(__jni_impl::java::time::format::DateTimeFormatter arg0)
	{
		return __thiz.callObjectMethod(
			"appendOptional",
			"(Ljava/time/format/DateTimeFormatter;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::appendPattern(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"appendPattern",
			"(Ljava/lang/String;)Ljava/time/format/DateTimeFormatterBuilder;",
			arg0
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::toFormatter()
	{
		return __thiz.callObjectMethod(
			"toFormatter",
			"()Ljava/time/format/DateTimeFormatter;"
		);
	}
	QAndroidJniObject DateTimeFormatterBuilder::toFormatter(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"toFormatter",
			"(Ljava/util/Locale;)Ljava/time/format/DateTimeFormatter;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::time::format

namespace java::time::format
{
	class DateTimeFormatterBuilder : public __jni_impl::java::time::format::DateTimeFormatterBuilder
	{
	public:
		DateTimeFormatterBuilder(QAndroidJniObject obj) { __thiz = obj; }
		DateTimeFormatterBuilder()
		{
			__constructor();
		}
	};
} // namespace java::time::format

#endif // JAVA_TIME_FORMAT_DATETIMEFORMATTERBUILDER

