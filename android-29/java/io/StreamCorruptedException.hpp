#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "IOException.hpp"
#include "ObjectStreamException.hpp"


namespace __jni_impl::java::io
{
	class StreamCorruptedException : public __jni_impl::java::io::ObjectStreamException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::io


namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void StreamCorruptedException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.StreamCorruptedException",
			"()V"
		);
	}
	void StreamCorruptedException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.StreamCorruptedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void StreamCorruptedException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.StreamCorruptedException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::io

namespace java::io
{
	class StreamCorruptedException : public __jni_impl::java::io::StreamCorruptedException
	{
	public:
		StreamCorruptedException(QAndroidJniObject obj) { __thiz = obj; }
		StreamCorruptedException()
		{
			__constructor();
		}
		StreamCorruptedException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

