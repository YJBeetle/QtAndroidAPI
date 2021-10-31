#include "../lang/ClassLoader.hpp"
#include "../lang/ref/ReferenceQueue.hpp"
#include "./Locale.hpp"
#include "./ResourceBundle_Control.hpp"
#include "./ServiceLoader.hpp"
#include "./ResourceBundle.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	ResourceBundle::ResourceBundle(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ResourceBundle::ResourceBundle()
		: __JniBaseClass(
			"java.util.ResourceBundle",
			"()V"
		) {}
	
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
			arg0.object()
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
	QAndroidJniObject ResourceBundle::getBundle(jstring arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/lang/Module;)Ljava/util/ResourceBundle;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject ResourceBundle::getBundle(jstring arg0, java::util::Locale arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject ResourceBundle::getBundle(jstring arg0, java::util::ResourceBundle_Control arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject ResourceBundle::getBundle(jstring arg0, java::util::Locale arg1, java::lang::ClassLoader arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;)Ljava/util/ResourceBundle;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject ResourceBundle::getBundle(jstring arg0, java::util::Locale arg1, __JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/Module;)Ljava/util/ResourceBundle;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject ResourceBundle::getBundle(jstring arg0, java::util::Locale arg1, java::util::ResourceBundle_Control arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/Locale;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject ResourceBundle::getBundle(jstring arg0, java::util::Locale arg1, java::lang::ClassLoader arg2, java::util::ResourceBundle_Control arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle",
			"getBundle",
			"(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	jboolean ResourceBundle::containsKey(jstring arg0)
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jstring ResourceBundle::getBaseBundleName()
	{
		return callObjectMethod(
			"getBaseBundleName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ResourceBundle::getKeys()
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/Enumeration;"
		);
	}
	QAndroidJniObject ResourceBundle::getLocale()
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	jobject ResourceBundle::getObject(jstring arg0)
	{
		return callObjectMethod(
			"getObject",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jstring ResourceBundle::getString(jstring arg0)
	{
		return callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jarray ResourceBundle::getStringArray(jstring arg0)
	{
		return callObjectMethod(
			"getStringArray",
			"(Ljava/lang/String;)[Ljava/lang/String;",
			arg0
		).object<jarray>();
	}
	QAndroidJniObject ResourceBundle::keySet()
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
} // namespace java::util

