#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::net
{
	class URLConnection;
}

namespace __jni_impl::java::net
{
	class ContentHandler : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jobject getContent(__jni_impl::java::net::URLConnection arg0);
		jobject getContent(__jni_impl::java::net::URLConnection arg0, jarray arg1);
	};
} // namespace __jni_impl::java::net

#include "./URLConnection.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void ContentHandler::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.ContentHandler",
			"()V"
		);
	}
	
	// Methods
	jobject ContentHandler::getContent(__jni_impl::java::net::URLConnection arg0)
	{
		return __thiz.callObjectMethod(
			"getContent",
			"(Ljava/net/URLConnection;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jobject ContentHandler::getContent(__jni_impl::java::net::URLConnection arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"getContent",
			"(Ljava/net/URLConnection;[Ljava/lang/Class;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1
		).object<jobject>();
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class ContentHandler : public __jni_impl::java::net::ContentHandler
	{
	public:
		ContentHandler(QAndroidJniObject obj) { __thiz = obj; }
		ContentHandler()
		{
			__constructor();
		}
	};
} // namespace java::net

