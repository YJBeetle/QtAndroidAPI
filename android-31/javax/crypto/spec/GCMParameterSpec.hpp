#pragma once

#include "../../../JObject.hpp"

class JByteArray;

namespace javax::crypto::spec
{
	class GCMParameterSpec : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GCMParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GCMParameterSpec(QAndroidJniObject obj);
		
		// Constructors
		GCMParameterSpec(jint arg0, JByteArray arg1);
		GCMParameterSpec(jint arg0, JByteArray arg1, jint arg2, jint arg3);
		
		// Methods
		JByteArray getIV();
		jint getTLen();
	};
} // namespace javax::crypto::spec

