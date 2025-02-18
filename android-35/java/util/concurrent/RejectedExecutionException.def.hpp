#pragma once

#include "../../lang/RuntimeException.def.hpp"

class JString;
class JThrowable;

namespace java::util::concurrent
{
	class RejectedExecutionException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RejectedExecutionException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		RejectedExecutionException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		RejectedExecutionException();
		RejectedExecutionException(JString arg0);
		RejectedExecutionException(JThrowable arg0);
		RejectedExecutionException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::util::concurrent

