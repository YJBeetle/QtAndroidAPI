#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"


namespace java::lang
{
	class IncompatibleClassChangeError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IncompatibleClassChangeError(const char *className, const char *sig, Ts...agv) : java::lang::LinkageError(className, sig, std::forward<Ts>(agv)...) {}
		IncompatibleClassChangeError(QJniObject obj);
		
		// Constructors
		IncompatibleClassChangeError();
		IncompatibleClassChangeError(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

