#include "./UnrecoverableEntryException.hpp"

namespace java::security
{
	// Fields
	
	UnrecoverableEntryException::UnrecoverableEntryException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnrecoverableEntryException::UnrecoverableEntryException()
	{
		__thiz = QAndroidJniObject(
			"java.security.UnrecoverableEntryException",
			"()V"
		);
	}
	UnrecoverableEntryException::UnrecoverableEntryException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.UnrecoverableEntryException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::security

