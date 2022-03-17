#pragma once

#include "./LinkageError.def.hpp"

class JString;

namespace java::lang
{
	class NoClassDefFoundError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NoClassDefFoundError(const char *className, const char *sig, Ts...agv) : java::lang::LinkageError(className, sig, std::forward<Ts>(agv)...) {}
		NoClassDefFoundError(QAndroidJniObject obj) : java::lang::LinkageError(obj) {}
		
		// Constructors
		NoClassDefFoundError();
		NoClassDefFoundError(JString arg0);
		
		// Methods
	};
} // namespace java::lang

