#include "./GenericSignatureFormatError.hpp"

namespace java::lang::reflect
{
	// Fields
	
	GenericSignatureFormatError::GenericSignatureFormatError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GenericSignatureFormatError::GenericSignatureFormatError()
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.GenericSignatureFormatError",
			"()V"
		);
	}
	GenericSignatureFormatError::GenericSignatureFormatError(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.GenericSignatureFormatError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	GenericSignatureFormatError::GenericSignatureFormatError(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.GenericSignatureFormatError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::lang::reflect

