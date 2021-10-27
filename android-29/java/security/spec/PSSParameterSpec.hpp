#pragma once

#ifndef JAVA_SECURITY_SPEC_PSSPARAMETERSPEC
#define JAVA_SECURITY_SPEC_PSSPARAMETERSPEC

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::security::spec
{
	class PSSParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject DEFAULT();
		static jint TRAILER_FIELD_BC();
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, jint arg3, jint arg4);
		void __constructor(const QString &arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2, jint arg3, jint arg4);
		
		// Methods
		jstring getDigestAlgorithm();
		jstring getMGFAlgorithm();
		QAndroidJniObject getMGFParameters();
		jint getSaltLength();
		jint getTrailerField();
		jstring toString();
	};
} // namespace __jni_impl::java::security::spec


namespace __jni_impl::java::security::spec
{
	// Fields
	QAndroidJniObject PSSParameterSpec::DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.security.spec.PSSParameterSpec",
			"DEFAULT",
			"Ljava/security/spec/PSSParameterSpec;"
		);
	}
	jint PSSParameterSpec::TRAILER_FIELD_BC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.security.spec.PSSParameterSpec",
			"TRAILER_FIELD_BC"
		);
	}
	
	// Constructors
	void PSSParameterSpec::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.PSSParameterSpec",
			"(I)V",
			arg0
		);
	}
	void PSSParameterSpec::__constructor(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.PSSParameterSpec",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;II)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4
		);
	}
	void PSSParameterSpec::__constructor(const QString &arg0, const QString &arg1, __jni_impl::__JniBaseClass arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.PSSParameterSpec",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/security/spec/AlgorithmParameterSpec;II)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3,
			arg4
		);
	}
	
	// Methods
	jstring PSSParameterSpec::getDigestAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getDigestAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PSSParameterSpec::getMGFAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getMGFAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject PSSParameterSpec::getMGFParameters()
	{
		return __thiz.callObjectMethod(
			"getMGFParameters",
			"()Ljava/security/spec/AlgorithmParameterSpec;"
		);
	}
	jint PSSParameterSpec::getSaltLength()
	{
		return __thiz.callMethod<jint>(
			"getSaltLength",
			"()I"
		);
	}
	jint PSSParameterSpec::getTrailerField()
	{
		return __thiz.callMethod<jint>(
			"getTrailerField",
			"()I"
		);
	}
	jstring PSSParameterSpec::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class PSSParameterSpec : public __jni_impl::java::security::spec::PSSParameterSpec
	{
	public:
		PSSParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
		PSSParameterSpec(jint arg0)
		{
			__constructor(
				arg0);
		}
		PSSParameterSpec(jstring arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, jint arg3, jint arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
	};
} // namespace java::security::spec

#endif // JAVA_SECURITY_SPEC_PSSPARAMETERSPEC

