#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class OutputStream;
}

namespace __jni_impl::java::net
{
	class CacheRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void abort();
		QAndroidJniObject getBody();
	};
} // namespace __jni_impl::java::net

#include "../io/OutputStream.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void CacheRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.CacheRequest",
			"()V"
		);
	}
	
	// Methods
	void CacheRequest::abort()
	{
		__thiz.callMethod<void>(
			"abort",
			"()V"
		);
	}
	QAndroidJniObject CacheRequest::getBody()
	{
		return __thiz.callObjectMethod(
			"getBody",
			"()Ljava/io/OutputStream;"
		);
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class CacheRequest : public __jni_impl::java::net::CacheRequest
	{
	public:
		CacheRequest(QAndroidJniObject obj) { __thiz = obj; }
		CacheRequest()
		{
			__constructor();
		}
	};
} // namespace java::net

