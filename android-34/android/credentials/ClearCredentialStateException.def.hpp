#pragma once

#include "../../java/lang/Exception.def.hpp"

class JString;
class JThrowable;

namespace android::credentials
{
	class ClearCredentialStateException : public java::lang::Exception
	{
	public:
		// Fields
		static JString TYPE_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit ClearCredentialStateException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		ClearCredentialStateException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		ClearCredentialStateException(JString arg0);
		ClearCredentialStateException(JString arg0, JString arg1);
		ClearCredentialStateException(JString arg0, JThrowable arg1);
		ClearCredentialStateException(JString arg0, JString arg1, JThrowable arg2);
		
		// Methods
		JString getType() const;
	};
} // namespace android::credentials

