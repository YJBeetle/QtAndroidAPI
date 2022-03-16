#pragma once

#include "../lang/IllegalStateException.def.hpp"

namespace java::util
{
	class FormatterClosedException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FormatterClosedException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		FormatterClosedException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		FormatterClosedException();
		
		// Methods
	};
} // namespace java::util

