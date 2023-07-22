#pragma once

#include "../../java/lang/Exception.def.hpp"

class JString;

namespace android::telephony
{
	class TelephonyManager_NetworkSlicingException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TelephonyManager_NetworkSlicingException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyManager_NetworkSlicingException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		
		// Methods
		JString toString() const;
	};
} // namespace android::telephony

