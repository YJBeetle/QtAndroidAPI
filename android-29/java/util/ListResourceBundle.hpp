#pragma once

#include "../../__JniBaseClass.hpp"
#include "ResourceBundle.hpp"


namespace __jni_impl::java::util
{
	class ListResourceBundle : public __jni_impl::java::util::ResourceBundle
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getKeys();
		jobject handleGetObject(jstring arg0);
		jobject handleGetObject(const QString &arg0);
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void ListResourceBundle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.ListResourceBundle",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ListResourceBundle::getKeys()
	{
		return __thiz.callObjectMethod(
			"getKeys",
			"()Ljava/util/Enumeration;"
		);
	}
	jobject ListResourceBundle::handleGetObject(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"handleGetObject",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject ListResourceBundle::handleGetObject(const QString &arg0)
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
	class ListResourceBundle : public __jni_impl::java::util::ListResourceBundle
	{
	public:
		ListResourceBundle(QAndroidJniObject obj) { __thiz = obj; }
		ListResourceBundle()
		{
			__constructor();
		}
	};
} // namespace java::util

