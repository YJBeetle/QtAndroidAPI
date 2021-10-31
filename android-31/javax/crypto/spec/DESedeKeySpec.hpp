#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::crypto::spec
{
	class DESedeKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		static jint DES_EDE_KEY_LEN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DESedeKeySpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DESedeKeySpec(QAndroidJniObject obj);
		
		// Constructors
		DESedeKeySpec(jbyteArray arg0);
		DESedeKeySpec(jbyteArray arg0, jint arg1);
		
		// Methods
		static jboolean isParityAdjusted(jbyteArray arg0, jint arg1);
		jbyteArray getKey();
	};
} // namespace javax::crypto::spec

