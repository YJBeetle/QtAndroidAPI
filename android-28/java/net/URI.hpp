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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit URI(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		URI(QAndroidJniObject obj);
		
		// Constructors
		URI(JString arg0);
		URI(JString arg0, JString arg1, JString arg2);
		URI(JString arg0, JString arg1, JString arg2, JString arg3);
		URI(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4);
		URI(JString arg0, JString arg1, JString arg2, jint arg3, JString arg4, JString arg5, JString arg6);
		
		// Methods
		static java::net::URI create(JString arg0);
		jint compareTo(JObject arg0);
		jint compareTo(java::net::URI arg0);
		jboolean equals(JObject arg0);
		JString getAuthority();
		JString getFragment();
		JString getHost();
		JString getPath();
		jint getPort();
		JString getQuery();
		JString getRawAuthority();
		JString getRawFragment();
		JString getRawPath();
		JString getRawQuery();
		JString getRawSchemeSpecificPart();
		JString getRawUserInfo();
		JString getScheme();
		JString getSchemeSpecificPart();
		JString getUserInfo();
		jint hashCode();
		jboolean isAbsolute();
		jboolean isOpaque();
		java::net::URI normalize();
		java::net::URI parseServerAuthority();
		java::net::URI relativize(java::net::URI arg0);
		java::net::URI resolve(JString arg0);
		java::net::URI resolve(java::net::URI arg0);
		JString toASCIIString();
		JString toString();
		java::net::URL toURL();
	};
} // namespace java::net

