#pragma once

#include "./BadPaddingException.def.hpp"

class JString;

namespace javax::crypto
{
	class AEADBadTagException : public javax::crypto::BadPaddingException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AEADBadTagException(const char *className, const char *sig, Ts...agv) : javax::crypto::BadPaddingException(className, sig, std::forward<Ts>(agv)...) {}
		AEADBadTagException(QJniObject obj) : javax::crypto::BadPaddingException(obj) {}
		
		// Constructors
		AEADBadTagException();
		AEADBadTagException(JString arg0);
		
		// Methods
	};
} // namespace javax::crypto

