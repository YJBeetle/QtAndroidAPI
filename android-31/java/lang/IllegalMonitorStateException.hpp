#pragma once

#include "./RuntimeException.hpp"

class JString;

namespace java::lang
{
	class IllegalMonitorStateException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IllegalMonitorStateException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalMonitorStateException(QJniObject obj);
		
		// Constructors
		IllegalMonitorStateException();
		IllegalMonitorStateException(JString arg0);
		
		// Methods
	};
} // namespace java::lang

