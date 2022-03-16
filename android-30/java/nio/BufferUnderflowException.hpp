#pragma once

#include "../lang/RuntimeException.hpp"

namespace java::nio
{
	class BufferUnderflowException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BufferUnderflowException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		BufferUnderflowException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		BufferUnderflowException();
		
		// Methods
	};
} // namespace java::nio

