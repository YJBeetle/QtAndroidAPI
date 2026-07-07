#pragma once

#include "../../java/lang/Exception.def.hpp"

class JString;
class JThrowable;

namespace android::credentials
{
	class GetCredentialException : public java::lang::Exception
	{
	public:
		// Fields
		static JString TYPE_INTERRUPTED();
		static JString TYPE_NO_CREDENTIAL();
		static JString TYPE_UNKNOWN();
		static JString TYPE_USER_CANCELED();
		
		// QJniObject forward
		template<typename ...Ts> explicit GetCredentialException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		GetCredentialException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		GetCredentialException(JString arg0);
		GetCredentialException(JString arg0, JString arg1);
		GetCredentialException(JString arg0, JThrowable arg1);
		GetCredentialException(JString arg0, JString arg1, JThrowable arg2);
		
		// Methods
		JString getType() const;
	};
} // namespace android::credentials

