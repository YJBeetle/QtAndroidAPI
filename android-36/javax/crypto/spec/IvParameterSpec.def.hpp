#pragma once

#include "../../../JObject.hpp"

class JByteArray;

namespace javax::crypto::spec
{
	class IvParameterSpec : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IvParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IvParameterSpec(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		IvParameterSpec(JByteArray arg0);
		IvParameterSpec(JByteArray arg0, jint arg1, jint arg2);
		
		// Methods
		JByteArray getIV() const;
	};
} // namespace javax::crypto::spec

