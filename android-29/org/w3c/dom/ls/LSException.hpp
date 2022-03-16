#pragma once

#include "../../../../JString.hpp"
#include "./LSException.def.hpp"

namespace org::w3c::dom::ls
{
	// Fields
	inline jshort LSException::PARSE_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.ls.LSException",
			"PARSE_ERR"
		);
	}
	inline jshort LSException::SERIALIZE_ERR()
	{
		return getStaticField<jshort>(
			"org.w3c.dom.ls.LSException",
			"SERIALIZE_ERR"
		);
	}
	inline jshort LSException::code()
	{
		return getField<jshort>(
			"code"
		);
	}
	
	// Constructors
	inline LSException::LSException(jshort arg0, JString arg1)
		: java::lang::RuntimeException(
			"org.w3c.dom.ls.LSException",
			"(SLjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	
	// Methods
} // namespace org::w3c::dom::ls

// Base class headers
#include "../../../../java/lang/Exception.hpp"
#include "../../../../java/lang/RuntimeException.hpp"

