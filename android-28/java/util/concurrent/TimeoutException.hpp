#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Exception.hpp"


namespace java::util::concurrent
{
	class TimeoutException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimeoutException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		TimeoutException(QAndroidJniObject obj);
		
		// Constructors
		TimeoutException();
		TimeoutException(jstring arg0);
		
		// Methods
	};
} // namespace java::util::concurrent

