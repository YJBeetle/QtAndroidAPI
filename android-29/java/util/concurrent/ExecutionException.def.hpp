#pragma once

#include "../../lang/Exception.def.hpp"

class JString;
class JThrowable;

namespace java::util::concurrent
{
	class ExecutionException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExecutionException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		ExecutionException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		ExecutionException(JThrowable arg0);
		ExecutionException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::util::concurrent

