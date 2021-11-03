#pragma once

#include "../../JObject.hpp"

class JClass;

namespace java::security
{
	class KeyFactorySpi : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyFactorySpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyFactorySpi(QJniObject obj);
		
		// Constructors
		KeyFactorySpi();
		
		// Methods
	};
} // namespace java::security

