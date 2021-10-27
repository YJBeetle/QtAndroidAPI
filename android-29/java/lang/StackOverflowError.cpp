#include "./StackOverflowError.hpp"

namespace java::lang
{
	// Fields
	
	StackOverflowError::StackOverflowError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StackOverflowError::StackOverflowError()
	{
		__thiz = QAndroidJniObject(
			"java.lang.StackOverflowError",
			"()V"
		);
	}
	StackOverflowError::StackOverflowError(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.StackOverflowError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	StackOverflowError::StackOverflowError(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.StackOverflowError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang

