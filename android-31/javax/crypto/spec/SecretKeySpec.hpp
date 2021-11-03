#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JObject;
class JString;

namespace javax::crypto::spec
{
	class SecretKeySpec : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SecretKeySpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SecretKeySpec(QJniObject obj);
		
		// Constructors
		SecretKeySpec(JByteArray arg0, JString arg1);
		SecretKeySpec(JByteArray arg0, jint arg1, jint arg2, JString arg3);
		
		// Methods
		jboolean equals(JObject arg0);
		JString getAlgorithm();
		JByteArray getEncoded();
		JString getFormat();
		jint hashCode();
	};
} // namespace javax::crypto::spec

