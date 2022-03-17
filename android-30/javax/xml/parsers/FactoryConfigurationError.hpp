#pragma once

#include "../../../java/lang/Exception.def.hpp"
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./FactoryConfigurationError.def.hpp"

namespace javax::xml::parsers
{
	// Fields
	
	// Constructors
	inline FactoryConfigurationError::FactoryConfigurationError()
		: java::lang::Error(
			"javax.xml.parsers.FactoryConfigurationError",
			"()V"
		) {}
	inline FactoryConfigurationError::FactoryConfigurationError(java::lang::Exception arg0)
		: java::lang::Error(
			"javax.xml.parsers.FactoryConfigurationError",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		) {}
	inline FactoryConfigurationError::FactoryConfigurationError(JString arg0)
		: java::lang::Error(
			"javax.xml.parsers.FactoryConfigurationError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline FactoryConfigurationError::FactoryConfigurationError(java::lang::Exception arg0, JString arg1)
		: java::lang::Error(
			"javax.xml.parsers.FactoryConfigurationError",
			"(Ljava/lang/Exception;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline JThrowable FactoryConfigurationError::getCause() const
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		);
	}
	inline java::lang::Exception FactoryConfigurationError::getException() const
	{
		return callObjectMethod(
			"getException",
			"()Ljava/lang/Exception;"
		);
	}
	inline JString FactoryConfigurationError::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::xml::parsers

// Base class headers
#include "../../../java/lang/Error.hpp"

