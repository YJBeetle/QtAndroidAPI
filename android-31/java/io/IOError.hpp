#pragma once

#include "../lang/Error.hpp"

class JThrowable;

namespace java::io
{
	class IOError : public java::lang::Error
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IOError(const char *className, const char *sig, Ts...agv) : java::lang::Error(className, sig, std::forward<Ts>(agv)...) {}
		IOError(QAndroidJniObject obj) : java::lang::Error(obj) {}
		
		// Constructors
		IOError(JThrowable arg0);
		
		// Methods
	};
} // namespace java::io

