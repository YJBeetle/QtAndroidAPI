#include "./IllegalAccessException.hpp"

namespace java::lang
{
	// Fields
	
	IllegalAccessException::IllegalAccessException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IllegalAccessException::IllegalAccessException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalAccessException",
			"()V"
		);
	}
	IllegalAccessException::IllegalAccessException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalAccessException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	IllegalAccessException::IllegalAccessException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalAccessException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang

