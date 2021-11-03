#pragma once

#include "../../../JObject.hpp"

namespace javax::crypto::spec
{
	class DHGenParameterSpec : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DHGenParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DHGenParameterSpec(QAndroidJniObject obj);
		
		// Constructors
		DHGenParameterSpec(jint arg0, jint arg1);
		
		// Methods
		jint getExponentSize() const;
		jint getPrimeSize() const;
	};
} // namespace javax::crypto::spec

