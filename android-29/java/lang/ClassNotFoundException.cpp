#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./ClassNotFoundException.hpp"

namespace java::lang
{
	// Fields
	
	ClassNotFoundException::ClassNotFoundException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ClassNotFoundException::ClassNotFoundException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassNotFoundException",
			"()V"
		);
	}
	ClassNotFoundException::ClassNotFoundException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassNotFoundException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ClassNotFoundException::ClassNotFoundException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassNotFoundException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jthrowable ClassNotFoundException::getException()
	{
		return __thiz.callObjectMethod(
			"getException",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
} // namespace java::lang

