#pragma once

#ifndef JAVA_SQL_DRIVERPROPERTYINFO
#define JAVA_SQL_DRIVERPROPERTYINFO

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::sql
{
	class DriverPropertyInfo : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject name();
		QAndroidJniObject description();
		jboolean required();
		QAndroidJniObject value();
		QAndroidJniObject choices();
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1);
		
		// Methods
	};
} // namespace __jni_impl::java::sql


namespace __jni_impl::java::sql
{
	// Fields
	QAndroidJniObject DriverPropertyInfo::name()
	{
		return __thiz.getObjectField(
			"name",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DriverPropertyInfo::description()
	{
		return __thiz.getObjectField(
			"description",
			"Ljava/lang/String;");
	}
	jboolean DriverPropertyInfo::required()
	{
		return __thiz.getField<jboolean>(
			"required");
	}
	QAndroidJniObject DriverPropertyInfo::value()
	{
		return __thiz.getObjectField(
			"value",
			"Ljava/lang/String;");
	}
	QAndroidJniObject DriverPropertyInfo::choices()
	{
		return __thiz.getObjectField(
			"choices",
			"[Ljava/lang/String;");
	}
	
	// Constructors
	void DriverPropertyInfo::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.DriverPropertyInfo",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
} // namespace __jni_impl::java::sql

namespace java::sql
{
	class DriverPropertyInfo : public __jni_impl::java::sql::DriverPropertyInfo
	{
	public:
		DriverPropertyInfo(QAndroidJniObject obj) { __thiz = obj; }
		DriverPropertyInfo(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::sql

#endif // JAVA_SQL_DRIVERPROPERTYINFO

