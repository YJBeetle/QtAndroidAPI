#include "./RowSetEvent.hpp"

namespace javax::sql
{
	// Fields
	
	RowSetEvent::RowSetEvent(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RowSetEvent::RowSetEvent(__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.sql.RowSetEvent",
			"(Ljavax/sql/RowSet;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
} // namespace javax::sql

