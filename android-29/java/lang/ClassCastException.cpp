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
	ClassCastException::ClassCastException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassCastException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::lang

