#include "./LoggingPermission.hpp"

namespace java::util::logging
{
	// Fields
	
	LoggingPermission::LoggingPermission(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LoggingPermission::LoggingPermission(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.LoggingPermission",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace java::util::logging

