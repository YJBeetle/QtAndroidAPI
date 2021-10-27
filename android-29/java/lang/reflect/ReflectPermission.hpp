#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../security/Permission.hpp"
#include "../../security/BasicPermission.hpp"


namespace __jni_impl::java::lang::reflect
{
	class ReflectPermission : public __jni_impl::java::security::BasicPermission
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		
		// Methods
	};
} // namespace __jni_impl::java::lang::reflect


namespace __jni_impl::java::lang::reflect
{
	// Fields
	
	// Constructors
	void ReflectPermission::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.ReflectPermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ReflectPermission::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.ReflectPermission",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ReflectPermission::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.ReflectPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void ReflectPermission::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.ReflectPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang::reflect

namespace java::lang::reflect
{
	class ReflectPermission : public __jni_impl::java::lang::reflect::ReflectPermission
	{
	public:
		ReflectPermission(QAndroidJniObject obj) { __thiz = obj; }
		ReflectPermission(jstring arg0)
		{
			__constructor(
				arg0);
		}
		ReflectPermission(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::lang::reflect

