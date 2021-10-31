#include "./ArrayStoreException.hpp"

namespace java::lang
{
	// Fields
	
	ArrayStoreException::ArrayStoreException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ArrayStoreException::ArrayStoreException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ArrayStoreException",
			"()V"
		);
	}
	ArrayStoreException::ArrayStoreException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ArrayStoreException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::lang

