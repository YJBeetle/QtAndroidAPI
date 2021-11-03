#pragma once

#include "../../../JObject.hpp"


namespace java::security::spec
{
	class ECGenParameterSpec : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ECGenParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ECGenParameterSpec(QJniObject obj);
		
		// Constructors
		ECGenParameterSpec(jstring arg0);
		
		// Methods
	};
} // namespace java::security::spec

