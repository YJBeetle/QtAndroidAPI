#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::crypto::spec
{
	class PBEKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		PBEKeySpec(QAndroidJniObject obj);
		// Constructors
		PBEKeySpec(jcharArray &arg0);
		PBEKeySpec(jcharArray &arg0, jbyteArray &arg1, jint &arg2);
		PBEKeySpec(jcharArray &arg0, jbyteArray &arg1, jint &arg2, jint &arg3);
		PBEKeySpec() = default;
		
		// Methods
		void clearPassword();
		jint getIterationCount();
		jint getKeyLength();
		jcharArray getPassword();
		jbyteArray getSalt();
	};
} // namespace javax::crypto::spec

