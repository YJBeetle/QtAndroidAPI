#pragma once

#include "../../JObject.hpp"

namespace android::security
{
	class KeyStoreParameter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyStoreParameter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyStoreParameter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean isEncryptionRequired();
	};
} // namespace android::security

