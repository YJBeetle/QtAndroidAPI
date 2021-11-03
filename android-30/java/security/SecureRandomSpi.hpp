#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JString;

namespace java::security
{
	class SecureRandomSpi : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SecureRandomSpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SecureRandomSpi(QJniObject obj);
		
		// Constructors
		SecureRandomSpi();
		
		// Methods
		JString toString();
	};
} // namespace java::security

