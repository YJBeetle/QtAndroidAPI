#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"


namespace org::w3c::dom
{
	class DOMException : public java::lang::RuntimeException
	{
	public:
		// Fields
		static jshort DOMSTRING_SIZE_ERR();
		static jshort HIERARCHY_REQUEST_ERR();
		static jshort INDEX_SIZE_ERR();
		static jshort INUSE_ATTRIBUTE_ERR();
		static jshort INVALID_ACCESS_ERR();
		static jshort INVALID_CHARACTER_ERR();
		static jshort INVALID_MODIFICATION_ERR();
		static jshort INVALID_STATE_ERR();
		static jshort NAMESPACE_ERR();
		static jshort NOT_FOUND_ERR();
		static jshort NOT_SUPPORTED_ERR();
		static jshort NO_DATA_ALLOWED_ERR();
		static jshort NO_MODIFICATION_ALLOWED_ERR();
		static jshort SYNTAX_ERR();
		static jshort TYPE_MISMATCH_ERR();
		static jshort VALIDATION_ERR();
		static jshort WRONG_DOCUMENT_ERR();
		jshort code();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DOMException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		DOMException(QAndroidJniObject obj);
		
		// Constructors
		DOMException(jshort arg0, jstring arg1);
		
		// Methods
	};
} // namespace org::w3c::dom

