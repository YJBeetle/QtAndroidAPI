#include "./ServiceConfigurationError.hpp"

namespace java::util
{
	// Fields
	
	ServiceConfigurationError::ServiceConfigurationError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ServiceConfigurationError::ServiceConfigurationError(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.ServiceConfigurationError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ServiceConfigurationError::ServiceConfigurationError(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.ServiceConfigurationError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	ServiceConfigurationError::ServiceConfigurationError(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.ServiceConfigurationError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	ServiceConfigurationError::ServiceConfigurationError(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.ServiceConfigurationError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::util

