#pragma once

#include "../../../JObject.hpp"

class JString;

namespace java::security::spec
{
	class NamedParameterSpec : public JObject
	{
	public:
		// Fields
		static java::security::spec::NamedParameterSpec ED25519();
		static java::security::spec::NamedParameterSpec ED448();
		static java::security::spec::NamedParameterSpec X25519();
		static java::security::spec::NamedParameterSpec X448();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NamedParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NamedParameterSpec(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		NamedParameterSpec(JString arg0);
		
		// Methods
		JString getName() const;
	};
} // namespace java::security::spec

