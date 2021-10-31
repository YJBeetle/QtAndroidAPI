#include "./StandardConstants.hpp"

namespace javax::net::ssl
{
	// Fields
	jint StandardConstants::SNI_HOST_NAME()
	{
		return getStaticField<jint>(
			"javax.net.ssl.StandardConstants",
			"SNI_HOST_NAME"
		);
	}
	
	// QAndroidJniObject forward
	StandardConstants::StandardConstants(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace javax::net::ssl

