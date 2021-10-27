#pragma once

#include "../../__JniBaseClass.hpp"
#include "ResourceBundle.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class Reader;
}

namespace __jni_impl::java::util
{
	class PropertyResourceBundle : public __jni_impl::java::util::ResourceBundle
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::InputStream arg0);
		void __constructor(__jni_impl::java::io::Reader arg0);
		
		// Methods
		QAndroidJniObject getKeys();
		jobject handleGetObject(jstring arg0);
		jobject handleGetObject(const QString &arg0);
	};
} // namespace __jni_impl::java::util

#include "../io/InputStream.hpp"
#include "../io/Reader.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void PropertyResourceBundle::__constructor(__jni_impl::java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.PropertyResourceBundle",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void PropertyResourceBundle::__constructor(__jni_impl::java::io::Reader arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.PropertyResourceBundle",
			"(Ljava/io/Reader;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject PropertyResourceBundle::getKeys()
	{
		return __thiz.callObjectMethod(
			"getKeys",
			"()Ljava/util/Enumeration;"
		);
	}
	jobject PropertyResourceBundle::handleGetObject(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"handleGetObject",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject PropertyResourceBundle::handleGetObject(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"handleGetObject",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class PropertyResourceBundle : public __jni_impl::java::util::PropertyResourceBundle
	{
	public:
		PropertyResourceBundle(QAndroidJniObject obj) { __thiz = obj; }
		PropertyResourceBundle(__jni_impl::java::io::InputStream arg0)
		{
			__constructor(
				arg0);
		}
		PropertyResourceBundle(__jni_impl::java::io::Reader arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util

