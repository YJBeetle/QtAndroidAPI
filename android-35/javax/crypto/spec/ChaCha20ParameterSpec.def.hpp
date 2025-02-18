#pragma once

#include "../../../JObject.hpp"

class JByteArray;

namespace javax::crypto::spec
{
	class ChaCha20ParameterSpec : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ChaCha20ParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ChaCha20ParameterSpec(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ChaCha20ParameterSpec(JByteArray arg0, jint arg1);
		
		// Methods
		jint getCounter() const;
		JByteArray getNonce() const;
	};
} // namespace javax::crypto::spec

