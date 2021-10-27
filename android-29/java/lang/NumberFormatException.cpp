#include "./NumberFormatException.hpp"

namespace java::lang
{
	// Fields
	
	NumberFormatException::NumberFormatException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NumberFormatException::NumberFormatException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.NumberFormatException",
			"()V"
		);
	}
	NumberFormatException::NumberFormatException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NumberFormatException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	NumberFormatException::NumberFormatException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NumberFormatException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang

