#pragma once

#include "../../__JniBaseClass.hpp"
#include "../security/Permission.hpp"
#include "../security/BasicPermission.hpp"


namespace __jni_impl::java::lang
{
	class RuntimePermission : public __jni_impl::java::security::BasicPermission
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
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void RuntimePermission::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimePermission",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void RuntimePermission::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimePermission",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void RuntimePermission::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void RuntimePermission::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.RuntimePermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class RuntimePermission : public __jni_impl::java::lang::RuntimePermission
	{
	public:
		RuntimePermission(QAndroidJniObject obj) { __thiz = obj; }
		RuntimePermission(jstring arg0)
		{
			__constructor(
				arg0);
		}
		RuntimePermission(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::lang

