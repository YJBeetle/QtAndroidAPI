#pragma once

#include "../../lang/RuntimeException.def.hpp"

class JString;
class JThrowable;

namespace java::util::concurrent
{
	class CompletionException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CompletionException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		CompletionException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		CompletionException(JThrowable arg0);
		CompletionException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::util::concurrent

