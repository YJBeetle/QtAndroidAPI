#pragma once

#include "../../../java/lang/Exception.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	class IsolatedServiceException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IsolatedServiceException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		IsolatedServiceException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		IsolatedServiceException(jint arg0);
		
		// Methods
	};
} // namespace android::adservices::ondevicepersonalization

