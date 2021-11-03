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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PKCS12Attribute(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PKCS12Attribute(QAndroidJniObject obj);
		
		// Constructors
		PKCS12Attribute(JByteArray arg0);
		PKCS12Attribute(JString arg0, JString arg1);
		
		// Methods
		jboolean equals(JObject arg0);
		JByteArray getEncoded();
		JString getName();
		JString getValue();
		jint hashCode();
		JString toString();
	};
} // namespace java::security

