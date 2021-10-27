#include "./UnknownError.hpp"

namespace java::lang
{
	// Fields
	
	UnknownError::UnknownError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnknownError::UnknownError()
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnknownError",
			"()V"
		);
	}
	UnknownError::UnknownError(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnknownError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	UnknownError::UnknownError(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnknownError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang

