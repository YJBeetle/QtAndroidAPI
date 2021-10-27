#include "./ClassCastException.hpp"

namespace java::lang
{
	// Fields
	
	ClassCastException::ClassCastException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ClassCastException::ClassCastException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassCastException",
			"()V"
		);
	}
	ClassCastException::ClassCastException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassCastException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ClassCastException::ClassCastException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassCastException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang

