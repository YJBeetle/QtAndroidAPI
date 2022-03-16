#pragma once

#include "../../lang/Exception.hpp"

class JString;

namespace java::util::concurrent
{
	class TimeoutException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimeoutException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		TimeoutException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		TimeoutException();
		TimeoutException(JString arg0);
		
		// Methods
	};
} // namespace java::util::concurrent

