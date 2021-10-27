#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../security/Permission.hpp"
#include "../../security/BasicPermission.hpp"


namespace __jni_impl::java::util::logging
{
	class LoggingPermission : public __jni_impl::java::security::BasicPermission
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		
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
			arg1
		);
	}
	void LoggingPermission::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.LoggingPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
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

