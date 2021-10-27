#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/io/IOException.hpp"


namespace android::nfc
{
	class TagLostException : public java::io::IOException
	{
	public:
		// Fields
		
		TagLostException(QAndroidJniObject obj);
		// Constructors
		TagLostException();
		TagLostException(jstring &arg0);
		TagLostException(const QString &arg0);
		
		// Methods
	};
} // namespace android::nfc

