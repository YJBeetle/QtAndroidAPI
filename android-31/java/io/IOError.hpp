#pragma once

#include "../../JObject.hpp"
#include "../lang/Error.hpp"


namespace java::io
{
	class IOError : public java::lang::Error
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IOError(const char *className, const char *sig, Ts...agv) : java::lang::Error(className, sig, std::forward<Ts>(agv)...) {}
		IOError(QAndroidJniObject obj);
		
		// Constructors
		IOError(jthrowable arg0);
		
		// Methods
	};
} // namespace java::io

