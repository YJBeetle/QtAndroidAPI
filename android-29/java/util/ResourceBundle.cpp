#include "../lang/ClassLoader.hpp"
#include "../lang/ref/ReferenceQueue.hpp"
#include "./Locale.hpp"
#include "./ResourceBundle_Control.hpp"
#include "./ServiceLoader.hpp"
#include "./ResourceBundle.hpp"

namespace java::util
{
	// Fields
	
	ResourceBundle::ResourceBundle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ResourceBundle::ResourceBundle()
	{
		__thiz = QAndroidJniObject(
			"java.util.ResourceBundle",
			"()V"
		);
	}
	
	// Methods
	void ResourceBundle::clearCache()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.ResourceBundle",
			"clearCache",
			"()V"
		);
	}
	void ResourceBundle::clearCache(java::lang::ClassLoader arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.util.ResourceBundle",
			"clearCache",
			"(Ljava/lang/ClassLoader;)V",
			arg0.__jniObject().object()
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
	QAndroidJniObject ResourceBundle::getBundle(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;)Ljava/util/ResourceBundle;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ResourceBundle::getBundle(jstring arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/lang/Module;)Ljava/util/ResourceBundle;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceBundle::getBundle(const QString &arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/lang/Module;)Ljava/util/ResourceBundle;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceBundle::getBundle(jstring arg0, java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceBundle::getBundle(const QString &arg0, java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceBundle::getBundle(jstring arg0, java::util::ResourceBundle_Control arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceBundle::getBundle(const QString &arg0, java::util::ResourceBundle_Control arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceBundle::getBundle(jstring arg0, java::util::Locale arg1, java::lang::ClassLoader arg2)
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
	QAndroidJniObject ResourceBundle::getBundle(const QString &arg0, java::util::Locale arg1, java::lang::ClassLoader arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;)Ljava/util/ResourceBundle;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceBundle::getBundle(jstring arg0, java::util::Locale arg1, __JniBaseClass arg2)
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
	QAndroidJniObject ResourceBundle::getBundle(const QString &arg0, java::util::Locale arg1, __JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/Module;)Ljava/util/ResourceBundle;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceBundle::getBundle(jstring arg0, java::util::Locale arg1, java::util::ResourceBundle_Control arg2)
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
	QAndroidJniObject ResourceBundle::getBundle(const QString &arg0, java::util::Locale arg1, java::util::ResourceBundle_Control arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/Locale;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ResourceBundle::getBundle(jstring arg0, java::util::Locale arg1, java::lang::ClassLoader arg2, java::util::ResourceBundle_Control arg3)
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
	QAndroidJniObject ResourceBundle::getBundle(const QString &arg0, java::util::Locale arg1, java::lang::ClassLoader arg2, java::util::ResourceBundle_Control arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jboolean ResourceBundle::containsKey(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean ResourceBundle::containsKey(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring ResourceBundle::getBaseBundleName()
	{
		return __thiz.callObjectMethod(
			"getBaseBundleName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ResourceBundle::getKeys()
	{
		return __thiz.callObjectMethod(
			"getKeys",
			"()Ljava/util/Enumeration;"
		);
	}
	QAndroidJniObject ResourceBundle::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
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
	jobject ResourceBundle::getObject(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getObject",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
	jstring ResourceBundle::getString(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ResourceBundle::getString(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jarray ResourceBundle::getStringArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getStringArray",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	jarray ResourceBundle::getStringArray(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getStringArray",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jarray>();
	}
	QAndroidJniObject ResourceBundle::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
} // namespace java::util

