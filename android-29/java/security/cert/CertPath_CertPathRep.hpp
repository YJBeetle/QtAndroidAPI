#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JObject;
class JString;

namespace java::security::cert
{
	class CertPath_CertPathRep : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertPath_CertPathRep(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CertPath_CertPathRep(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::security::cert

