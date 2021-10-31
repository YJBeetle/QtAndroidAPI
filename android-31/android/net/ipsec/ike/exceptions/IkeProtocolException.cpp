#include "./IkeProtocolException.hpp"

namespace android::net::ipsec::ike::exceptions
{
	// Fields
	jint IkeProtocolException::ERROR_TYPE_AUTHENTICATION_FAILED()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_AUTHENTICATION_FAILED"
		);
	}
	jint IkeProtocolException::ERROR_TYPE_CHILD_SA_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_CHILD_SA_NOT_FOUND"
		);
	}
	jint IkeProtocolException::ERROR_TYPE_FAILED_CP_REQUIRED()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_FAILED_CP_REQUIRED"
		);
	}
	jint IkeProtocolException::ERROR_TYPE_INTERNAL_ADDRESS_FAILURE()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_INTERNAL_ADDRESS_FAILURE"
		);
	}
	jint IkeProtocolException::ERROR_TYPE_INVALID_IKE_SPI()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_INVALID_IKE_SPI"
		);
	}
	jint IkeProtocolException::ERROR_TYPE_INVALID_KE_PAYLOAD()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_INVALID_KE_PAYLOAD"
		);
	}
	jint IkeProtocolException::ERROR_TYPE_INVALID_MAJOR_VERSION()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_INVALID_MAJOR_VERSION"
		);
	}
	jint IkeProtocolException::ERROR_TYPE_INVALID_MESSAGE_ID()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_INVALID_MESSAGE_ID"
		);
	}
	jint IkeProtocolException::ERROR_TYPE_INVALID_SELECTORS()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_INVALID_SELECTORS"
		);
	}
	jint IkeProtocolException::ERROR_TYPE_INVALID_SYNTAX()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_INVALID_SYNTAX"
		);
	}
	jint IkeProtocolException::ERROR_TYPE_NO_ADDITIONAL_SAS()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_NO_ADDITIONAL_SAS"
		);
	}
	jint IkeProtocolException::ERROR_TYPE_NO_PROPOSAL_CHOSEN()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_NO_PROPOSAL_CHOSEN"
		);
	}
	jint IkeProtocolException::ERROR_TYPE_SINGLE_PAIR_REQUIRED()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_SINGLE_PAIR_REQUIRED"
		);
	}
	jint IkeProtocolException::ERROR_TYPE_TEMPORARY_FAILURE()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_TEMPORARY_FAILURE"
		);
	}
	jint IkeProtocolException::ERROR_TYPE_TS_UNACCEPTABLE()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_TS_UNACCEPTABLE"
		);
	}
	jint IkeProtocolException::ERROR_TYPE_UNSUPPORTED_CRITICAL_PAYLOAD()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_UNSUPPORTED_CRITICAL_PAYLOAD"
		);
	}
	
	// QJniObject forward
	IkeProtocolException::IkeProtocolException(QJniObject obj) : android::net::ipsec::ike::exceptions::IkeException(obj) {}
	
	// Constructors
	
	// Methods
	jint IkeProtocolException::getErrorType()
	{
		return callMethod<jint>(
			"getErrorType",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike::exceptions

