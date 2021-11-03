#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JObject;
class JString;

namespace java::security::cert
{
	class CertPath : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertPath(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CertPath(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		JObject getCertificates();
		JByteArray getEncoded();
		JByteArray getEncoded(JString arg0);
		JObject getEncodings();
		JString getType();
		jint hashCode();
		JString toString();
	};
} // namespace java::security::cert

