#pragma once

#include "../../../JObject.hpp"

namespace javax::crypto::spec
{
	class DHGenParameterSpec : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DHGenParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DHGenParameterSpec(QJniObject obj);
		
		// Constructors
		DHGenParameterSpec(jint arg0, jint arg1);
		
		// Methods
		jint getExponentSize();
		jint getPrimeSize();
	};
} // namespace javax::crypto::spec

