#pragma once

#ifndef JAVA_NET_PASSWORDAUTHENTICATION
#define JAVA_NET_PASSWORDAUTHENTICATION

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::net
{
	class PasswordAuthentication : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jcharArray arg1);
		
		// Methods
		jcharArray getPassword();
		jstring getUserName();
	};
} // namespace __jni_impl::java::net


namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void PasswordAuthentication::__constructor(jstring arg0, jcharArray arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.PasswordAuthentication",
			"(Ljava/lang/String;[C)V",
			arg0,
			arg1);
	}
	
	// Methods
	jcharArray PasswordAuthentication::getPassword()
	{
		return __thiz.callObjectMethod(
			"getPassword",
			"()[C"
		).object<jcharArray>();
	}
	jstring PasswordAuthentication::getUserName()
	{
		return __thiz.callObjectMethod(
			"getUserName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class PasswordAuthentication : public __jni_impl::java::net::PasswordAuthentication
	{
	public:
		PasswordAuthentication(QAndroidJniObject obj) { __thiz = obj; }
		PasswordAuthentication(jstring arg0, jcharArray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::net

#endif // JAVA_NET_PASSWORDAUTHENTICATION

