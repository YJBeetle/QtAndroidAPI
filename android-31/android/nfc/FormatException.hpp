#pragma once

#include "../../java/lang/Exception.hpp"

class JString;
class JThrowable;

namespace android::nfc
{
	class FormatException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FormatException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		FormatException(QAndroidJniObject obj);
		
		// Constructors
		FormatException();
		FormatException(JString arg0);
		FormatException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::nfc

