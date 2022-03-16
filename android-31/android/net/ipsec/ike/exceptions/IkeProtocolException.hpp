#pragma once

#include "./IkeProtocolException.def.hpp"

namespace android::net::ipsec::ike::exceptions
{
	// Fields
	inline jint IkeProtocolException::ERROR_TYPE_AUTHENTICATION_FAILED()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_AUTHENTICATION_FAILED"
		);
	}
	inline jint IkeProtocolException::ERROR_TYPE_CHILD_SA_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_CHILD_SA_NOT_FOUND"
		);
	}
	inline jint IkeProtocolException::ERROR_TYPE_FAILED_CP_REQUIRED()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_FAILED_CP_REQUIRED"
		);
	}
	inline jint IkeProtocolException::ERROR_TYPE_INTERNAL_ADDRESS_FAILURE()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_INTERNAL_ADDRESS_FAILURE"
		);
	}
	inline jint IkeProtocolException::ERROR_TYPE_INVALID_IKE_SPI()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_INVALID_IKE_SPI"
		);
	}
	inline jint IkeProtocolException::ERROR_TYPE_INVALID_KE_PAYLOAD()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_INVALID_KE_PAYLOAD"
		);
	}
	inline jint IkeProtocolException::ERROR_TYPE_INVALID_MAJOR_VERSION()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_INVALID_MAJOR_VERSION"
		);
	}
	inline jint IkeProtocolException::ERROR_TYPE_INVALID_MESSAGE_ID()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_INVALID_MESSAGE_ID"
		);
	}
	inline jint IkeProtocolException::ERROR_TYPE_INVALID_SELECTORS()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_INVALID_SELECTORS"
		);
	}
	inline jint IkeProtocolException::ERROR_TYPE_INVALID_SYNTAX()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_INVALID_SYNTAX"
		);
	}
	inline jint IkeProtocolException::ERROR_TYPE_NO_ADDITIONAL_SAS()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_NO_ADDITIONAL_SAS"
		);
	}
	inline jint IkeProtocolException::ERROR_TYPE_NO_PROPOSAL_CHOSEN()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_NO_PROPOSAL_CHOSEN"
		);
	}
	inline jint IkeProtocolException::ERROR_TYPE_SINGLE_PAIR_REQUIRED()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_SINGLE_PAIR_REQUIRED"
		);
	}
	inline jint IkeProtocolException::ERROR_TYPE_TEMPORARY_FAILURE()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_TEMPORARY_FAILURE"
		);
	}
	inline jint IkeProtocolException::ERROR_TYPE_TS_UNACCEPTABLE()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_TS_UNACCEPTABLE"
		);
	}
	inline jint IkeProtocolException::ERROR_TYPE_UNSUPPORTED_CRITICAL_PAYLOAD()
	{
		return getStaticField<jint>(
			"android.net.ipsec.ike.exceptions.IkeProtocolException",
			"ERROR_TYPE_UNSUPPORTED_CRITICAL_PAYLOAD"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint IkeProtocolException::getErrorType() const
	{
		return callMethod<jint>(
			"getErrorType",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike::exceptions

// Base class headers
#include "../../../../../java/lang/Exception.hpp"
#include "./IkeException.hpp"

