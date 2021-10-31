#include "./LSException.hpp"

namespace org::w3c::dom::ls
{
	// Fields
	jshort LSException::PARSE_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.ls.LSException",
			"PARSE_ERR"
		);
	}
	jshort LSException::SERIALIZE_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.ls.LSException",
			"SERIALIZE_ERR"
		);
	}
	jshort LSException::code()
	{
		return getField<jshort>(
			"code"
		);
	}
	
	// QJniObject forward
	LSException::LSException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	LSException::LSException(jshort arg0, jstring arg1)
		: java::lang::RuntimeException(
			"org.w3c.dom.ls.LSException",
			"(SLjava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace org::w3c::dom::ls

