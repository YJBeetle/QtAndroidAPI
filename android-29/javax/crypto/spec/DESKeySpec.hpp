#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::crypto::spec
{
	class DESKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		static jint DES_KEY_LEN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DESKeySpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DESKeySpec(QAndroidJniObject obj);
		
		// Constructors
		DESKeySpec(jbyteArray arg0);
		DESKeySpec(jbyteArray arg0, jint arg1);
		
		// Methods
		static jboolean isParityAdjusted(jbyteArray arg0, jint arg1);
		static jboolean isWeak(jbyteArray arg0, jint arg1);
		jbyteArray getKey();
	};
} // namespace javax::crypto::spec

