#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JCharArray;
class JObject;
class JString;

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
		jboolean equals(JObject arg0);
		JByteArray getEncoded();
		jint getType();
		jint hashCode();
		JString toString();
	};
} // namespace javax::net::ssl

