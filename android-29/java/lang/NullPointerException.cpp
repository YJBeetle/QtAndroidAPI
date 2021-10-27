#include "./NullPointerException.hpp"

namespace java::lang
{
	// Fields
	
	NullPointerException::NullPointerException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NullPointerException::NullPointerException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.NullPointerException",
			"()V"
		);
	}
	NullPointerException::NullPointerException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NullPointerException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	NullPointerException::NullPointerException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.NullPointerException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jthrowable NullPointerException::fillInStackTrace()
	{
		return __thiz.callObjectMethod(
			"fillInStackTrace",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	jstring NullPointerException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang

