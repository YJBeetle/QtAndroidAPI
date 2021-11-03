#pragma once

#include "../../../../../JObject.hpp"
#include "../../../../../java/lang/Exception.hpp"
#include "./IkeException.hpp"


namespace android::net::ipsec::ike::exceptions
{
	class IkeProtocolException : public android::net::ipsec::ike::exceptions::IkeException
	{
	public:
		// Fields
		static jint ERROR_TYPE_AUTHENTICATION_FAILED();
		static jint ERROR_TYPE_CHILD_SA_NOT_FOUND();
		static jint ERROR_TYPE_FAILED_CP_REQUIRED();
		static jint ERROR_TYPE_INTERNAL_ADDRESS_FAILURE();
		static jint ERROR_TYPE_INVALID_IKE_SPI();
		static jint ERROR_TYPE_INVALID_KE_PAYLOAD();
		static jint ERROR_TYPE_INVALID_MAJOR_VERSION();
		static jint ERROR_TYPE_INVALID_MESSAGE_ID();
		static jint ERROR_TYPE_INVALID_SELECTORS();
		static jint ERROR_TYPE_INVALID_SYNTAX();
		static jint ERROR_TYPE_NO_ADDITIONAL_SAS();
		static jint ERROR_TYPE_NO_PROPOSAL_CHOSEN();
		static jint ERROR_TYPE_SINGLE_PAIR_REQUIRED();
		static jint ERROR_TYPE_TEMPORARY_FAILURE();
		static jint ERROR_TYPE_TS_UNACCEPTABLE();
		static jint ERROR_TYPE_UNSUPPORTED_CRITICAL_PAYLOAD();
		
		// QJniObject forward
		template<typename ...Ts> explicit IkeProtocolException(const char *className, const char *sig, Ts...agv) : android::net::ipsec::ike::exceptions::IkeException(className, sig, std::forward<Ts>(agv)...) {}
		IkeProtocolException(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint getErrorType();
	};
} // namespace android::net::ipsec::ike::exceptions

