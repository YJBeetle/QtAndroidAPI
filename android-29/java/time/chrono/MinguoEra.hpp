#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"

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
	class MinguoEra : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BEFORE_ROC();
		static QAndroidJniObject ROC();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject of(jint arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
		jstring getDisplayName(__jni_impl::java::time::format::TextStyle arg0, __jni_impl::java::util::Locale arg1);
		jint getValue();
	};
} // namespace __jni_impl::java::time::chrono

#include "../format/TextStyle.hpp"
#include "../../util/Locale.hpp"

namespace __jni_impl::java::time::chrono
{
	// Fields
	QAndroidJniObject MinguoEra::BEFORE_ROC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.MinguoEra",
			"BEFORE_ROC",
			"Ljava/time/chrono/MinguoEra;"
		);
	}
	QAndroidJniObject MinguoEra::ROC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.MinguoEra",
			"ROC",
			"Ljava/time/chrono/MinguoEra;"
		);
	}
	
	// Constructors
	void MinguoEra::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.chrono.MinguoEra",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MinguoEra::of(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.MinguoEra",
			"of",
			"(I)Ljava/time/chrono/MinguoEra;",
			arg0
		);
	}
	QAndroidJniObject MinguoEra::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.MinguoEra",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/chrono/MinguoEra;",
			arg0
		);
	}
	QAndroidJniObject MinguoEra::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.MinguoEra",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/chrono/MinguoEra;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray MinguoEra::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.MinguoEra",
			"values",
			"()[Ljava/time/chrono/MinguoEra;"
		).object<jarray>();
	}
	jstring MinguoEra::getDisplayName(__jni_impl::java::time::format::TextStyle arg0, __jni_impl::java::util::Locale arg1)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jint MinguoEra::getValue()
	{
		return __thiz.callMethod<jint>(
			"getValue",
			"()I"
		);
	}
} // namespace __jni_impl::java::time::chrono

namespace java::time::chrono
{
	class MinguoEra : public __jni_impl::java::time::chrono::MinguoEra
	{
	public:
		MinguoEra(QAndroidJniObject obj) { __thiz = obj; }
		MinguoEra()
		{
			__constructor();
		}
	};
} // namespace java::time::chrono

