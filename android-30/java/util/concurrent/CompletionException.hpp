#pragma once

#include "../../lang/RuntimeException.hpp"

class JString;
class JThrowable;

namespace java::util::concurrent
{
	class CompletionException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CompletionException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		CompletionException(QAndroidJniObject obj);
		
		// Constructors
		CompletionException(JThrowable arg0);
		CompletionException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::util::concurrent

