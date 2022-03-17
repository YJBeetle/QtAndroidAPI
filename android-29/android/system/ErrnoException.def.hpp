#pragma once

#include "../../java/lang/Exception.def.hpp"

class JString;
class JThrowable;

namespace android::system
{
	class ErrnoException : public java::lang::Exception
	{
	public:
		// Fields
		jint errno_();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ErrnoException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		ErrnoException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		ErrnoException(JString arg0, jint arg1);
		ErrnoException(JString arg0, jint arg1, JThrowable arg2);
		
		// Methods
		JString getMessage() const;
	};
} // namespace android::system

