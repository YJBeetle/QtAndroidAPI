#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}

namespace __jni_impl::java::net
{
	class CacheResponse : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getBody();
		QAndroidJniObject getHeaders();
	};
} // namespace __jni_impl::java::net

#include "../io/InputStream.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void CacheResponse::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.CacheResponse",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject CacheResponse::getBody()
	{
		return __thiz.callObjectMethod(
			"getBody",
			"()Ljava/io/InputStream;"
		);
	}
	QAndroidJniObject CacheResponse::getHeaders()
	{
		return __thiz.callObjectMethod(
			"getHeaders",
			"()Ljava/util/Map;"
		);
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class CacheResponse : public __jni_impl::java::net::CacheResponse
	{
	public:
		CacheResponse(QAndroidJniObject obj) { __thiz = obj; }
		CacheResponse()
		{
			__constructor();
		}
	};
} // namespace java::net

