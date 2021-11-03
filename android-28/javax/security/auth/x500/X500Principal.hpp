#pragma once

#include "../../../../JObject.hpp"

class JByteArray;
namespace java::io
{
	class InputStream;
}
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

namespace javax::security::auth::x500
{
	class X500Principal : public JObject
	{
	public:
		// Fields
		static JString CANONICAL();
		static JString RFC1779();
		static JString RFC2253();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit X500Principal(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		X500Principal(QAndroidJniObject obj);
		
		// Constructors
		X500Principal(JByteArray arg0);
		X500Principal(java::io::InputStream arg0);
		X500Principal(JString arg0);
		X500Principal(JString arg0, JObject arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JByteArray getEncoded() const;
		JString getName() const;
		JString getName(JString arg0) const;
		JString getName(JString arg0, JObject arg1) const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace javax::security::auth::x500

