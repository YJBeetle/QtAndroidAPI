#pragma once

#include "./RuntimeException.hpp"

class JString;

namespace java::lang
{
	class ClassCastException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ClassCastException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ClassCastException(QJniObject obj);
		
		// Constructors
		ClassCastException();
		ClassCastException(JString arg0);
		
		// Methods
	};
} // namespace java::lang

