#pragma once

#ifndef ORG_APACHE_HTTP_PARAMS_HTTPCONNECTIONPARAMS
#define ORG_APACHE_HTTP_PARAMS_HTTPCONNECTIONPARAMS

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::org::apache::http::params
{
	class HttpConnectionParams : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint getSocketBufferSize(__jni_impl::__JniBaseClass arg0);
		static void setSocketBufferSize(__jni_impl::__JniBaseClass arg0, jint arg1);
		static jint getLinger(__jni_impl::__JniBaseClass arg0);
		static void setLinger(__jni_impl::__JniBaseClass arg0, jint arg1);
		static jint getConnectionTimeout(__jni_impl::__JniBaseClass arg0);
		static void setConnectionTimeout(__jni_impl::__JniBaseClass arg0, jint arg1);
		static jboolean isStaleCheckingEnabled(__jni_impl::__JniBaseClass arg0);
		static void setStaleCheckingEnabled(__jni_impl::__JniBaseClass arg0, jboolean arg1);
		static void setTcpNoDelay(__jni_impl::__JniBaseClass arg0, jboolean arg1);
		static jboolean getTcpNoDelay(__jni_impl::__JniBaseClass arg0);
		static void setSoTimeout(__jni_impl::__JniBaseClass arg0, jint arg1);
		static jint getSoTimeout(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::org::apache::http::params


namespace __jni_impl::org::apache::http::params
{
	// Fields
	
	// Constructors
	void HttpConnectionParams::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.apache.http.params.HttpConnectionParams",
			"(V)V");
	}
	
	// Methods
	jint HttpConnectionParams::getSocketBufferSize(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"org.apache.http.params.HttpConnectionParams",
			"getSocketBufferSize",
			"(Lorg/apache/http/params/HttpParams;)I",
			arg0.__jniObject().object());
	}
	void HttpConnectionParams::setSocketBufferSize(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"org.apache.http.params.HttpConnectionParams",
			"setSocketBufferSize",
			"(Lorg/apache/http/params/HttpParams;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jint HttpConnectionParams::getLinger(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"org.apache.http.params.HttpConnectionParams",
			"getLinger",
			"(Lorg/apache/http/params/HttpParams;)I",
			arg0.__jniObject().object());
	}
	void HttpConnectionParams::setLinger(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"org.apache.http.params.HttpConnectionParams",
			"setLinger",
			"(Lorg/apache/http/params/HttpParams;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jint HttpConnectionParams::getConnectionTimeout(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"org.apache.http.params.HttpConnectionParams",
			"getConnectionTimeout",
			"(Lorg/apache/http/params/HttpParams;)I",
			arg0.__jniObject().object());
	}
	void HttpConnectionParams::setConnectionTimeout(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"org.apache.http.params.HttpConnectionParams",
			"setConnectionTimeout",
			"(Lorg/apache/http/params/HttpParams;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jboolean HttpConnectionParams::isStaleCheckingEnabled(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"org.apache.http.params.HttpConnectionParams",
			"isStaleCheckingEnabled",
			"(Lorg/apache/http/params/HttpParams;)Z",
			arg0.__jniObject().object());
	}
	void HttpConnectionParams::setStaleCheckingEnabled(__jni_impl::__JniBaseClass arg0, jboolean arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"org.apache.http.params.HttpConnectionParams",
			"setStaleCheckingEnabled",
			"(Lorg/apache/http/params/HttpParams;Z)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void HttpConnectionParams::setTcpNoDelay(__jni_impl::__JniBaseClass arg0, jboolean arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"org.apache.http.params.HttpConnectionParams",
			"setTcpNoDelay",
			"(Lorg/apache/http/params/HttpParams;Z)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jboolean HttpConnectionParams::getTcpNoDelay(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"org.apache.http.params.HttpConnectionParams",
			"getTcpNoDelay",
			"(Lorg/apache/http/params/HttpParams;)Z",
			arg0.__jniObject().object());
	}
	void HttpConnectionParams::setSoTimeout(__jni_impl::__JniBaseClass arg0, jint arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"org.apache.http.params.HttpConnectionParams",
			"setSoTimeout",
			"(Lorg/apache/http/params/HttpParams;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jint HttpConnectionParams::getSoTimeout(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"org.apache.http.params.HttpConnectionParams",
			"getSoTimeout",
			"(Lorg/apache/http/params/HttpParams;)I",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::org::apache::http::params

namespace org::apache::http::params
{
	class HttpConnectionParams : public __jni_impl::org::apache::http::params::HttpConnectionParams
	{
	public:
		HttpConnectionParams(QAndroidJniObject obj) { __thiz = obj; }
		HttpConnectionParams()
		{
			__constructor();
		}
	};
} // namespace org::apache::http::params

#endif // ORG_APACHE_HTTP_PARAMS_HTTPCONNECTIONPARAMS

