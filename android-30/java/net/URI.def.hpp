#pragma once

#include "../../JObject.hpp"

class JCharArray;
class JIntArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JObject;
class JString;
namespace java::lang
{
	class StringBuilder;
}
namespace java::net
{
	class URL;
}
namespace java::nio::charset
{
	class CharsetEncoder;
}

namespace java::net
{
	class URI : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit URI(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		URI(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		URI(JString arg0);
		URI(JString arg0, JString arg1, JString arg2);
		URI(JString arg0, JString arg1, JString arg2, JString arg3);
		URI(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4);
		URI(JString arg0, JString arg1, JString arg2, jint arg3, JString arg4, JString arg5, JString arg6);
		
		// Methods
		static java::net::URI create(JString arg0);
		jint compareTo(JObject arg0) const;
		jint compareTo(java::net::URI arg0) const;
		jboolean equals(JObject arg0) const;
		JString getAuthority() const;
		JString getFragment() const;
		JString getHost() const;
		JString getPath() const;
		jint getPort() const;
		JString getQuery() const;
		JString getRawAuthority() const;
		JString getRawFragment() const;
		JString getRawPath() const;
		JString getRawQuery() const;
		JString getRawSchemeSpecificPart() const;
		JString getRawUserInfo() const;
		JString getScheme() const;
		JString getSchemeSpecificPart() const;
		JString getUserInfo() const;
		jint hashCode() const;
		jboolean isAbsolute() const;
		jboolean isOpaque() const;
		java::net::URI normalize() const;
		java::net::URI parseServerAuthority() const;
		java::net::URI relativize(java::net::URI arg0) const;
		java::net::URI resolve(JString arg0) const;
		java::net::URI resolve(java::net::URI arg0) const;
		JString toASCIIString() const;
		JString toString() const;
		java::net::URL toURL() const;
	};
} // namespace java::net

