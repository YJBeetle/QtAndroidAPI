#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"


namespace java::util::concurrent
{
	class CompletionException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CompletionException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		CompletionException(QJniObject obj);
		
		// Constructors
		CompletionException(jthrowable arg0);
		CompletionException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::util::concurrent

