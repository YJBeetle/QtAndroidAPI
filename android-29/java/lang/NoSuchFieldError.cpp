#include "./NoSuchFieldError.hpp"

namespace java::lang
{
	// Fields
	
	NoSuchFieldError::NoSuchFieldError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NoSuchFieldError::NoSuchFieldError()
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoSuchFieldError",
			"()V"
		);
	}
	NoSuchFieldError::NoSuchFieldError(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoSuchFieldError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	NoSuchFieldError::NoSuchFieldError(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoSuchFieldError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang

