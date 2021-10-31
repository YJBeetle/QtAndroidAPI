#include "../../../java/lang/Exception.hpp"
#include "./TransformerFactoryConfigurationError.hpp"

namespace javax::xml::transform
{
	// Fields
	
	// QAndroidJniObject forward
	TransformerFactoryConfigurationError::TransformerFactoryConfigurationError(QAndroidJniObject obj) : java::lang::Error(obj) {}
	
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
	TransformerFactoryConfigurationError::TransformerFactoryConfigurationError(jstring arg0)
		: java::lang::Error(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	TransformerFactoryConfigurationError::TransformerFactoryConfigurationError(java::lang::Exception arg0, jstring arg1)
		: java::lang::Error(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"(Ljava/lang/Exception;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jthrowable TransformerFactoryConfigurationError::getCause()
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	QAndroidJniObject TransformerFactoryConfigurationError::getException()
	{
		return callObjectMethod(
			"getException",
			"()Ljava/lang/Exception;"
		);
	}
	jstring TransformerFactoryConfigurationError::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace javax::xml::transform

