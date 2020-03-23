#pragma once

#ifndef JAVA_SECURITY_SPEC_ENCODEDKEYSPEC
#define JAVA_SECURITY_SPEC_ENCODEDKEYSPEC

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::security::spec
{
	class EncodedKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jbyteArray arg0);
		
		// Methods
		QAndroidJniObject getEncoded();
		QAndroidJniObject getFormat();
		QAndroidJniObject getAlgorithm();
	};
} // namespace __jni_impl::java::security::spec


namespace __jni_impl::java::security::spec
{
	// Fields
	
	// Constructors
	void EncodedKeySpec::__constructor(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.EncodedKeySpec",
			"([B)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject EncodedKeySpec::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B");
	}
	QAndroidJniObject EncodedKeySpec::getFormat()
	{
		return __thiz.callObjectMethod(
			"getFormat",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject EncodedKeySpec::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class EncodedKeySpec : public __jni_impl::java::security::spec::EncodedKeySpec
	{
	public:
		EncodedKeySpec(QAndroidJniObject obj) { __thiz = obj; }
		EncodedKeySpec(jbyteArray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::security::spec

#endif // JAVA_SECURITY_SPEC_ENCODEDKEYSPEC

