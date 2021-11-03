#pragma once

#include "../../JObject.hpp"


namespace java::security
{
	class KeyStore_CallbackHandlerProtection : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyStore_CallbackHandlerProtection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyStore_CallbackHandlerProtection(QJniObject obj);
		
		// Constructors
		KeyStore_CallbackHandlerProtection(JObject arg0);
		
		// Methods
		JObject getCallbackHandler();
	};
} // namespace java::security

