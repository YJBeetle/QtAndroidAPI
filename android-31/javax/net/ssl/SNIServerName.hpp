#pragma once

#include "../../../JObject.hpp"


namespace javax::net::ssl
{
	class SNIServerName : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SNIServerName(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SNIServerName(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jbyteArray getEncoded();
		jint getType();
		jint hashCode();
		jstring toString();
	};
} // namespace javax::net::ssl

