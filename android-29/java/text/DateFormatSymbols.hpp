#pragma once

#ifndef JAVA_TEXT_DATEFORMATSYMBOLS
#define JAVA_TEXT_DATEFORMATSYMBOLS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}

namespace __jni_impl::java::text
{
	class DateFormatSymbols : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::util::Locale arg0);
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject clone();
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getAvailableLocales();
		QAndroidJniObject getEras();
		QAndroidJniObject getShortMonths();
		QAndroidJniObject getWeekdays();
		QAndroidJniObject getShortWeekdays();
		QAndroidJniObject getAmPmStrings();
		QAndroidJniObject getLocalPatternChars();
		QAndroidJniObject getMonths();
		void setLocalPatternChars(jstring arg0);
		QAndroidJniObject getZoneStrings();
		void setEras(jarray arg0);
		void setMonths(jarray arg0);
		void setShortMonths(jarray arg0);
		void setWeekdays(jarray arg0);
		void setShortWeekdays(jarray arg0);
		void setAmPmStrings(jarray arg0);
		void setZoneStrings(jarray arg0);
	};
} // namespace __jni_impl::java::text

#include "../util/Locale.hpp"
#include "../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::text
{
	// Fields
	
	// Constructors
	void DateFormatSymbols::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.DateFormatSymbols",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object());
	}
	void DateFormatSymbols::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.text.DateFormatSymbols",
			"()V");
	}
	
	// Methods
	jboolean DateFormatSymbols::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint DateFormatSymbols::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject DateFormatSymbols::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject DateFormatSymbols::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DateFormatSymbols",
			"getInstance",
			"()Ljava/text/DateFormatSymbols;");
	}
	QAndroidJniObject DateFormatSymbols::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DateFormatSymbols",
			"getInstance",
			"(Ljava/util/Locale;)Ljava/text/DateFormatSymbols;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DateFormatSymbols::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DateFormatSymbols",
			"getAvailableLocales",
			"()[Ljava/util/Locale;");
	}
	QAndroidJniObject DateFormatSymbols::getEras()
	{
		return __thiz.callObjectMethod(
			"getEras",
			"()[Ljava/lang/String;");
	}
	QAndroidJniObject DateFormatSymbols::getShortMonths()
	{
		return __thiz.callObjectMethod(
			"getShortMonths",
			"()[Ljava/lang/String;");
	}
	QAndroidJniObject DateFormatSymbols::getWeekdays()
	{
		return __thiz.callObjectMethod(
			"getWeekdays",
			"()[Ljava/lang/String;");
	}
	QAndroidJniObject DateFormatSymbols::getShortWeekdays()
	{
		return __thiz.callObjectMethod(
			"getShortWeekdays",
			"()[Ljava/lang/String;");
	}
	QAndroidJniObject DateFormatSymbols::getAmPmStrings()
	{
		return __thiz.callObjectMethod(
			"getAmPmStrings",
			"()[Ljava/lang/String;");
	}
	QAndroidJniObject DateFormatSymbols::getLocalPatternChars()
	{
		return __thiz.callObjectMethod(
			"getLocalPatternChars",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject DateFormatSymbols::getMonths()
	{
		return __thiz.callObjectMethod(
			"getMonths",
			"()[Ljava/lang/String;");
	}
	void DateFormatSymbols::setLocalPatternChars(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setLocalPatternChars",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject DateFormatSymbols::getZoneStrings()
	{
		return __thiz.callObjectMethod(
			"getZoneStrings",
			"()[[Ljava/lang/String;");
	}
	void DateFormatSymbols::setEras(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setEras",
			"([Ljava/lang/String;)V",
			arg0);
	}
	void DateFormatSymbols::setMonths(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setMonths",
			"([Ljava/lang/String;)V",
			arg0);
	}
	void DateFormatSymbols::setShortMonths(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setShortMonths",
			"([Ljava/lang/String;)V",
			arg0);
	}
	void DateFormatSymbols::setWeekdays(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setWeekdays",
			"([Ljava/lang/String;)V",
			arg0);
	}
	void DateFormatSymbols::setShortWeekdays(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setShortWeekdays",
			"([Ljava/lang/String;)V",
			arg0);
	}
	void DateFormatSymbols::setAmPmStrings(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setAmPmStrings",
			"([Ljava/lang/String;)V",
			arg0);
	}
	void DateFormatSymbols::setZoneStrings(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setZoneStrings",
			"([[Ljava/lang/String;)V",
			arg0);
	}
} // namespace __jni_impl::java::text

namespace java::text
{
	class DateFormatSymbols : public __jni_impl::java::text::DateFormatSymbols
	{
	public:
		DateFormatSymbols(QAndroidJniObject obj) { __thiz = obj; }
		DateFormatSymbols(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
		DateFormatSymbols()
		{
			__constructor();
		}
	};
} // namespace java::text

#endif // JAVA_TEXT_DATEFORMATSYMBOLS

