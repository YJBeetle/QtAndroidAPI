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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SecureRandomSpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SecureRandomSpi(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		SecureRandomSpi();
		
		// Methods
		JString toString() const;
	};
} // namespace java::security

