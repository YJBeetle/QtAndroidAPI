#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./InvalidPropertiesFormatException.hpp"

namespace java::util
{
	// Fields
	
	InvalidPropertiesFormatException::InvalidPropertiesFormatException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InvalidPropertiesFormatException::InvalidPropertiesFormatException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.InvalidPropertiesFormatException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	InvalidPropertiesFormatException::InvalidPropertiesFormatException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.InvalidPropertiesFormatException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	InvalidPropertiesFormatException::InvalidPropertiesFormatException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.InvalidPropertiesFormatException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::util

