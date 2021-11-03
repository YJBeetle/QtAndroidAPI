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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RC2ParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RC2ParameterSpec(QAndroidJniObject obj);
		
		// Constructors
		RC2ParameterSpec(jint arg0);
		RC2ParameterSpec(jint arg0, JByteArray arg1);
		RC2ParameterSpec(jint arg0, JByteArray arg1, jint arg2);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getEffectiveKeyBits() const;
		JByteArray getIV() const;
		jint hashCode() const;
	};
} // namespace javax::crypto::spec

