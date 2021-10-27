#include "./NoSuchFieldException.hpp"

namespace java::lang
{
	// Fields
	
	NoSuchFieldException::NoSuchFieldException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NoSuchFieldException::NoSuchFieldException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoSuchFieldException",
			"()V"
		);
	}
	NoSuchFieldException::NoSuchFieldException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoSuchFieldException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	NoSuchFieldException::NoSuchFieldException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoSuchFieldException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang

