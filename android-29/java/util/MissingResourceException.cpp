#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./MissingResourceException.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	MissingResourceException::MissingResourceException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	MissingResourceException::MissingResourceException(JString arg0, JString arg1, JString arg2)
		: java::lang::RuntimeException(
			"java.util.MissingResourceException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	JString MissingResourceException::getClassName() const
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		);
	}
	JString MissingResourceException::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util

