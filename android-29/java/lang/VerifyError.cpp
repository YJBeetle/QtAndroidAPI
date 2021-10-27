#include "./VerifyError.hpp"

namespace java::lang
{
	// Fields
	
	VerifyError::VerifyError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	VerifyError::VerifyError()
	{
		__thiz = QAndroidJniObject(
			"java.lang.VerifyError",
			"()V"
		);
	}
	VerifyError::VerifyError(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.VerifyError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	VerifyError::VerifyError(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.VerifyError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang

