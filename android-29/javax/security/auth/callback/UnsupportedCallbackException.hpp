#pragma once

#include "../../../../java/lang/Exception.hpp"

class JString;

namespace javax::security::auth::callback
{
	class UnsupportedCallbackException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnsupportedCallbackException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		UnsupportedCallbackException(QAndroidJniObject obj);
		
		// Constructors
		UnsupportedCallbackException(JObject arg0);
		UnsupportedCallbackException(JObject arg0, JString arg1);
		
		// Methods
		JObject getCallback();
	};
} // namespace javax::security::auth::callback

