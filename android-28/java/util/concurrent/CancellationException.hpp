#pragma once

#include "../../lang/IllegalStateException.hpp"

class JString;

namespace java::util::concurrent
{
	class CancellationException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CancellationException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		CancellationException(QJniObject obj);
		
		// Constructors
		CancellationException();
		CancellationException(JString arg0);
		
		// Methods
	};
} // namespace java::util::concurrent

