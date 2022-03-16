#include "../../JString.hpp"
#include "./MediaCasStateException.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	JString MediaCasStateException::getDiagnosticInfo() const
	{
		return callObjectMethod(
			"getDiagnosticInfo",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

