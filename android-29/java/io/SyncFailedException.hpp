#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "IOException.hpp"


namespace __jni_impl::java::io
{
	class SyncFailedException : public __jni_impl::java::io::IOException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::io


namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void SyncFailedException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.SyncFailedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SyncFailedException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.SyncFailedException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::io

namespace java::io
{
	class SyncFailedException : public __jni_impl::java::io::SyncFailedException
	{
	public:
		SyncFailedException(QAndroidJniObject obj) { __thiz = obj; }
		SyncFailedException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

