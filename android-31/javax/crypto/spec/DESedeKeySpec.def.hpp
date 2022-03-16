#pragma once

#include "../../../JObject.hpp"

class JByteArray;

namespace javax::crypto::spec
{
	class DESedeKeySpec : public JObject
	{
	public:
		// Fields
		static jint DES_EDE_KEY_LEN();
		
		// QJniObject forward
		template<typename ...Ts> explicit DESedeKeySpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DESedeKeySpec(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DESedeKeySpec(JByteArray arg0);
		DESedeKeySpec(JByteArray arg0, jint arg1);
		
		// Methods
		static jboolean isParityAdjusted(JByteArray arg0, jint arg1);
		JByteArray getKey() const;
	};
} // namespace javax::crypto::spec

