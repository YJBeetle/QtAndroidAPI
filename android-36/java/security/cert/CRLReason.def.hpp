#pragma once

#include "../../lang/Enum.def.hpp"

class JArray;
class JString;

namespace java::security::cert
{
	class CRLReason : public java::lang::Enum
	{
	public:
		// Fields
		static java::security::cert::CRLReason AA_COMPROMISE();
		static java::security::cert::CRLReason AFFILIATION_CHANGED();
		static java::security::cert::CRLReason CA_COMPROMISE();
		static java::security::cert::CRLReason CERTIFICATE_HOLD();
		static java::security::cert::CRLReason CESSATION_OF_OPERATION();
		static java::security::cert::CRLReason KEY_COMPROMISE();
		static java::security::cert::CRLReason PRIVILEGE_WITHDRAWN();
		static java::security::cert::CRLReason REMOVE_FROM_CRL();
		static java::security::cert::CRLReason SUPERSEDED();
		static java::security::cert::CRLReason UNSPECIFIED();
		static java::security::cert::CRLReason UNUSED();
		
		// QJniObject forward
		template<typename ...Ts> explicit CRLReason(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		CRLReason(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static java::security::cert::CRLReason valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::security::cert

