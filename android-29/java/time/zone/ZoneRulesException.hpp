#pragma once

#ifndef JAVA_TIME_ZONE_ZONERULESEXCEPTION
#define JAVA_TIME_ZONE_ZONERULESEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../DateTimeException.hpp"


namespace __jni_impl::java::time::zone
{
	class ZoneRulesException : public __jni_impl::java::time::DateTimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace __jni_impl::java::time::zone


namespace __jni_impl::java::time::zone
{
	// Fields
	
	// Constructors
	void ZoneRulesException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.time.zone.ZoneRulesException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ZoneRulesException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.time.zone.ZoneRulesException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ZoneRulesException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.time.zone.ZoneRulesException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void ZoneRulesException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.time.zone.ZoneRulesException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::java::time::zone

namespace java::time::zone
{
	class ZoneRulesException : public __jni_impl::java::time::zone::ZoneRulesException
	{
	public:
		ZoneRulesException(QAndroidJniObject obj) { __thiz = obj; }
		ZoneRulesException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		ZoneRulesException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::time::zone

#endif // JAVA_TIME_ZONE_ZONERULESEXCEPTION

