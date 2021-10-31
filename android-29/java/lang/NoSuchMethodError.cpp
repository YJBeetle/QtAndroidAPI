#include "./NoSuchMethodError.hpp"

namespace java::lang
{
	// Fields
	
	NoSuchMethodError::NoSuchMethodError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NoSuchMethodError::NoSuchMethodError()
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoSuchMethodError",
			"()V"
		);
	}
	NoSuchMethodError::NoSuchMethodError(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NoSuchMethodError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::lang

