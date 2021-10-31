#include "../../../java/lang/Exception.hpp"
#include "./FactoryConfigurationError.hpp"

namespace javax::xml::parsers
{
	// Fields
	
	// QAndroidJniObject forward
	FactoryConfigurationError::FactoryConfigurationError(QAndroidJniObject obj) : java::lang::Error(obj) {}
	
	// Constructors
	FactoryConfigurationError::FactoryConfigurationError()
		: java::lang::Error(
			"javax.xml.parsers.FactoryConfigurationError",
			"()V"
		) {}
	FactoryConfigurationError::FactoryConfigurationError(java::lang::Exception arg0)
		: java::lang::Error(
			"javax.xml.parsers.FactoryConfigurationError",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		) {}
	FactoryConfigurationError::FactoryConfigurationError(jstring arg0)
		: java::lang::Error(
			"javax.xml.parsers.FactoryConfigurationError",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	FactoryConfigurationError::FactoryConfigurationError(java::lang::Exception arg0, jstring arg1)
		: java::lang::Error(
			"javax.xml.parsers.FactoryConfigurationError",
			"(Ljava/lang/Exception;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jthrowable FactoryConfigurationError::getCause()
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	QAndroidJniObject FactoryConfigurationError::getException()
	{
		return callObjectMethod(
			"getException",
			"()Ljava/lang/Exception;"
		);
	}
	jstring FactoryConfigurationError::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace javax::xml::parsers

