#pragma once

#ifndef JAVA_TIME_CHRONO_ISOERA
#define JAVA_TIME_CHRONO_ISOERA

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace __jni_impl::java::time::chrono
{
	class IsoEra : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BCE();
		static QAndroidJniObject CE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject of(jint arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
		jint getValue();
	};
} // namespace __jni_impl::java::time::chrono


namespace __jni_impl::java::time::chrono
{
	// Fields
	QAndroidJniObject IsoEra::BCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.IsoEra",
			"BCE",
			"Ljava/time/chrono/IsoEra;"
		);
	}
	QAndroidJniObject IsoEra::CE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.IsoEra",
			"CE",
			"Ljava/time/chrono/IsoEra;"
		);
	}
	
	// Constructors
	void IsoEra::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.chrono.IsoEra",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject IsoEra::of(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.IsoEra",
			"of",
			"(I)Ljava/time/chrono/IsoEra;",
			arg0
		);
	}
	QAndroidJniObject IsoEra::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.IsoEra",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/chrono/IsoEra;",
			arg0
		);
	}
	QAndroidJniObject IsoEra::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.IsoEra",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/chrono/IsoEra;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray IsoEra::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.IsoEra",
			"values",
			"()[Ljava/time/chrono/IsoEra;"
		).object<jarray>();
	}
	jint IsoEra::getValue()
	{
		return __thiz.callMethod<jint>(
			"getValue",
			"()I"
		);
	}
} // namespace __jni_impl::java::time::chrono

namespace java::time::chrono
{
	class IsoEra : public __jni_impl::java::time::chrono::IsoEra
	{
	public:
		IsoEra(QAndroidJniObject obj) { __thiz = obj; }
		IsoEra()
		{
			__constructor();
		}
	};
} // namespace java::time::chrono

#endif // JAVA_TIME_CHRONO_ISOERA

