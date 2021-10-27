#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::crypto::spec
{
	class DESKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		static jint DES_KEY_LEN();
		
		DESKeySpec(QAndroidJniObject obj);
		// Constructors
		DESKeySpec(jbyteArray &arg0);
		DESKeySpec(jbyteArray &arg0, jint &arg1);
		DESKeySpec() = default;
		
		// Methods
		static jboolean isParityAdjusted(jbyteArray arg0, jint arg1);
		static jboolean isWeak(jbyteArray arg0, jint arg1);
		jbyteArray getKey();
	};
} // namespace javax::crypto::spec

