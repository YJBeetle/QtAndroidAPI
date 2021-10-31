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
		
		// Methods
		QAndroidJniObject getAttestationRecord();
		QAndroidJniObject getKeyPair();
	};
} // namespace android::security

