#pragma once

#include "../Exception.def.hpp"

class JString;
class JThrowable;

namespace java::lang::invoke
{
	class StringConcatException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StringConcatException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		StringConcatException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		StringConcatException(JString arg0);
		StringConcatException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::lang::invoke

