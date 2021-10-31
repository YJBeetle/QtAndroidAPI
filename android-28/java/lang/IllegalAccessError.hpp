#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"
#include "./IncompatibleClassChangeError.hpp"


namespace java::lang
{
	class IllegalAccessError : public java::lang::IncompatibleClassChangeError
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IllegalAccessError(const char *className, const char *sig, Ts...agv) : java::lang::IncompatibleClassChangeError(className, sig, std::forward<Ts>(agv)...) {}
		IllegalAccessError(QJniObject obj);
		
		// Constructors
		IllegalAccessError();
		IllegalAccessError(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

