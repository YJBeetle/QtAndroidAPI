#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JObject;

namespace javax::crypto::spec
{
	class RC5ParameterSpec : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RC5ParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RC5ParameterSpec(QAndroidJniObject obj);
		
		// Constructors
		RC5ParameterSpec(jint arg0, jint arg1, jint arg2);
		RC5ParameterSpec(jint arg0, jint arg1, jint arg2, JByteArray arg3);
		RC5ParameterSpec(jint arg0, jint arg1, jint arg2, JByteArray arg3, jint arg4);
		
		// Methods
		jboolean equals(JObject arg0);
		JByteArray getIV();
		jint getRounds();
		jint getVersion();
		jint getWordSize();
		jint hashCode();
	};
} // namespace javax::crypto::spec

