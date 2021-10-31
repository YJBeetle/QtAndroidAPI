#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"


namespace java::nio::channels
{
	class InterruptedByTimeoutException : public java::io::IOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InterruptedByTimeoutException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		InterruptedByTimeoutException(QAndroidJniObject obj);
		
		// Constructors
		InterruptedByTimeoutException();
		
		// Methods
	};
} // namespace java::nio::channels

