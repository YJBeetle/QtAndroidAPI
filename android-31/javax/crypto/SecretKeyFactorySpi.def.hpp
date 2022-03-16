#pragma once

#include "../../JObject.hpp"

class JClass;

namespace javax::crypto
{
	class SecretKeyFactorySpi : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SecretKeyFactorySpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SecretKeyFactorySpi(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SecretKeyFactorySpi();
		
		// Methods
	};
} // namespace javax::crypto

