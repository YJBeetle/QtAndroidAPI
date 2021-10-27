#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::security
{
	class KeyStoreParameter : public __JniBaseClass
	{
	public:
		// Fields
		
		KeyStoreParameter(QAndroidJniObject obj);
		// Constructors
		KeyStoreParameter() = default;
		
		// Methods
		jboolean isEncryptionRequired();
	};
} // namespace android::security

