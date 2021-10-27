#include "./StandardConstants.hpp"

namespace javax::net::ssl
{
	// Fields
	jint StandardConstants::SNI_HOST_NAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.net.ssl.StandardConstants",
			"SNI_HOST_NAME"
		);
	}
	
	StandardConstants::StandardConstants(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace javax::net::ssl

