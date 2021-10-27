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
		
		SealedObject(QAndroidJniObject obj);
		// Constructors
		SealedObject(__JniBaseClass &arg0, javax::crypto::Cipher &arg1);
		SealedObject() = default;
		
		// Methods
		jstring getAlgorithm();
		jobject getObject(__JniBaseClass arg0);
		jobject getObject(javax::crypto::Cipher arg0);
		jobject getObject(__JniBaseClass arg0, jstring arg1);
		jobject getObject(__JniBaseClass arg0, const QString &arg1);
	};
} // namespace javax::crypto

