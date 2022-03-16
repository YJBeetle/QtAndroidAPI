#pragma once

#include "../../io/IOException.def.hpp"

namespace java::nio::channels
{
	class FileLockInterruptionException : public java::io::IOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FileLockInterruptionException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		FileLockInterruptionException(QJniObject obj) : java::io::IOException(obj) {}
		
		// Constructors
		FileLockInterruptionException();
		
		// Methods
	};
} // namespace java::nio::channels

