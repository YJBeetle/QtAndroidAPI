#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace java::util::concurrent
{
	class CancellationException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CancellationException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		CancellationException(QAndroidJniObject obj);
		
		// Constructors
		CancellationException();
		CancellationException(jstring arg0);
		
		// Methods
	};
} // namespace java::util::concurrent

