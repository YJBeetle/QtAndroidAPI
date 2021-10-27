#include "./NoSuchMethodException.hpp"

namespace java::lang
{
	// Fields
	
	NoSuchMethodException::NoSuchMethodException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NoSuchMethodException::NoSuchMethodException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoSuchMethodException",
			"()V"
		);
	}
	NoSuchMethodException::NoSuchMethodException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoSuchMethodException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	NoSuchMethodException::NoSuchMethodException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoSuchMethodException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang

