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
		RC5ParameterSpec(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		RC5ParameterSpec(jint arg0, jint arg1, jint arg2);
		RC5ParameterSpec(jint arg0, jint arg1, jint arg2, JByteArray arg3);
		RC5ParameterSpec(jint arg0, jint arg1, jint arg2, JByteArray arg3, jint arg4);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JByteArray getIV() const;
		jint getRounds() const;
		jint getVersion() const;
		jint getWordSize() const;
		jint hashCode() const;
	};
} // namespace javax::crypto::spec

