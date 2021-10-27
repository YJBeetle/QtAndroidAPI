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
		
		AttestedKeyPair(QAndroidJniObject obj);
		// Constructors
		AttestedKeyPair() = default;
		
		// Methods
		QAndroidJniObject getAttestationRecord();
		QAndroidJniObject getKeyPair();
	};
} // namespace android::security

