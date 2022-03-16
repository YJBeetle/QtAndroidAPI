#pragma once

#include "./Error.def.hpp"

class JString;
class JThrowable;

namespace java::lang
{
	class LinkageError : public java::lang::Error
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LinkageError(const char *className, const char *sig, Ts...agv) : java::lang::Error(className, sig, std::forward<Ts>(agv)...) {}
		LinkageError(QJniObject obj) : java::lang::Error(obj) {}
		
		// Constructors
		LinkageError();
		LinkageError(JString arg0);
		LinkageError(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::lang

