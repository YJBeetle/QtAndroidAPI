#include "./ExemptionMechanismException.hpp"

namespace javax::crypto
{
	// Fields
	
	ExemptionMechanismException::ExemptionMechanismException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ExemptionMechanismException::ExemptionMechanismException()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.ExemptionMechanismException",
			"()V"
		);
	}
	ExemptionMechanismException::ExemptionMechanismException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.ExemptionMechanismException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ExemptionMechanismException::ExemptionMechanismException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.ExemptionMechanismException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace javax::crypto

