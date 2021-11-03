#include "../../JString.hpp"
#include "./MediaCasStateException.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaCasStateException::MediaCasStateException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
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

