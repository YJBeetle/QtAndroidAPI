#pragma once

#include "../lang/RuntimeException.def.hpp"

namespace java::util
{
	class EmptyStackException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EmptyStackException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		EmptyStackException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		EmptyStackException();
		
		// Methods
	};
} // namespace java::util

