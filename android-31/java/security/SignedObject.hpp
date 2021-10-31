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
		
		// QJniObject forward
		template<typename ...Ts> explicit SignedObject(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SignedObject(QJniObject obj);
		
		// Constructors
		SignedObject(__JniBaseClass arg0, __JniBaseClass arg1, java::security::Signature arg2);
		
		// Methods
		jstring getAlgorithm();
		jobject getObject();
		jbyteArray getSignature();
		jboolean verify(__JniBaseClass arg0, java::security::Signature arg1);
	};
} // namespace java::security

