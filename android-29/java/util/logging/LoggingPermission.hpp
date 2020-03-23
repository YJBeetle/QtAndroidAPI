#pragma once

#ifndef JAVA_UTIL_LOGGING_LOGGINGPERMISSION
#define JAVA_UTIL_LOGGING_LOGGINGPERMISSION

#include "../../security/BasicPermission.hpp"


namespace __jni_impl::java::util::logging
{
	class LoggingPermission : public __jni_impl::java::security::BasicPermission
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1);
		
		// Methods
	};
} // namespace __jni_impl::java::util::logging


namespace __jni_impl::java::util::logging
{
	// Fields
	
	// Constructors
	void LoggingPermission::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.LoggingPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
} // namespace __jni_impl::java::util::logging

namespace java::util::logging
{
	class LoggingPermission : public __jni_impl::java::util::logging::LoggingPermission
	{
	public:
		LoggingPermission(QAndroidJniObject obj) { __thiz = obj; }
		LoggingPermission(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util::logging

#endif // JAVA_UTIL_LOGGING_LOGGINGPERMISSION

