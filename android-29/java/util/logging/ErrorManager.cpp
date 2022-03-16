#include "../../lang/Exception.hpp"
#include "../../../JString.hpp"
#include "./ErrorManager.hpp"

namespace java::util::logging
{
	// Fields
	jint ErrorManager::CLOSE_FAILURE()
	{
		return getStaticField<jint>(
			"java.util.logging.ErrorManager",
			"CLOSE_FAILURE"
		);
	}
	jint ErrorManager::FLUSH_FAILURE()
	{
		return getStaticField<jint>(
			"java.util.logging.ErrorManager",
			"FLUSH_FAILURE"
		);
	}
	jint ErrorManager::FORMAT_FAILURE()
	{
		return getStaticField<jint>(
			"java.util.logging.ErrorManager",
			"FORMAT_FAILURE"
		);
	}
	jint ErrorManager::GENERIC_FAILURE()
	{
		return getStaticField<jint>(
			"java.util.logging.ErrorManager",
			"GENERIC_FAILURE"
		);
	}
	jint ErrorManager::OPEN_FAILURE()
	{
		return getStaticField<jint>(
			"java.util.logging.ErrorManager",
			"OPEN_FAILURE"
		);
	}
	jint ErrorManager::WRITE_FAILURE()
	{
		return getStaticField<jint>(
			"java.util.logging.ErrorManager",
			"WRITE_FAILURE"
		);
	}
	
	// Constructors
	ErrorManager::ErrorManager()
		: JObject(
			"java.util.logging.ErrorManager",
			"()V"
		) {}
	
	// Methods
	void ErrorManager::error(JString arg0, java::lang::Exception arg1, jint arg2) const
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

