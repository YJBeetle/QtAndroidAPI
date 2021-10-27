#include "./LoggingPermission.hpp"

namespace java::util::logging
{
	// Fields
	
	LoggingPermission::LoggingPermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LoggingPermission::LoggingPermission(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.LoggingPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	LoggingPermission::LoggingPermission(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.LoggingPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::util::logging

