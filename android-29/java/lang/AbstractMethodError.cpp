#include "./AbstractMethodError.hpp"

namespace java::lang
{
	// Fields
	
	AbstractMethodError::AbstractMethodError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AbstractMethodError::AbstractMethodError()
	{
		__thiz = QAndroidJniObject(
			"java.lang.AbstractMethodError",
			"()V"
		);
	}
	AbstractMethodError::AbstractMethodError(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.AbstractMethodError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::lang

