#pragma once

#include "../../java/lang/RuntimeException.def.hpp"

class JString;
class JThrowable;

namespace android::net
{
	class ParseException : public java::lang::RuntimeException
	{
	public:
		// Fields
		JString response();
		
		// QJniObject forward
		template<typename ...Ts> explicit ParseException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ParseException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		ParseException(JString arg0);
		ParseException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::net

