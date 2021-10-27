#pragma once

#ifndef JAVA_TIME_CHRONO_THAIBUDDHISTERA
#define JAVA_TIME_CHRONO_THAIBUDDHISTERA

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
	class ThaiBuddhistEra : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BE();
		static QAndroidJniObject BEFORE_BE();
		
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
	QAndroidJniObject ThaiBuddhistEra::BE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.ThaiBuddhistEra",
			"BE",
			"Ljava/time/chrono/ThaiBuddhistEra;"
		);
	}
	QAndroidJniObject ThaiBuddhistEra::BEFORE_BE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.ThaiBuddhistEra",
			"BEFORE_BE",
			"Ljava/time/chrono/ThaiBuddhistEra;"
		);
	}
	
	// Constructors
	void ThaiBuddhistEra::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.chrono.ThaiBuddhistEra",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ThaiBuddhistEra::of(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistEra",
			"of",
			"(I)Ljava/time/chrono/ThaiBuddhistEra;",
			arg0
		);
	}
	QAndroidJniObject ThaiBuddhistEra::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistEra",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/chrono/ThaiBuddhistEra;",
			arg0
		);
	}
	QAndroidJniObject ThaiBuddhistEra::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistEra",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/chrono/ThaiBuddhistEra;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray ThaiBuddhistEra::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistEra",
			"values",
			"()[Ljava/time/chrono/ThaiBuddhistEra;"
		).object<jarray>();
	}
	jstring ThaiBuddhistEra::getDisplayName(__jni_impl::java::time::format::TextStyle arg0, __jni_impl::java::util::Locale arg1)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jint ThaiBuddhistEra::getValue()
	{
		return __thiz.callMethod<jint>(
			"getValue",
			"()I"
		);
	}
} // namespace __jni_impl::java::time::chrono

namespace java::time::chrono
{
	class ThaiBuddhistEra : public __jni_impl::java::time::chrono::ThaiBuddhistEra
	{
	public:
		ThaiBuddhistEra(QAndroidJniObject obj) { __thiz = obj; }
		ThaiBuddhistEra()
		{
			__constructor();
		}
	};
} // namespace java::time::chrono

#endif // JAVA_TIME_CHRONO_THAIBUDDHISTERA

