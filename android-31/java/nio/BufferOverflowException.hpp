#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"


namespace java::nio
{
	class BufferOverflowException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BufferOverflowException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		BufferOverflowException(QJniObject obj);
		
		// Constructors
		BufferOverflowException();
		
		// Methods
	};
} // namespace java::nio

