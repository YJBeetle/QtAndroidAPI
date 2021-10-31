#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"


namespace java::lang
{
	class UnsatisfiedLinkError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnsatisfiedLinkError(const char *className, const char *sig, Ts...agv) : java::lang::LinkageError(className, sig, std::forward<Ts>(agv)...) {}
		UnsatisfiedLinkError(QAndroidJniObject obj);
		
		// Constructors
		UnsatisfiedLinkError();
		UnsatisfiedLinkError(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

