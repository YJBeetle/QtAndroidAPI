#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"


namespace android::system
{
	class ErrnoException : public java::lang::Exception
	{
	public:
		// Fields
		jint errno();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ErrnoException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		ErrnoException(QAndroidJniObject obj);
		
		// Constructors
		ErrnoException(jstring arg0, jint arg1);
		ErrnoException(jstring arg0, jint arg1, jthrowable arg2);
		
		// Methods
		jstring getMessage();
	};
} // namespace android::system

