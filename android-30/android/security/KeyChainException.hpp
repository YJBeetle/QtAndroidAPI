#pragma once

#include "../../java/lang/Exception.hpp"

class JString;
class JThrowable;

namespace android::security
{
	class KeyChainException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyChainException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		KeyChainException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		KeyChainException();
		KeyChainException(JString arg0);
		KeyChainException(JThrowable arg0);
		KeyChainException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::security

