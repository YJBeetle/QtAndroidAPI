#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::net::ssl
{
	class SNIServerName : public __JniBaseClass
	{
	public:
		// Fields
		
		SNIServerName(QAndroidJniObject obj);
		// Constructors
		SNIServerName() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jbyteArray getEncoded();
		jint getType();
		jint hashCode();
		jstring toString();
	};
} // namespace javax::net::ssl

