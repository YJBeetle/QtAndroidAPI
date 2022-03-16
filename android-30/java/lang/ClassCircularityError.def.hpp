#pragma once

#include "./LinkageError.def.hpp"

class JString;

namespace java::lang
{
	class ClassCircularityError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ClassCircularityError(const char *className, const char *sig, Ts...agv) : java::lang::LinkageError(className, sig, std::forward<Ts>(agv)...) {}
		ClassCircularityError(QJniObject obj) : java::lang::LinkageError(obj) {}
		
		// Constructors
		ClassCircularityError();
		ClassCircularityError(JString arg0);
		
		// Methods
	};
} // namespace java::lang

