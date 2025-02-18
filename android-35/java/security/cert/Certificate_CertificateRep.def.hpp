#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JObject;
class JString;

namespace java::security::cert
{
	class Certificate_CertificateRep : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Certificate_CertificateRep(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Certificate_CertificateRep(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace java::security::cert

