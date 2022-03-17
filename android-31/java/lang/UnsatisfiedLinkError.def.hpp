#pragma once

#include "./LinkageError.def.hpp"

class JString;

namespace java::lang
{
	class UnsatisfiedLinkError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnsatisfiedLinkError(const char *className, const char *sig, Ts...agv) : java::lang::LinkageError(className, sig, std::forward<Ts>(agv)...) {}
		UnsatisfiedLinkError(QAndroidJniObject obj) : java::lang::LinkageError(obj) {}
		
		// Constructors
		UnsatisfiedLinkError();
		UnsatisfiedLinkError(JString arg0);
		
		// Methods
	};
} // namespace java::lang

