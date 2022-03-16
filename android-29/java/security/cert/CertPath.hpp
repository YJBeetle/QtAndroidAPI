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
		CertPath(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getCertificates() const;
		JByteArray getEncoded() const;
		JByteArray getEncoded(JString arg0) const;
		JObject getEncodings() const;
		JString getType() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace java::security::cert

