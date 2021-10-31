#include "./MissingResourceException.hpp"

namespace java::util
{
	// Fields
	
	MissingResourceException::MissingResourceException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MissingResourceException::MissingResourceException(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.MissingResourceException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jstring MissingResourceException::getClassName()
	{
		return __thiz.callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MissingResourceException::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

