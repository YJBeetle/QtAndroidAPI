#pragma once

#include "../../java/lang/Exception.def.hpp"

class JString;
class JThrowable;

namespace android::credentials
{
	class CreateCredentialException : public java::lang::Exception
	{
	public:
		// Fields
		static JString TYPE_INTERRUPTED();
		static JString TYPE_NO_CREATE_OPTIONS();
		static JString TYPE_UNKNOWN();
		static JString TYPE_USER_CANCELED();
		
		// QJniObject forward
		template<typename ...Ts> explicit CreateCredentialException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		CreateCredentialException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		CreateCredentialException(JString arg0);
		CreateCredentialException(JString arg0, JString arg1);
		CreateCredentialException(JString arg0, JThrowable arg1);
		CreateCredentialException(JString arg0, JString arg1, JThrowable arg2);
		
		// Methods
		JString getType() const;
	};
} // namespace android::credentials

