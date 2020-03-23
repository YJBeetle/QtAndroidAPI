#pragma once

#ifndef JAVAX_SQL_ROWSETEVENT
#define JAVAX_SQL_ROWSETEVENT

#include "../../java/util/EventObject.hpp"


namespace __jni_impl::javax::sql
{
	class RowSetEvent : public __jni_impl::java::util::EventObject
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
	};
} // namespace __jni_impl::javax::sql


namespace __jni_impl::javax::sql
{
	// Fields
	
	// Constructors
	void RowSetEvent::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.sql.RowSetEvent",
			"(Ljavax/sql/RowSet;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
} // namespace __jni_impl::javax::sql

namespace javax::sql
{
	class RowSetEvent : public __jni_impl::javax::sql::RowSetEvent
	{
	public:
		RowSetEvent(QAndroidJniObject obj) { __thiz = obj; }
		RowSetEvent(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::sql

#endif // JAVAX_SQL_ROWSETEVENT

