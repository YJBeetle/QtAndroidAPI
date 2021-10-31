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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SNIMatcher(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SNIMatcher(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint getType();
		jboolean matches(javax::net::ssl::SNIServerName arg0);
	};
} // namespace javax::net::ssl

