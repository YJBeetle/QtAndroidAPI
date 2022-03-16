#pragma once

#include "../../../java/lang/Exception.def.hpp"
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./TransformerFactoryConfigurationError.def.hpp"

namespace javax::xml::transform
{
	// Fields
	
	// Constructors
	inline TransformerFactoryConfigurationError::TransformerFactoryConfigurationError()
		: java::lang::Error(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"()V"
		) {}
	inline TransformerFactoryConfigurationError::TransformerFactoryConfigurationError(java::lang::Exception arg0)
		: java::lang::Error(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		) {}
	inline TransformerFactoryConfigurationError::TransformerFactoryConfigurationError(JString arg0)
		: java::lang::Error(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline TransformerFactoryConfigurationError::TransformerFactoryConfigurationError(java::lang::Exception arg0, JString arg1)
		: java::lang::Error(
			"javax.xml.transform.TransformerFactoryConfigurationError",
			"(Ljava/lang/Exception;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline JThrowable TransformerFactoryConfigurationError::getCause() const
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		);
	}
	inline java::lang::Exception TransformerFactoryConfigurationError::getException() const
	{
		return callObjectMethod(
			"getException",
			"()Ljava/lang/Exception;"
		);
	}
	inline JString TransformerFactoryConfigurationError::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::xml::transform

// Base class headers
#include "../../../java/lang/Error.hpp"

