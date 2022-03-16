#pragma once

#include "./LinkageError.hpp"

class JString;

namespace java::lang
{
	class VerifyError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VerifyError(const char *className, const char *sig, Ts...agv) : java::lang::LinkageError(className, sig, std::forward<Ts>(agv)...) {}
		VerifyError(QAndroidJniObject obj) : java::lang::LinkageError(obj) {}
		
		// Constructors
		VerifyError();
		VerifyError(JString arg0);
		
		// Methods
	};
} // namespace java::lang

