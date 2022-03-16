#include "../../../java/lang/Exception.hpp"
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./TransformerFactoryConfigurationError.hpp"

namespace javax::xml::transform
{
	// Fields
	
	// Constructors
	TransformerFactoryConfigurationError::TransformerFactoryConfigurationError()
		: java::lang::Error(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"()V"
		) {}
	TransformerFactoryConfigurationError::TransformerFactoryConfigurationError(java::lang::Exception arg0)
		: java::lang::Error(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		) {}
	TransformerFactoryConfigurationError::TransformerFactoryConfigurationError(JString arg0)
		: java::lang::Error(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	TransformerFactoryConfigurationError::TransformerFactoryConfigurationError(java::lang::Exception arg0, JString arg1)
		: java::lang::Error(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"(Ljava/lang/Exception;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	JThrowable TransformerFactoryConfigurationError::getCause() const
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		);
	}
	java::lang::Exception TransformerFactoryConfigurationError::getException() const
	{
		return callObjectMethod(
			"getException",
			"()Ljava/lang/Exception;"
		);
	}
	JString TransformerFactoryConfigurationError::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::xml::transform

