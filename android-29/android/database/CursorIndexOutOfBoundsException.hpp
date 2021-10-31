#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../../java/lang/IndexOutOfBoundsException.hpp"


namespace android::database
{
	class CursorIndexOutOfBoundsException : public java::lang::IndexOutOfBoundsException
	{
	public:
		// Fields
		
		CursorIndexOutOfBoundsException(QAndroidJniObject obj);
		// Constructors
		CursorIndexOutOfBoundsException(jstring arg0);
		CursorIndexOutOfBoundsException(jint arg0, jint arg1);
		CursorIndexOutOfBoundsException() = default;
		
		// Methods
	};
} // namespace android::database

