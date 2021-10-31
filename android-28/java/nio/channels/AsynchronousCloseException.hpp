#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./ClosedChannelException.hpp"


namespace java::nio::channels
{
	class AsynchronousCloseException : public java::nio::channels::ClosedChannelException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AsynchronousCloseException(const char *className, const char *sig, Ts...agv) : java::nio::channels::ClosedChannelException(className, sig, std::forward<Ts>(agv)...) {}
		AsynchronousCloseException(QJniObject obj);
		
		// Constructors
		AsynchronousCloseException();
		
		// Methods
	};
} // namespace java::nio::channels

