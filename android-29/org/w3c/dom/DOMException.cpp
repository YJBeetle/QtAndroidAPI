#include "./DOMException.hpp"

namespace org::w3c::dom
{
	// Fields
	jshort DOMException::DOMSTRING_SIZE_ERR()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"DOMSTRING_SIZE_ERR"
		);
	}
	jshort DOMException::HIERARCHY_REQUEST_ERR()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"HIERARCHY_REQUEST_ERR"
		);
	}
	jshort DOMException::INDEX_SIZE_ERR()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"INDEX_SIZE_ERR"
		);
	}
	jshort DOMException::INUSE_ATTRIBUTE_ERR()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"INUSE_ATTRIBUTE_ERR"
		);
	}
	jshort DOMException::INVALID_ACCESS_ERR()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"INVALID_ACCESS_ERR"
		);
	}
	jshort DOMException::INVALID_CHARACTER_ERR()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"INVALID_CHARACTER_ERR"
		);
	}
	jshort DOMException::INVALID_MODIFICATION_ERR()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"INVALID_MODIFICATION_ERR"
		);
	}
	jshort DOMException::INVALID_STATE_ERR()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"INVALID_STATE_ERR"
		);
	}
	jshort DOMException::NAMESPACE_ERR()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"NAMESPACE_ERR"
		);
	}
	jshort DOMException::NOT_FOUND_ERR()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"NOT_FOUND_ERR"
		);
	}
	jshort DOMException::NOT_SUPPORTED_ERR()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"NOT_SUPPORTED_ERR"
		);
	}
	jshort DOMException::NO_DATA_ALLOWED_ERR()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"NO_DATA_ALLOWED_ERR"
		);
	}
	jshort DOMException::NO_MODIFICATION_ALLOWED_ERR()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"NO_MODIFICATION_ALLOWED_ERR"
		);
	}
	jshort DOMException::SYNTAX_ERR()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"SYNTAX_ERR"
		);
	}
	jshort DOMException::TYPE_MISMATCH_ERR()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"TYPE_MISMATCH_ERR"
		);
	}
	jshort DOMException::VALIDATION_ERR()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"VALIDATION_ERR"
		);
	}
	jshort DOMException::WRONG_DOCUMENT_ERR()
	{
		return QAndroidJniObject::getStaticField<jshort>(
			"org.w3c.dom.DOMException",
			"WRONG_DOCUMENT_ERR"
		);
	}
	jshort DOMException::code()
	{
		return __thiz.getField<jshort>(
			"code"
		);
	}
	
	DOMException::DOMException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DOMException::DOMException(jshort &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"org.w3c.dom.DOMException",
			"(SLjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	DOMException::DOMException(jshort &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"org.w3c.dom.DOMException",
			"(SLjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
} // namespace org::w3c::dom

