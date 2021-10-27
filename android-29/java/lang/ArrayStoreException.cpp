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
	ArrayStoreException::ArrayStoreException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ArrayStoreException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ArrayStoreException::ArrayStoreException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ArrayStoreException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang

