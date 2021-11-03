#include "../../JString.hpp"
#include "./CursorIndexOutOfBoundsException.hpp"

namespace android::database
{
	// Fields
	
	// QJniObject forward
	CursorIndexOutOfBoundsException::CursorIndexOutOfBoundsException(QJniObject obj) : java::lang::IndexOutOfBoundsException(obj) {}
	
	// Constructors
	CursorIndexOutOfBoundsException::CursorIndexOutOfBoundsException(JString arg0)
		: java::lang::IndexOutOfBoundsException(
			"android.database.CursorIndexOutOfBoundsException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	CursorIndexOutOfBoundsException::CursorIndexOutOfBoundsException(jint arg0, jint arg1)
		: java::lang::IndexOutOfBoundsException(
			"android.database.CursorIndexOutOfBoundsException",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::database

