#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"


namespace java::util::concurrent
{
	class ExecutionException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ExecutionException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		ExecutionException(QAndroidJniObject obj);
		
		// Constructors
		ExecutionException(jthrowable arg0);
		ExecutionException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::util::concurrent

