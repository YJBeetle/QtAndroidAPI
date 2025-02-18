#pragma once

#include "./Exception.def.hpp"

class JString;

namespace java::lang
{
	class CloneNotSupportedException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CloneNotSupportedException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		CloneNotSupportedException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		CloneNotSupportedException();
		CloneNotSupportedException(JString arg0);
		
		// Methods
	};
} // namespace java::lang

