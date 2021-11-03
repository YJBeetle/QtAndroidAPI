#pragma once

#include "../../../JObject.hpp"


namespace javax::crypto::spec
{
	class DESedeKeySpec : public JObject
	{
	public:
		// Fields
		static jint DES_EDE_KEY_LEN();
		
		// QJniObject forward
		template<typename ...Ts> explicit DESedeKeySpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DESedeKeySpec(QJniObject obj);
		
		// Constructors
		DESedeKeySpec(jbyteArray arg0);
		DESedeKeySpec(jbyteArray arg0, jint arg1);
		
		// Methods
		static jboolean isParityAdjusted(jbyteArray arg0, jint arg1);
		jbyteArray getKey();
	};
} // namespace javax::crypto::spec

