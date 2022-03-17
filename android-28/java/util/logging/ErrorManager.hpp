#pragma once

#include "../../lang/Exception.def.hpp"
#include "../../../JString.hpp"
#include "./ErrorManager.def.hpp"

namespace java::util::logging
{
	// Fields
	inline jint ErrorManager::CLOSE_FAILURE()
	{
		return getStaticField<jint>(
			"java.util.logging.ErrorManager",
			"CLOSE_FAILURE"
		);
	}
	inline jint ErrorManager::FLUSH_FAILURE()
	{
		return getStaticField<jint>(
			"java.util.logging.ErrorManager",
			"FLUSH_FAILURE"
		);
	}
	inline jint ErrorManager::FORMAT_FAILURE()
	{
		return getStaticField<jint>(
			"java.util.logging.ErrorManager",
			"FORMAT_FAILURE"
		);
	}
	inline jint ErrorManager::GENERIC_FAILURE()
	{
		return getStaticField<jint>(
			"java.util.logging.ErrorManager",
			"GENERIC_FAILURE"
		);
	}
	inline jint ErrorManager::OPEN_FAILURE()
	{
		return getStaticField<jint>(
			"java.util.logging.ErrorManager",
			"OPEN_FAILURE"
		);
	}
	inline jint ErrorManager::WRITE_FAILURE()
	{
		return getStaticField<jint>(
			"java.util.logging.ErrorManager",
			"WRITE_FAILURE"
		);
	}
	
	// Constructors
	inline ErrorManager::ErrorManager()
		: JObject(
			"java.util.logging.ErrorManager",
			"()V"
		) {}
	
	// Methods
	inline void ErrorManager::error(JString arg0, java::lang::Exception arg1, jint arg2) const
	{
		callMethod<void>(
			"error",
			"(Ljava/lang/String;Ljava/lang/Exception;I)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
} // namespace java::util::logging

// Base class headers

