#pragma once

#include "../../../JString.hpp"
#include "./DOMException.def.hpp"

namespace org::w3c::dom
{
	// Fields
	inline jshort DOMException::DOMSTRING_SIZE_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"DOMSTRING_SIZE_ERR"
		);
	}
	inline jshort DOMException::HIERARCHY_REQUEST_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"HIERARCHY_REQUEST_ERR"
		);
	}
	inline jshort DOMException::INDEX_SIZE_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"INDEX_SIZE_ERR"
		);
	}
	inline jshort DOMException::INUSE_ATTRIBUTE_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"INUSE_ATTRIBUTE_ERR"
		);
	}
	inline jshort DOMException::INVALID_ACCESS_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"INVALID_ACCESS_ERR"
		);
	}
	inline jshort DOMException::INVALID_CHARACTER_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"INVALID_CHARACTER_ERR"
		);
	}
	inline jshort DOMException::INVALID_MODIFICATION_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"INVALID_MODIFICATION_ERR"
		);
	}
	inline jshort DOMException::INVALID_STATE_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"INVALID_STATE_ERR"
		);
	}
	inline jshort DOMException::NAMESPACE_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"NAMESPACE_ERR"
		);
	}
	inline jshort DOMException::NOT_FOUND_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"NOT_FOUND_ERR"
		);
	}
	inline jshort DOMException::NOT_SUPPORTED_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"NOT_SUPPORTED_ERR"
		);
	}
	inline jshort DOMException::NO_DATA_ALLOWED_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"NO_DATA_ALLOWED_ERR"
		);
	}
	inline jshort DOMException::NO_MODIFICATION_ALLOWED_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"NO_MODIFICATION_ALLOWED_ERR"
		);
	}
	inline jshort DOMException::SYNTAX_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"SYNTAX_ERR"
		);
	}
	inline jshort DOMException::TYPE_MISMATCH_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"TYPE_MISMATCH_ERR"
		);
	}
	inline jshort DOMException::VALIDATION_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"VALIDATION_ERR"
		);
	}
	inline jshort DOMException::WRONG_DOCUMENT_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"WRONG_DOCUMENT_ERR"
		);
	}
	inline jshort DOMException::code()
	{
		return getField<jshort>(
			"code"
		);
	}
	
	// Constructors
	inline DOMException::DOMException(jshort arg0, JString arg1)
		: java::lang::RuntimeException(
			"org.w3c.dom.DOMException",
			"(SLjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	
	// Methods
} // namespace org::w3c::dom

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"

