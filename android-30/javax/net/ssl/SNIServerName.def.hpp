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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SNIServerName(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SNIServerName(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JByteArray getEncoded() const;
		jint getType() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace javax::net::ssl

