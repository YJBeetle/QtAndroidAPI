#pragma once

#ifndef JAVA_UTIL_LISTRESOURCEBUNDLE
#define JAVA_UTIL_LISTRESOURCEBUNDLE

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
		QAndroidJniObject handleGetObject(jstring arg0);
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
			"()V");
	}
	
	// Methods
	QAndroidJniObject ListResourceBundle::getKeys()
	{
		return __thiz.callObjectMethod(
			"getKeys",
			"()Ljava/util/Enumeration;");
	}
	QAndroidJniObject ListResourceBundle::handleGetObject(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"handleGetObject",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0);
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

#endif // JAVA_UTIL_LISTRESOURCEBUNDLE

