#pragma once

#include "../../../JObject.hpp"


namespace javax::crypto::spec
{
	class IvParameterSpec : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IvParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IvParameterSpec(QAndroidJniObject obj);
		
		// Constructors
		IvParameterSpec(jbyteArray arg0);
		IvParameterSpec(jbyteArray arg0, jint arg1, jint arg2);
		
		// Methods
		jbyteArray getIV();
	};
} // namespace javax::crypto::spec

