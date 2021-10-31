#include "./UnsupportedClassVersionError.hpp"

namespace java::lang
{
	// Fields
	
	UnsupportedClassVersionError::UnsupportedClassVersionError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UnsupportedClassVersionError::UnsupportedClassVersionError()
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsupportedClassVersionError",
			"()V"
		);
	}
	UnsupportedClassVersionError::UnsupportedClassVersionError(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsupportedClassVersionError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::lang

