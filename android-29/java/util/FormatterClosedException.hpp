#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalStateException.hpp"


namespace java::util
{
	class FormatterClosedException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FormatterClosedException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		FormatterClosedException(QJniObject obj);
		
		// Constructors
		FormatterClosedException();
		
		// Methods
	};
} // namespace java::util

