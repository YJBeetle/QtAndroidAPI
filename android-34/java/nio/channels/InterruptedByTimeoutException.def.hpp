#pragma once

#include "../../io/IOException.def.hpp"

namespace java::nio::channels
{
	class InterruptedByTimeoutException : public java::io::IOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InterruptedByTimeoutException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		InterruptedByTimeoutException(QJniObject obj) : java::io::IOException(obj) {}
		
		// Constructors
		InterruptedByTimeoutException();
		
		// Methods
	};
} // namespace java::nio::channels

