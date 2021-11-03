#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JArray;
class JObject;
class JString;
namespace java::util::regex
{
	class Pattern;
}

namespace java::security
{
	class PKCS12Attribute : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PKCS12Attribute(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PKCS12Attribute(QJniObject obj);
		
		// Constructors
		PKCS12Attribute(JByteArray arg0);
		PKCS12Attribute(JString arg0, JString arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JByteArray getEncoded() const;
		JString getName() const;
		JString getValue() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace java::security

