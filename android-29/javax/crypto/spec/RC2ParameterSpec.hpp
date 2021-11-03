#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JObject;

namespace javax::crypto::spec
{
	class RC2ParameterSpec : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RC2ParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RC2ParameterSpec(QJniObject obj);
		
		// Constructors
		RC2ParameterSpec(jint arg0);
		RC2ParameterSpec(jint arg0, JByteArray arg1);
		RC2ParameterSpec(jint arg0, JByteArray arg1, jint arg2);
		
		// Methods
		jboolean equals(JObject arg0);
		jint getEffectiveKeyBits();
		JByteArray getIV();
		jint hashCode();
	};
} // namespace javax::crypto::spec

