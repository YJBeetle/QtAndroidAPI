#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"

namespace java::lang
{
	class Exception;
}

namespace android::util
{
	class AndroidException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AndroidException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		AndroidException(QJniObject obj);
		
		// Constructors
		AndroidException();
		AndroidException(java::lang::Exception arg0);
		AndroidException(jstring arg0);
		AndroidException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::util

