#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::java::text
{
	class DateFormatSymbols : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::java::util::Locale arg0);
		
		// Methods
		static jarray getAvailableLocales();
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		jobject clone();
		jboolean equals(jobject arg0);
		jarray getAmPmStrings();
		jarray getEras();
		jstring getLocalPatternChars();
		jarray getMonths();
		jarray getShortMonths();
		jarray getShortWeekdays();
		jarray getWeekdays();
		jarray getZoneStrings();
		jint hashCode();
		void setAmPmStrings(jarray arg0);
		void setEras(jarray arg0);
		void setLocalPatternChars(jstring arg0);
		void setLocalPatternChars(const QString &arg0);
		void setMonths(jarray arg0);
		void setShortMonths(jarray arg0);
		void setShortWeekdays(jarray arg0);
		void setWeekdays(jarray arg0);
		void setZoneStrings(jarray arg0);
	};
} // namespace __jni_impl::java::text

#include "../io/ObjectOutputStream.hpp"
#include "../util/Locale.hpp"

namespace __jni_impl::java::text
{
	// Fields
	
	// Constructors
	void DateFormatSymbols::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.text.DateFormatSymbols",
			"()V"
		);
	}
	void DateFormatSymbols::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.DateFormatSymbols",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jarray DateFormatSymbols::getAvailableLocales()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DateFormatSymbols",
			"getAvailableLocales",
			"()[Ljava/util/Locale;"
		).object<jarray>();
	}
	QAndroidJniObject DateFormatSymbols::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DateFormatSymbols",
			"getInstance",
			"()Ljava/text/DateFormatSymbols;"
		);
	}
	QAndroidJniObject DateFormatSymbols::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.DateFormatSymbols",
			"getInstance",
			"(Ljava/util/Locale;)Ljava/text/DateFormatSymbols;",
			arg0.__jniObject().object()
		);
	}
	jobject DateFormatSymbols::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean DateFormatSymbols::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jarray DateFormatSymbols::getAmPmStrings()
	{
		return __thiz.callObjectMethod(
			"getAmPmStrings",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray DateFormatSymbols::getEras()
	{
		return __thiz.callObjectMethod(
			"getEras",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring DateFormatSymbols::getLocalPatternChars()
	{
		return __thiz.callObjectMethod(
			"getLocalPatternChars",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray DateFormatSymbols::getMonths()
	{
		return __thiz.callObjectMethod(
			"getMonths",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray DateFormatSymbols::getShortMonths()
	{
		return __thiz.callObjectMethod(
			"getShortMonths",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray DateFormatSymbols::getShortWeekdays()
	{
		return __thiz.callObjectMethod(
			"getShortWeekdays",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray DateFormatSymbols::getWeekdays()
	{
		return __thiz.callObjectMethod(
			"getWeekdays",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray DateFormatSymbols::getZoneStrings()
	{
		return __thiz.callObjectMethod(
			"getZoneStrings",
			"()[[Ljava/lang/String;"
		).object<jarray>();
	}
	jint DateFormatSymbols::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void DateFormatSymbols::setAmPmStrings(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setAmPmStrings",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void DateFormatSymbols::setEras(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setEras",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void DateFormatSymbols::setLocalPatternChars(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setLocalPatternChars",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DateFormatSymbols::setLocalPatternChars(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setLocalPatternChars",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DateFormatSymbols::setMonths(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setMonths",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void DateFormatSymbols::setShortMonths(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setShortMonths",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void DateFormatSymbols::setShortWeekdays(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setShortWeekdays",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void DateFormatSymbols::setWeekdays(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setWeekdays",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void DateFormatSymbols::setZoneStrings(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setZoneStrings",
			"([[Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace __jni_impl::java::text

namespace java::text
{
	class DateFormatSymbols : public __jni_impl::java::text::DateFormatSymbols
	{
	public:
		DateFormatSymbols(QAndroidJniObject obj) { __thiz = obj; }
		DateFormatSymbols()
		{
			__constructor();
		}
		DateFormatSymbols(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::text

