#include "./TypeNotPresentException.hpp"

namespace java::lang
{
	// Fields
	
	TypeNotPresentException::TypeNotPresentException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TypeNotPresentException::TypeNotPresentException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.TypeNotPresentException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jstring TypeNotPresentException::typeName()
	{
		return __thiz.callObjectMethod(
			"typeName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang

