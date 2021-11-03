#pragma once

#include "../lang/Exception.hpp"

class JString;

namespace java::util
{
	class TooManyListenersException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TooManyListenersException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		TooManyListenersException(QJniObject obj);
		
		// Constructors
		TooManyListenersException();
		TooManyListenersException(JString arg0);
		
		// Methods
	};
} // namespace java::util

