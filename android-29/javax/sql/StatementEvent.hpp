#pragma once

#ifndef JAVAX_SQL_STATEMENTEVENT
#define JAVAX_SQL_STATEMENTEVENT

#include "../../__JniBaseClass.hpp"
#include "../../java/util/EventObject.hpp"

namespace __jni_impl::java::sql
{
	class SQLException;
}

namespace __jni_impl::javax::sql
{
	class StatementEvent : public __jni_impl::java::util::EventObject
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::sql::SQLException arg2);
		
		// Methods
		QAndroidJniObject getSQLException();
		QAndroidJniObject getStatement();
	};
} // namespace __jni_impl::javax::sql

#include "../../java/sql/SQLException.hpp"

namespace __jni_impl::javax::sql
{
	// Fields
	
	// Constructors
	void StatementEvent::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.sql.StatementEvent",
			"(Ljavax/sql/PooledConnection;Ljava/sql/PreparedStatement;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void StatementEvent::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::sql::SQLException arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.sql.StatementEvent",
			"(Ljavax/sql/PooledConnection;Ljava/sql/PreparedStatement;Ljava/sql/SQLException;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject StatementEvent::getSQLException()
	{
		return __thiz.callObjectMethod(
			"getSQLException",
			"()Ljava/sql/SQLException;"
		);
	}
	QAndroidJniObject StatementEvent::getStatement()
	{
		return __thiz.callObjectMethod(
			"getStatement",
			"()Ljava/sql/PreparedStatement;"
		);
	}
} // namespace __jni_impl::javax::sql

namespace javax::sql
{
	class StatementEvent : public __jni_impl::javax::sql::StatementEvent
	{
	public:
		StatementEvent(QAndroidJniObject obj) { __thiz = obj; }
		StatementEvent(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		StatementEvent(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::sql::SQLException arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace javax::sql

#endif // JAVAX_SQL_STATEMENTEVENT

