#pragma once

#ifndef JAVAX_SECURITY_AUTH_DESTROYFAILEDEXCEPTION
#define JAVAX_SECURITY_AUTH_DESTROYFAILEDEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"


namespace __jni_impl::javax::security::auth
{
	class DestroyFailedException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::javax::security::auth


namespace __jni_impl::javax::security::auth
{
	// Fields
	
	// Constructors
	void DestroyFailedException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.DestroyFailedException",
			"()V"
		);
	}
	void DestroyFailedException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.DestroyFailedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DestroyFailedException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.security.auth.DestroyFailedException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::javax::security::auth

namespace javax::security::auth
{
	class DestroyFailedException : public __jni_impl::javax::security::auth::DestroyFailedException
	{
	public:
		DestroyFailedException(QAndroidJniObject obj) { __thiz = obj; }
		DestroyFailedException()
		{
			__constructor();
		}
		DestroyFailedException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::security::auth

#endif // JAVAX_SECURITY_AUTH_DESTROYFAILEDEXCEPTION

