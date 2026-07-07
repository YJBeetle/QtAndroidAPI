#pragma once

#include "./RuntimeException.def.hpp"

class JString;
class JThrowable;

namespace java::lang
{
	class MatchException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MatchException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		MatchException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		MatchException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::lang

