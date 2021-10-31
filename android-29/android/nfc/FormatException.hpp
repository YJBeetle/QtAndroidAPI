#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"


namespace android::nfc
{
	class FormatException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FormatException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		FormatException(QJniObject obj);
		
		// Constructors
		FormatException();
		FormatException(jstring arg0);
		FormatException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::nfc

