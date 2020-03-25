#pragma once

#ifndef JAVA_SECURITY_SPEC_X509ENCODEDKEYSPEC
#define JAVA_SECURITY_SPEC_X509ENCODEDKEYSPEC

#include "../../../__JniBaseClass.hpp"
#include "EncodedKeySpec.hpp"


namespace __jni_impl::java::security::spec
{
	class X509EncodedKeySpec : public __jni_impl::java::security::spec::EncodedKeySpec
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jbyteArray arg0);
		void __constructor(jbyteArray arg0, jstring arg1);
		
		// Methods
		QAndroidJniObject getEncoded();
		QAndroidJniObject getFormat();
	};
} // namespace __jni_impl::java::security::spec


namespace __jni_impl::java::security::spec
{
	// Fields
	
	// Constructors
	void X509EncodedKeySpec::__constructor(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.X509EncodedKeySpec",
			"([B)V",
			arg0);
	}
	void X509EncodedKeySpec::__constructor(jbyteArray arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.X509EncodedKeySpec",
			"([BLjava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject X509EncodedKeySpec::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B");
	}
	QAndroidJniObject X509EncodedKeySpec::getFormat()
	{
		return __thiz.callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class X509EncodedKeySpec : public __jni_impl::java::security::spec::X509EncodedKeySpec
	{
	public:
		X509EncodedKeySpec(QAndroidJniObject obj) { __thiz = obj; }
		X509EncodedKeySpec(jbyteArray arg0)
		{
			__constructor(
				arg0);
		}
		X509EncodedKeySpec(jbyteArray arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::security::spec

#endif // JAVA_SECURITY_SPEC_X509ENCODEDKEYSPEC

