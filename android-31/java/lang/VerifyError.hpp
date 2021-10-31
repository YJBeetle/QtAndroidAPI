#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"


namespace java::lang
{
	class VerifyError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VerifyError(const char *className, const char *sig, Ts...agv) : java::lang::LinkageError(className, sig, std::forward<Ts>(agv)...) {}
		VerifyError(QJniObject obj);
		
		// Constructors
		VerifyError();
		VerifyError(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

