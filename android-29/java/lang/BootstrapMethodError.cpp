#include "./BootstrapMethodError.hpp"

namespace java::lang
{
	// Fields
	
	BootstrapMethodError::BootstrapMethodError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BootstrapMethodError::BootstrapMethodError()
	{
		__thiz = QAndroidJniObject(
			"java.lang.BootstrapMethodError",
			"()V"
		);
	}
	BootstrapMethodError::BootstrapMethodError(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.BootstrapMethodError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	BootstrapMethodError::BootstrapMethodError(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.BootstrapMethodError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	BootstrapMethodError::BootstrapMethodError(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.BootstrapMethodError",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	BootstrapMethodError::BootstrapMethodError(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.BootstrapMethodError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	BootstrapMethodError::BootstrapMethodError(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.BootstrapMethodError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::lang

