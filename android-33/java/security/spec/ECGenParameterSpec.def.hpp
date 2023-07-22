#pragma once

#include "./NamedParameterSpec.def.hpp"

class JString;

namespace java::security::spec
{
	class ECGenParameterSpec : public java::security::spec::NamedParameterSpec
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ECGenParameterSpec(const char *className, const char *sig, Ts...agv) : java::security::spec::NamedParameterSpec(className, sig, std::forward<Ts>(agv)...) {}
		ECGenParameterSpec(QJniObject obj) : java::security::spec::NamedParameterSpec(obj) {}
		
		// Constructors
		ECGenParameterSpec(JString arg0);
		
		// Methods
	};
} // namespace java::security::spec

