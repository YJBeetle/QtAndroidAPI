#pragma once

#ifndef JAVA_TIME_CHRONO_JAPANESEERA
#define JAVA_TIME_CHRONO_JAPANESEERA

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::time
{
	class LocalDate;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::time::temporal
{
	class ValueRange;
}
namespace __jni_impl::java::time::format
{
	class TextStyle;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::java::time::chrono
{
	class JapaneseEra : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject MEIJI();
		static QAndroidJniObject TAISHO();
		static QAndroidJniObject SHOWA();
		static QAndroidJniObject HEISEI();
		static QAndroidJniObject REIWA();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
		jint getValue();
		static QAndroidJniObject of(jint arg0);
		QAndroidJniObject range(__jni_impl::__JniBaseClass arg0);
		jstring getDisplayName(__jni_impl::java::time::format::TextStyle arg0, __jni_impl::java::util::Locale arg1);
	};
} // namespace __jni_impl::java::time::chrono

#include "../LocalDate.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../temporal/ValueRange.hpp"
#include "../format/TextStyle.hpp"
#include "../../util/Locale.hpp"

namespace __jni_impl::java::time::chrono
{
	// Fields
	QAndroidJniObject JapaneseEra::MEIJI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.JapaneseEra",
			"MEIJI",
			"Ljava/time/chrono/JapaneseEra;"
		);
	}
	QAndroidJniObject JapaneseEra::TAISHO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.JapaneseEra",
			"TAISHO",
			"Ljava/time/chrono/JapaneseEra;"
		);
	}
	QAndroidJniObject JapaneseEra::SHOWA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.JapaneseEra",
			"SHOWA",
			"Ljava/time/chrono/JapaneseEra;"
		);
	}
	QAndroidJniObject JapaneseEra::HEISEI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.JapaneseEra",
			"HEISEI",
			"Ljava/time/chrono/JapaneseEra;"
		);
	}
	QAndroidJniObject JapaneseEra::REIWA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.JapaneseEra",
			"REIWA",
			"Ljava/time/chrono/JapaneseEra;"
		);
	}
	
	// Constructors
	void JapaneseEra::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.chrono.JapaneseEra",
			"(V)V");
	}
	
	// Methods
	jstring JapaneseEra::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray JapaneseEra::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.JapaneseEra",
			"values",
			"()[Ljava/time/chrono/JapaneseEra;"
		).object<jarray>();
	}
	QAndroidJniObject JapaneseEra::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.JapaneseEra",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/chrono/JapaneseEra;",
			arg0
		);
	}
	jint JapaneseEra::getValue()
	{
		return __thiz.callMethod<jint>(
			"getValue",
			"()I"
		);
	}
	QAndroidJniObject JapaneseEra::of(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.JapaneseEra",
			"of",
			"(I)Ljava/time/chrono/JapaneseEra;",
			arg0
		);
	}
	QAndroidJniObject JapaneseEra::range(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object()
		);
	}
	jstring JapaneseEra::getDisplayName(__jni_impl::java::time::format::TextStyle arg0, __jni_impl::java::util::Locale arg1)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
} // namespace __jni_impl::java::time::chrono

namespace java::time::chrono
{
	class JapaneseEra : public __jni_impl::java::time::chrono::JapaneseEra
	{
	public:
		JapaneseEra(QAndroidJniObject obj) { __thiz = obj; }
		JapaneseEra()
		{
			__constructor();
		}
	};
} // namespace java::time::chrono

#endif // JAVA_TIME_CHRONO_JAPANESEERA

