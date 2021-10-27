#pragma once

#include "../../../__JniBaseClass.hpp"

namespace javax::net::ssl
{
	class SNIServerName;
}

namespace javax::net::ssl
{
	class SNIMatcher : public __JniBaseClass
	{
	public:
		// Fields
		
		SNIMatcher(QAndroidJniObject obj);
		// Constructors
		SNIMatcher() = default;
		
		// Methods
		jint getType();
		jboolean matches(javax::net::ssl::SNIServerName arg0);
	};
} // namespace javax::net::ssl

