#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Exception.hpp"


namespace java::util::concurrent
{
	class ExecutionException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExecutionException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		ExecutionException(QJniObject obj);
		
		// Constructors
		ExecutionException(jthrowable arg0);
		ExecutionException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::util::concurrent

