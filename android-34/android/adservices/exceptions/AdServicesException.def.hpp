#pragma once

#include "../../../java/lang/Exception.def.hpp"

class JString;
class JThrowable;

namespace android::adservices::exceptions
{
	class AdServicesException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AdServicesException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		AdServicesException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		AdServicesException(JString arg0);
		AdServicesException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::adservices::exceptions

