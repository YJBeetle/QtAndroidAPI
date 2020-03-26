#pragma once

#ifndef JAVA_UTIL_RESOURCEBUNDLE
#define JAVA_UTIL_RESOURCEBUNDLE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang::ref
{
	class ReferenceQueue;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::java::util
{
	class ResourceBundle_Control;
}
namespace __jni_impl::java::util
{
	class ServiceLoader;
}

namespace __jni_impl::java::util
{
	class ResourceBundle : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean containsKey(jstring arg0);
		QAndroidJniObject keySet();
		jobject getObject(jstring arg0);
		jstring getBaseBundleName();
		static QAndroidJniObject getBundle(jstring arg0, __jni_impl::java::util::Locale arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject getBundle(jstring arg0, __jni_impl::java::util::Locale arg1, __jni_impl::java::util::ResourceBundle_Control arg2);
		static QAndroidJniObject getBundle(jstring arg0, __jni_impl::java::util::Locale arg1, __jni_impl::java::lang::ClassLoader arg2);
		static QAndroidJniObject getBundle(jstring arg0, __jni_impl::java::util::Locale arg1, __jni_impl::java::lang::ClassLoader arg2, __jni_impl::java::util::ResourceBundle_Control arg3);
		static QAndroidJniObject getBundle(jstring arg0);
		static QAndroidJniObject getBundle(jstring arg0, __jni_impl::java::util::ResourceBundle_Control arg1);
		static QAndroidJniObject getBundle(jstring arg0, __jni_impl::java::util::Locale arg1);
		static QAndroidJniObject getBundle(jstring arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject getLocale();
		jstring getString(jstring arg0);
		QAndroidJniObject getKeys();
		static void clearCache(__jni_impl::java::lang::ClassLoader arg0);
		static void clearCache();
		jarray getStringArray(jstring arg0);
	};
} // namespace __jni_impl::java::util

#include "../lang/ref/ReferenceQueue.hpp"
#include "Locale.hpp"
#include "../lang/ClassLoader.hpp"
#include "ResourceBundle_Control.hpp"
#include "ServiceLoader.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void ResourceBundle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.ResourceBundle",
			"()V");
	}
	
	// Methods
	jboolean ResourceBundle::containsKey(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	QAndroidJniObject ResourceBundle::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	jobject ResourceBundle::getObject(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getObject",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jstring ResourceBundle::getBaseBundleName()
	{
		return __thiz.callObjectMethod(
			"getBaseBundleName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ResourceBundle::getBundle(jstring arg0, __jni_impl::java::util::Locale arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/Module;)Ljava/util/ResourceBundle;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceBundle::getBundle(jstring arg0, __jni_impl::java::util::Locale arg1, __jni_impl::java::util::ResourceBundle_Control arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/Locale;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceBundle::getBundle(jstring arg0, __jni_impl::java::util::Locale arg1, __jni_impl::java::lang::ClassLoader arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;)Ljava/util/ResourceBundle;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceBundle::getBundle(jstring arg0, __jni_impl::java::util::Locale arg1, __jni_impl::java::lang::ClassLoader arg2, __jni_impl::java::util::ResourceBundle_Control arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceBundle::getBundle(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;)Ljava/util/ResourceBundle;",
			arg0
		);
	}
	QAndroidJniObject ResourceBundle::getBundle(jstring arg0, __jni_impl::java::util::ResourceBundle_Control arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceBundle::getBundle(jstring arg0, __jni_impl::java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceBundle::getBundle(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/lang/Module;)Ljava/util/ResourceBundle;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceBundle::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	jstring ResourceBundle::getString(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject ResourceBundle::getKeys()
	{
		return __thiz.callObjectMethod(
			"getKeys",
			"()Ljava/util/Enumeration;"
		);
	}
	void ResourceBundle::clearCache(__jni_impl::java::lang::ClassLoader arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.ResourceBundle",
			"clearCache",
			"(Ljava/lang/ClassLoader;)V",
			arg0.__jniObject().object()
		);
	}
	void ResourceBundle::clearCache()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.ResourceBundle",
			"clearCache",
			"()V"
		);
	}
	jarray ResourceBundle::getStringArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getStringArray",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class ResourceBundle : public __jni_impl::java::util::ResourceBundle
	{
	public:
		ResourceBundle(QAndroidJniObject obj) { __thiz = obj; }
		ResourceBundle()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_RESOURCEBUNDLE

