#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"


namespace __jni_impl::java::util::zip
{
	class ZipException : public __jni_impl::java::io::IOException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::util::zip


namespace __jni_impl::java::util::zip
{
	// Fields
	
	// Constructors
	void ZipException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipException",
			"()V"
		);
	}
	void ZipException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ZipException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::util::zip

namespace java::util::zip
{
	class ZipException : public __jni_impl::java::util::zip::ZipException
	{
	public:
		ZipException(QAndroidJniObject obj) { __thiz = obj; }
		ZipException()
		{
			__constructor();
		}
		ZipException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::zip

