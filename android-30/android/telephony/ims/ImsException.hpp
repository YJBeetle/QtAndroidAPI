#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"


namespace android::telephony::ims
{
	class ImsException : public java::lang::Exception
	{
	public:
		// Fields
		static jint CODE_ERROR_INVALID_SUBSCRIPTION();
		static jint CODE_ERROR_SERVICE_UNAVAILABLE();
		static jint CODE_ERROR_UNSPECIFIED();
		static jint CODE_ERROR_UNSUPPORTED_OPERATION();
		
		// QJniObject forward
		template<typename ...Ts> explicit ImsException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		ImsException(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint getCode();
	};
} // namespace android::telephony::ims

