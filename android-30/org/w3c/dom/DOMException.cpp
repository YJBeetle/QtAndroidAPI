#include "./DOMException.hpp"

namespace org::w3c::dom
{
	// Fields
	jshort DOMException::DOMSTRING_SIZE_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"DOMSTRING_SIZE_ERR"
		);
	}
	jshort DOMException::HIERARCHY_REQUEST_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"HIERARCHY_REQUEST_ERR"
		);
	}
	jshort DOMException::INDEX_SIZE_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"INDEX_SIZE_ERR"
		);
	}
	jshort DOMException::INUSE_ATTRIBUTE_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"INUSE_ATTRIBUTE_ERR"
		);
	}
	jshort DOMException::INVALID_ACCESS_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"INVALID_ACCESS_ERR"
		);
	}
	jshort DOMException::INVALID_CHARACTER_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"INVALID_CHARACTER_ERR"
		);
	}
	jshort DOMException::INVALID_MODIFICATION_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"INVALID_MODIFICATION_ERR"
		);
	}
	jshort DOMException::INVALID_STATE_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"INVALID_STATE_ERR"
		);
	}
	jshort DOMException::NAMESPACE_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"NAMESPACE_ERR"
		);
	}
	jshort DOMException::NOT_FOUND_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"NOT_FOUND_ERR"
		);
	}
	jshort DOMException::NOT_SUPPORTED_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"NOT_SUPPORTED_ERR"
		);
	}
	jshort DOMException::NO_DATA_ALLOWED_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"NO_DATA_ALLOWED_ERR"
		);
	}
	jshort DOMException::NO_MODIFICATION_ALLOWED_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"NO_MODIFICATION_ALLOWED_ERR"
		);
	}
	jshort DOMException::SYNTAX_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"SYNTAX_ERR"
		);
	}
	jshort DOMException::TYPE_MISMATCH_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"TYPE_MISMATCH_ERR"
		);
	}
	jshort DOMException::VALIDATION_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"VALIDATION_ERR"
		);
	}
	jshort DOMException::WRONG_DOCUMENT_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"WRONG_DOCUMENT_ERR"
		);
	}
	jshort DOMException::code()
	{
		return getField<jshort>(
			"code"
		);
	}
	
	// QJniObject forward
	DOMException::DOMException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	DOMException::DOMException(jshort arg0, jstring arg1)
		: java::lang::RuntimeException(
			"org.w3c.dom.DOMException",
			"(SLjava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace org::w3c::dom

