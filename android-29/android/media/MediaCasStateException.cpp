#include "../../JString.hpp"
#include "./MediaCasStateException.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaCasStateException::MediaCasStateException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	
	// Methods
	JString MediaCasStateException::getDiagnosticInfo()
	{
		return callObjectMethod(
			"getDiagnosticInfo",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

