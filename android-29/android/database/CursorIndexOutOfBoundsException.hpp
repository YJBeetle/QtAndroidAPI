#pragma once

#include "../../java/lang/IndexOutOfBoundsException.hpp"

class JString;

namespace android::database
{
	class CursorIndexOutOfBoundsException : public java::lang::IndexOutOfBoundsException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CursorIndexOutOfBoundsException(const char *className, const char *sig, Ts...agv) : java::lang::IndexOutOfBoundsException(className, sig, std::forward<Ts>(agv)...) {}
		CursorIndexOutOfBoundsException(QAndroidJniObject obj) : java::lang::IndexOutOfBoundsException(obj) {}
		
		// Constructors
		CursorIndexOutOfBoundsException(JString arg0);
		CursorIndexOutOfBoundsException(jint arg0, jint arg1);
		
		// Methods
	};
} // namespace android::database

