#pragma once

#include "../../../../java/lang/Exception.hpp"

class JString;

namespace javax::security::auth::callback
{
	class UnsupportedCallbackException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnsupportedCallbackException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		UnsupportedCallbackException(QJniObject obj);
		
		// Constructors
		UnsupportedCallbackException(JObject arg0);
		UnsupportedCallbackException(JObject arg0, JString arg1);
		
		// Methods
		JObject getCallback() const;
	};
} // namespace javax::security::auth::callback

