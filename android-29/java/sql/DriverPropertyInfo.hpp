#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::sql
{
	class DriverPropertyInfo : public __JniBaseClass
	{
	public:
		// Fields
		jarray choices();
		jstring description();
		jstring name();
		jboolean required();
		jstring value();
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		
		// Methods
	};
} // namespace __jni_impl::java::sql


namespace __jni_impl::java::sql
{
	// Fields
	jarray DriverPropertyInfo::choices()
	{
		return __thiz.getObjectField(
			"choices",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring DriverPropertyInfo::description()
	{
		return __thiz.getObjectField(
			"description",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DriverPropertyInfo::name()
	{
		return __thiz.getObjectField(
			"name",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean DriverPropertyInfo::required()
	{
		return __thiz.getField<jboolean>(
			"required"
		);
	}
	jstring DriverPropertyInfo::value()
	{
		return __thiz.getObjectField(
			"value",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void DriverPropertyInfo::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.DriverPropertyInfo",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void DriverPropertyInfo::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.sql.DriverPropertyInfo",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
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

