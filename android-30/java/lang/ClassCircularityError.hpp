#pragma once

#include "./LinkageError.hpp"

class JString;

namespace java::lang
{
	class ClassCircularityError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ClassCircularityError(const char *className, const char *sig, Ts...agv) : java::lang::LinkageError(className, sig, std::forward<Ts>(agv)...) {}
		ClassCircularityError(QAndroidJniObject obj);
		
		// Constructors
		ClassCircularityError();
		ClassCircularityError(JString arg0);
		
		// Methods
	};
} // namespace java::lang

