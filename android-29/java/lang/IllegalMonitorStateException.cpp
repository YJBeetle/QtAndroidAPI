#include "./IllegalMonitorStateException.hpp"

namespace java::lang
{
	// Fields
	
	IllegalMonitorStateException::IllegalMonitorStateException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IllegalMonitorStateException::IllegalMonitorStateException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalMonitorStateException",
			"()V"
		);
	}
	IllegalMonitorStateException::IllegalMonitorStateException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalMonitorStateException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	IllegalMonitorStateException::IllegalMonitorStateException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IllegalMonitorStateException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang

