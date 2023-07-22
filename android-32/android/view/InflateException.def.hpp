#pragma once

#include "../../java/lang/RuntimeException.def.hpp"

class JString;
class JThrowable;

namespace android::view
{
	class InflateException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InflateException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		InflateException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		InflateException();
		InflateException(JString arg0);
		InflateException(JThrowable arg0);
		InflateException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::view

