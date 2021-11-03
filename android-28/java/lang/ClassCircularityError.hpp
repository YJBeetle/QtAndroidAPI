#pragma once

#include "./LinkageError.hpp"

class JString;

namespace java::lang
{
	class ClassCircularityError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ClassCircularityError(const char *className, const char *sig, Ts...agv) : java::lang::LinkageError(className, sig, std::forward<Ts>(agv)...) {}
		ClassCircularityError(QJniObject obj);
		
		// Constructors
		ClassCircularityError();
		ClassCircularityError(JString arg0);
		
		// Methods
	};
} // namespace java::lang

