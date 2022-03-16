#pragma once

#include "../lang/Exception.def.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./WriteAbortedException.def.hpp"

namespace java::io
{
	// Fields
	inline java::lang::Exception WriteAbortedException::detail()
	{
		return getObjectField(
			"detail",
			"Ljava/lang/Exception;"
		);
	}
	
	// Constructors
	inline WriteAbortedException::WriteAbortedException(JString arg0, java::lang::Exception arg1)
		: java::io::ObjectStreamException(
			"java.io.WriteAbortedException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline JThrowable WriteAbortedException::getCause() const
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		);
	}
	inline JString WriteAbortedException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::io

// Base class headers
#include "../lang/Exception.hpp"
#include "./IOException.hpp"
#include "./ObjectStreamException.hpp"

