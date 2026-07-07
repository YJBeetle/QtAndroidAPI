#pragma once

#include "../../../../java/lang/RuntimeException.def.hpp"

class JString;

namespace org::w3c::dom::ls
{
	class LSException : public java::lang::RuntimeException
	{
	public:
		// Fields
		static jshort PARSE_ERR();
		static jshort SERIALIZE_ERR();
		jshort code();
		
		// QJniObject forward
		template<typename ...Ts> explicit LSException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		LSException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		LSException(jshort arg0, JString arg1);
		
		// Methods
	};
} // namespace org::w3c::dom::ls

