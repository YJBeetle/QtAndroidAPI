#pragma once

#ifndef JAVA_UTIL_RESOURCEBUNDLE_CONTROL
#define JAVA_UTIL_RESOURCEBUNDLE_CONTROL

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::java::lang
{
	class Void;
}
namespace __jni_impl::java::lang::reflect
{
	class Constructor;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::util
{
	class ResourceBundle;
}

namespace __jni_impl::java::util
{
	class ResourceBundle_Control : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject FORMAT_CLASS();
		static QAndroidJniObject FORMAT_DEFAULT();
		static QAndroidJniObject FORMAT_PROPERTIES();
		static jlong TTL_DONT_CACHE();
		static jlong TTL_NO_EXPIRATION_CONTROL();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getControl(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject getNoFallbackControl(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getCandidateLocales(jstring arg0, __jni_impl::java::util::Locale arg1);
		QAndroidJniObject getCandidateLocales(const QString &arg0, __jni_impl::java::util::Locale arg1);
		QAndroidJniObject getFallbackLocale(jstring arg0, __jni_impl::java::util::Locale arg1);
		QAndroidJniObject getFallbackLocale(const QString &arg0, __jni_impl::java::util::Locale arg1);
		QAndroidJniObject getFormats(jstring arg0);
		QAndroidJniObject getFormats(const QString &arg0);
		jlong getTimeToLive(jstring arg0, __jni_impl::java::util::Locale arg1);
		jlong getTimeToLive(const QString &arg0, __jni_impl::java::util::Locale arg1);
		jboolean needsReload(jstring arg0, __jni_impl::java::util::Locale arg1, jstring arg2, __jni_impl::java::lang::ClassLoader arg3, __jni_impl::java::util::ResourceBundle arg4, jlong arg5);
		jboolean needsReload(const QString &arg0, __jni_impl::java::util::Locale arg1, const QString &arg2, __jni_impl::java::lang::ClassLoader arg3, __jni_impl::java::util::ResourceBundle arg4, jlong arg5);
		QAndroidJniObject newBundle(jstring arg0, __jni_impl::java::util::Locale arg1, jstring arg2, __jni_impl::java::lang::ClassLoader arg3, jboolean arg4);
		QAndroidJniObject newBundle(const QString &arg0, __jni_impl::java::util::Locale arg1, const QString &arg2, __jni_impl::java::lang::ClassLoader arg3, jboolean arg4);
		jstring toBundleName(jstring arg0, __jni_impl::java::util::Locale arg1);
		jstring toBundleName(const QString &arg0, __jni_impl::java::util::Locale arg1);
		jstring toResourceName(jstring arg0, jstring arg1);
		jstring toResourceName(const QString &arg0, const QString &arg1);
	};
} // namespace __jni_impl::java::util

#include "../lang/ClassLoader.hpp"
#include "../lang/Void.hpp"
#include "../lang/reflect/Constructor.hpp"
#include "Locale.hpp"
#include "ResourceBundle.hpp"

namespace __jni_impl::java::util
{
	// Fields
	QAndroidJniObject ResourceBundle_Control::FORMAT_CLASS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.ResourceBundle$Control",
			"FORMAT_CLASS",
			"Ljava/util/List;"
		);
	}
	QAndroidJniObject ResourceBundle_Control::FORMAT_DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.ResourceBundle$Control",
			"FORMAT_DEFAULT",
			"Ljava/util/List;"
		);
	}
	QAndroidJniObject ResourceBundle_Control::FORMAT_PROPERTIES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.ResourceBundle$Control",
			"FORMAT_PROPERTIES",
			"Ljava/util/List;"
		);
	}
	jlong ResourceBundle_Control::TTL_DONT_CACHE()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"java.util.ResourceBundle$Control",
			"TTL_DONT_CACHE"
		);
	}
	jlong ResourceBundle_Control::TTL_NO_EXPIRATION_CONTROL()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"java.util.ResourceBundle$Control",
			"TTL_NO_EXPIRATION_CONTROL"
		);
	}
	
	// Constructors
	void ResourceBundle_Control::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.ResourceBundle$Control",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ResourceBundle_Control::getControl(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle$Control",
			"getControl",
			"(Ljava/util/List;)Ljava/util/ResourceBundle$Control;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceBundle_Control::getNoFallbackControl(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle$Control",
			"getNoFallbackControl",
			"(Ljava/util/List;)Ljava/util/ResourceBundle$Control;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceBundle_Control::getCandidateLocales(jstring arg0, __jni_impl::java::util::Locale arg1)
	{
		return __thiz.callObjectMethod(
			"getCandidateLocales",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceBundle_Control::getCandidateLocales(const QString &arg0, __jni_impl::java::util::Locale arg1)
	{
		return __thiz.callObjectMethod(
			"getCandidateLocales",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceBundle_Control::getFallbackLocale(jstring arg0, __jni_impl::java::util::Locale arg1)
	{
		return __thiz.callObjectMethod(
			"getFallbackLocale",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/Locale;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceBundle_Control::getFallbackLocale(const QString &arg0, __jni_impl::java::util::Locale arg1)
	{
		return __thiz.callObjectMethod(
			"getFallbackLocale",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/Locale;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceBundle_Control::getFormats(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getFormats",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0
		);
	}
	QAndroidJniObject ResourceBundle_Control::getFormats(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getFormats",
			"(Ljava/lang/String;)Ljava/util/List;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jlong ResourceBundle_Control::getTimeToLive(jstring arg0, __jni_impl::java::util::Locale arg1)
	{
		return __thiz.callMethod<jlong>(
			"getTimeToLive",
			"(Ljava/lang/String;Ljava/util/Locale;)J",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jlong ResourceBundle_Control::getTimeToLive(const QString &arg0, __jni_impl::java::util::Locale arg1)
	{
		return __thiz.callMethod<jlong>(
			"getTimeToLive",
			"(Ljava/lang/String;Ljava/util/Locale;)J",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jboolean ResourceBundle_Control::needsReload(jstring arg0, __jni_impl::java::util::Locale arg1, jstring arg2, __jni_impl::java::lang::ClassLoader arg3, __jni_impl::java::util::ResourceBundle arg4, jlong arg5)
	{
		return __thiz.callMethod<jboolean>(
			"needsReload",
			"(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/util/ResourceBundle;J)Z",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5
		);
	}
	jboolean ResourceBundle_Control::needsReload(const QString &arg0, __jni_impl::java::util::Locale arg1, const QString &arg2, __jni_impl::java::lang::ClassLoader arg3, __jni_impl::java::util::ResourceBundle arg4, jlong arg5)
	{
		return __thiz.callMethod<jboolean>(
			"needsReload",
			"(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/util/ResourceBundle;J)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5
		);
	}
	QAndroidJniObject ResourceBundle_Control::newBundle(jstring arg0, __jni_impl::java::util::Locale arg1, jstring arg2, __jni_impl::java::lang::ClassLoader arg3, jboolean arg4)
	{
		return __thiz.callObjectMethod(
			"newBundle",
			"(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4
		);
	}
	QAndroidJniObject ResourceBundle_Control::newBundle(const QString &arg0, __jni_impl::java::util::Locale arg1, const QString &arg2, __jni_impl::java::lang::ClassLoader arg3, jboolean arg4)
	{
		return __thiz.callObjectMethod(
			"newBundle",
			"(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object(),
			arg4
		);
	}
	jstring ResourceBundle_Control::toBundleName(jstring arg0, __jni_impl::java::util::Locale arg1)
	{
		return __thiz.callObjectMethod(
			"toBundleName",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring ResourceBundle_Control::toBundleName(const QString &arg0, __jni_impl::java::util::Locale arg1)
	{
		return __thiz.callObjectMethod(
			"toBundleName",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring ResourceBundle_Control::toResourceName(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"toResourceName",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring ResourceBundle_Control::toResourceName(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"toResourceName",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class ResourceBundle_Control : public __jni_impl::java::util::ResourceBundle_Control
	{
	public:
		ResourceBundle_Control(QAndroidJniObject obj) { __thiz = obj; }
		ResourceBundle_Control()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_RESOURCEBUNDLE_CONTROL

