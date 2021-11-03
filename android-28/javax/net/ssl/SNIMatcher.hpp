#pragma once

#include "../../../JObject.hpp"

namespace javax::net::ssl
{
	class SNIServerName;
}

namespace javax::net::ssl
{
	class SNIMatcher : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SNIMatcher(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SNIMatcher(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint getType();
		jboolean matches(javax::net::ssl::SNIServerName arg0);
	};
} // namespace javax::net::ssl

