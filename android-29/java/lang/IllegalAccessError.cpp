#include "./IllegalAccessError.hpp"

namespace java::lang
{
	// Fields
	
	IllegalAccessError::IllegalAccessError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IllegalAccessError::IllegalAccessError()
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalAccessError",
			"()V"
		);
	}
	IllegalAccessError::IllegalAccessError(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalAccessError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	IllegalAccessError::IllegalAccessError(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalAccessError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang

