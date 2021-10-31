#include "./InstantiationException.hpp"

namespace java::lang
{
	// Fields
	
	InstantiationException::InstantiationException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InstantiationException::InstantiationException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.InstantiationException",
			"()V"
		);
	}
	InstantiationException::InstantiationException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.InstantiationException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::lang

