#pragma once

#ifndef ORG_APACHE_HTTP_CONN_CONNECTTIMEOUTEXCEPTION
#define ORG_APACHE_HTTP_CONN_CONNECTTIMEOUTEXCEPTION

#include "../../../../__JniBaseClass.hpp"
#include "../../../../java/lang/Exception.hpp"
#include "../../../../java/io/IOException.hpp"
#include "../../../../java/io/InterruptedIOException.hpp"


namespace __jni_impl::org::apache::http::conn
{
	class ConnectTimeoutException : public __jni_impl::java::io::InterruptedIOException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::org::apache::http::conn


namespace __jni_impl::org::apache::http::conn
{
	// Fields
	
	// Constructors
	void ConnectTimeoutException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.apache.http.conn.ConnectTimeoutException",
			"()V");
	}
	void ConnectTimeoutException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"org.apache.http.conn.ConnectTimeoutException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::org::apache::http::conn

namespace org::apache::http::conn
{
	class ConnectTimeoutException : public __jni_impl::org::apache::http::conn::ConnectTimeoutException
	{
	public:
		ConnectTimeoutException(QAndroidJniObject obj) { __thiz = obj; }
		ConnectTimeoutException()
		{
			__constructor();
		}
		ConnectTimeoutException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace org::apache::http::conn

#endif // ORG_APACHE_HTTP_CONN_CONNECTTIMEOUTEXCEPTION

