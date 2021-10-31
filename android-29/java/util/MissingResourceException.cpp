#include "./MissingResourceException.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	MissingResourceException::MissingResourceException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	MissingResourceException::MissingResourceException(jstring arg0, jstring arg1, jstring arg2)
		: java::lang::RuntimeException(
			"java.util.MissingResourceException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jstring MissingResourceException::getClassName()
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MissingResourceException::getKey()
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util

