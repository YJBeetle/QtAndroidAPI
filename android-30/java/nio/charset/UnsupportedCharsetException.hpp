#pragma once

#include "../../../JObject.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"


namespace java::nio::charset
{
	class UnsupportedCharsetException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnsupportedCharsetException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		UnsupportedCharsetException(QAndroidJniObject obj);
		
		// Constructors
		UnsupportedCharsetException(jstring arg0);
		
		// Methods
		jstring getCharsetName();
	};
} // namespace java::nio::charset

