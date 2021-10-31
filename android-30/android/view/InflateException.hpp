#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::view
{
	class InflateException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InflateException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		InflateException(QAndroidJniObject obj);
		
		// Constructors
		InflateException();
		InflateException(jstring arg0);
		InflateException(jthrowable arg0);
		InflateException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::view

