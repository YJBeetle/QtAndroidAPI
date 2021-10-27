#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class KeyRep_Type;
}

namespace __jni_impl::java::security
{
	class KeyRep : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::security::KeyRep_Type arg0, jstring arg1, jstring arg2, jbyteArray arg3);
		void __constructor(__jni_impl::java::security::KeyRep_Type arg0, const QString &arg1, const QString &arg2, jbyteArray arg3);
		
		// Methods
	};
} // namespace __jni_impl::java::security

#include "./KeyRep_Type.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void KeyRep::__constructor(__jni_impl::java::security::KeyRep_Type arg0, jstring arg1, jstring arg2, jbyteArray arg3)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyRep",
			"(Ljava/security/KeyRep$Type;Ljava/lang/String;Ljava/lang/String;[B)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void KeyRep::__constructor(__jni_impl::java::security::KeyRep_Type arg0, const QString &arg1, const QString &arg2, jbyteArray arg3)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyRep",
			"(Ljava/security/KeyRep$Type;Ljava/lang/String;Ljava/lang/String;[B)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3
		);
	}
	
	// Methods
} // namespace __jni_impl::java::security

namespace java::security
{
	class KeyRep : public __jni_impl::java::security::KeyRep
	{
	public:
		KeyRep(QAndroidJniObject obj) { __thiz = obj; }
		KeyRep(__jni_impl::java::security::KeyRep_Type arg0, jstring arg1, jstring arg2, jbyteArray arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace java::security

