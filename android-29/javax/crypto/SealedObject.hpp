#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace javax::crypto
{
	class Cipher;
}

namespace javax::crypto
{
	class SealedObject : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SealedObject(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SealedObject(QAndroidJniObject obj);
		
		// Constructors
		SealedObject(__JniBaseClass arg0, javax::crypto::Cipher arg1);
		
		// Methods
		jstring getAlgorithm();
		jobject getObject(__JniBaseClass arg0);
		jobject getObject(javax::crypto::Cipher arg0);
		jobject getObject(__JniBaseClass arg0, jstring arg1);
	};
} // namespace javax::crypto

