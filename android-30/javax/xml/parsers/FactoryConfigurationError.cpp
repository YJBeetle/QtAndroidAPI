#include "../../../java/lang/Exception.hpp"
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./FactoryConfigurationError.hpp"

namespace javax::xml::parsers
{
	// Fields
	
	// QJniObject forward
	FactoryConfigurationError::FactoryConfigurationError(QJniObject obj) : java::lang::Error(obj) {}
	
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
	FactoryConfigurationError::FactoryConfigurationError(JString arg0)
		: java::lang::Error(
			"javax.xml.parsers.FactoryConfigurationError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	FactoryConfigurationError::FactoryConfigurationError(java::lang::Exception arg0, JString arg1)
		: java::lang::Error(
			"javax.xml.parsers.FactoryConfigurationError",
			"(Ljava/lang/Exception;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	JThrowable FactoryConfigurationError::getCause()
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		);
	}
	java::lang::Exception FactoryConfigurationError::getException()
	{
		return callObjectMethod(
			"getException",
			"()Ljava/lang/Exception;"
		);
	}
	JString FactoryConfigurationError::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::xml::parsers

