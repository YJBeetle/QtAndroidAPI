#pragma once

#include "../../../JObject.hpp"

class JString;

namespace java::security::spec
{
	class ECGenParameterSpec : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ECGenParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ECGenParameterSpec(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ECGenParameterSpec(JString arg0);
		
		// Methods
	};
} // namespace java::security::spec

