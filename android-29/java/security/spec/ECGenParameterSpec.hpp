#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::security::spec
{
	class ECGenParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::security::spec


namespace __jni_impl::java::security::spec
{
	// Fields
	
	// Constructors
	void ECGenParameterSpec::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.ECGenParameterSpec",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ECGenParameterSpec::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.ECGenParameterSpec",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::security::spec

namespace java::security::spec
{
	class ECGenParameterSpec : public __jni_impl::java::security::spec::ECGenParameterSpec
	{
	public:
		ECGenParameterSpec(QAndroidJniObject obj) { __thiz = obj; }
		ECGenParameterSpec(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::security::spec

