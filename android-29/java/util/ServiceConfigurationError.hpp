#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Error.hpp"


namespace __jni_impl::java::util
{
	class ServiceConfigurationError : public __jni_impl::java::lang::Error
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
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void ServiceConfigurationError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.ServiceConfigurationError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ServiceConfigurationError::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.ServiceConfigurationError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ServiceConfigurationError::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.ServiceConfigurationError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void ServiceConfigurationError::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.ServiceConfigurationError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::java::util

namespace java::util
{
	class ServiceConfigurationError : public __jni_impl::java::util::ServiceConfigurationError
	{
	public:
		ServiceConfigurationError(QAndroidJniObject obj) { __thiz = obj; }
		ServiceConfigurationError(jstring arg0)
		{
			__constructor(
				arg0);
		}
		ServiceConfigurationError(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util

