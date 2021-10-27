#include "./InstantiationError.hpp"

namespace java::lang
{
	// Fields
	
	InstantiationError::InstantiationError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InstantiationError::InstantiationError()
	{
		__thiz = QAndroidJniObject(
			"java.lang.InstantiationError",
			"()V"
		);
	}
	InstantiationError::InstantiationError(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.InstantiationError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	InstantiationError::InstantiationError(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.InstantiationError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang

