#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::security
{
	class KeyPair;
}

namespace android::security
{
	class AttestedKeyPair : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AttestedKeyPair(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AttestedKeyPair(QAndroidJniObject obj);
		
		// Constructors
		AttestedKeyPair(java::security::KeyPair arg0, __JniBaseClass arg1);
		
		// Methods
		__JniBaseClass getAttestationRecord();
		java::security::KeyPair getKeyPair();
	};
} // namespace android::security

