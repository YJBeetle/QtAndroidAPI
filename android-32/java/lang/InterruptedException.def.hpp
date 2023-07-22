#pragma once

#include "./Exception.def.hpp"

class JString;

namespace java::lang
{
	class InterruptedException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InterruptedException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		InterruptedException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		InterruptedException();
		InterruptedException(JString arg0);
		
		// Methods
	};
} // namespace java::lang

