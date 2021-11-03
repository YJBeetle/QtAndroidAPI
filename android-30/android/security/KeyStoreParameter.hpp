#pragma once

#include "../../JObject.hpp"

namespace android::security
{
	class KeyStoreParameter : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyStoreParameter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyStoreParameter(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean isEncryptionRequired() const;
	};
} // namespace android::security

