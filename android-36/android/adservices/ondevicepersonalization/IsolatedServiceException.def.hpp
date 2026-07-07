#pragma once

#include "../../../java/lang/Exception.def.hpp"

class JString;
class JThrowable;

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
		IsolatedServiceException(jint arg0, JThrowable arg1);
		IsolatedServiceException(jint arg0, JString arg1, JThrowable arg2);
		
		// Methods
		jint getErrorCode() const;
	};
} // namespace android::adservices::ondevicepersonalization

