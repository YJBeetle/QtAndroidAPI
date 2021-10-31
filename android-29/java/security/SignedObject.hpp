#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::security
{
	class Signature;
}

namespace java::security
{
	class SignedObject : public __JniBaseClass
	{
	public:
		// Fields
		
		SignedObject(QAndroidJniObject obj);
		// Constructors
		SignedObject(__JniBaseClass arg0, __JniBaseClass arg1, java::security::Signature arg2);
		SignedObject() = default;
		
		// Methods
		jstring getAlgorithm();
		jobject getObject();
		jbyteArray getSignature();
		jboolean verify(__JniBaseClass arg0, java::security::Signature arg1);
	};
} // namespace java::security

