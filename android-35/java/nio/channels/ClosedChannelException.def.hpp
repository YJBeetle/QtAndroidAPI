#pragma once

#include "../../io/IOException.def.hpp"

namespace java::nio::channels
{
	class ClosedChannelException : public java::io::IOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ClosedChannelException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		ClosedChannelException(QJniObject obj) : java::io::IOException(obj) {}
		
		// Constructors
		ClosedChannelException();
		
		// Methods
	};
} // namespace java::nio::channels

