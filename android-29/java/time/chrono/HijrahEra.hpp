#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"

namespace __jni_impl::java::time::format
{
	class TextStyle;
}
namespace __jni_impl::java::time::temporal
{
	class ValueRange;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::java::time::chrono
{
	class HijrahEra : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject AH();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject of(jint arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
		jstring getDisplayName(__jni_impl::java::time::format::TextStyle arg0, __jni_impl::java::util::Locale arg1);
		jint getValue();
		QAndroidJniObject range(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::time::chrono

#include "../format/TextStyle.hpp"
#include "../temporal/ValueRange.hpp"
#include "../../util/Locale.hpp"

namespace __jni_impl::java::time::chrono
{
	// Fields
	QAndroidJniObject HijrahEra::AH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.HijrahEra",
			"AH",
			"Ljava/time/chrono/HijrahEra;"
		);
	}
	
	// Constructors
	void HijrahEra::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.chrono.HijrahEra",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject HijrahEra::of(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.HijrahEra",
			"of",
			"(I)Ljava/time/chrono/HijrahEra;",
			arg0
		);
	}
	QAndroidJniObject HijrahEra::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.HijrahEra",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/chrono/HijrahEra;",
			arg0
		);
	}
	QAndroidJniObject HijrahEra::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.HijrahEra",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/chrono/HijrahEra;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray HijrahEra::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.HijrahEra",
			"values",
			"()[Ljava/time/chrono/HijrahEra;"
		).object<jarray>();
	}
	jstring HijrahEra::getDisplayName(__jni_impl::java::time::format::TextStyle arg0, __jni_impl::java::util::Locale arg1)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jint HijrahEra::getValue()
	{
		return __thiz.callMethod<jint>(
			"getValue",
			"()I"
		);
	}
	QAndroidJniObject HijrahEra::range(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::time::chrono

namespace java::time::chrono
{
	class HijrahEra : public __jni_impl::java::time::chrono::HijrahEra
	{
	public:
		HijrahEra(QAndroidJniObject obj) { __thiz = obj; }
		HijrahEra()
		{
			__constructor();
		}
	};
} // namespace java::time::chrono

