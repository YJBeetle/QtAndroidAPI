#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::net::ssl
{
	class SNIServerName : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SNIServerName(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SNIServerName(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jbyteArray getEncoded();
		jint getType();
		jint hashCode();
		jstring toString();
	};
} // namespace javax::net::ssl

