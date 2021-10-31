#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::security
{
	class KeyStoreParameter : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyStoreParameter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyStoreParameter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean isEncryptionRequired();
	};
} // namespace android::security

