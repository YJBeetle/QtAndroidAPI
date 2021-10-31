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
		
		// QJniObject forward
		template<typename ...Ts> explicit CursorIndexOutOfBoundsException(const char *className, const char *sig, Ts...agv) : java::lang::IndexOutOfBoundsException(className, sig, std::forward<Ts>(agv)...) {}
		CursorIndexOutOfBoundsException(QJniObject obj);
		
		// Constructors
		CursorIndexOutOfBoundsException(jstring arg0);
		CursorIndexOutOfBoundsException(jint arg0, jint arg1);
		
		// Methods
	};
} // namespace android::database

