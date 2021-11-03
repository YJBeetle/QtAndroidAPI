#pragma once

#include "../../JObject.hpp"

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
		PKCS12Attribute(jbyteArray arg0);
		PKCS12Attribute(jstring arg0, jstring arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jbyteArray getEncoded();
		jstring getName();
		jstring getValue();
		jint hashCode();
		jstring toString();
	};
} // namespace java::security

