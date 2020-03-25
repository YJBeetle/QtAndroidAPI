#pragma once

#ifndef JAVAX_SQL_CONNECTIONEVENT
#define JAVAX_SQL_CONNECTIONEVENT

#include "../../__JniBaseClass.hpp"
#include "../../java/util/EventObject.hpp"

namespace __jni_impl::java::sql
{
	class SQLException;
}

namespace __jni_impl::javax::sql
{
	class ConnectionEvent : public __jni_impl::java::util::EventObject
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::java::sql::SQLException arg1);
		
		// Methods
		QAndroidJniObject getSQLException();
	};
} // namespace __jni_impl::javax::sql

#include "../../java/sql/SQLException.hpp"

namespace __jni_impl::javax::sql
{
	// Fields
	
	// Constructors
	void ConnectionEvent::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.sql.ConnectionEvent",
			"(Ljavax/sql/PooledConnection;)V",
			arg0.__jniObject().object());
	}
	void ConnectionEvent::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::java::sql::SQLException arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.sql.ConnectionEvent",
			"(Ljavax/sql/PooledConnection;Ljava/sql/SQLException;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject ConnectionEvent::getSQLException()
	{
		return __thiz.callObjectMethod(
			"getSQLException",
			"()Ljava/sql/SQLException;");
	}
} // namespace __jni_impl::javax::sql

namespace javax::sql
{
	class ConnectionEvent : public __jni_impl::javax::sql::ConnectionEvent
	{
	public:
		ConnectionEvent(QAndroidJniObject obj) { __thiz = obj; }
		ConnectionEvent(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		ConnectionEvent(__jni_impl::__JniBaseClass arg0, __jni_impl::java::sql::SQLException arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace javax::sql

#endif // JAVAX_SQL_CONNECTIONEVENT

