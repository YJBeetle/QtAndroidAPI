#include "../lang/ClassLoader.hpp"
#include "../lang/Void.hpp"
#include "../lang/reflect/Constructor.hpp"
#include "./Locale.hpp"
#include "./ResourceBundle.hpp"
#include "./ResourceBundle_Control.hpp"

namespace java::util
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
	
	// QAndroidJniObject forward
	ResourceBundle_Control::ResourceBundle_Control(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ResourceBundle_Control::getControl(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle$Control",
			"getControl",
			"(Ljava/util/List;)Ljava/util/ResourceBundle$Control;",
			arg0.object()
		);
	}
	QAndroidJniObject ResourceBundle_Control::getNoFallbackControl(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.ResourceBundle$Control",
			"getNoFallbackControl",
			"(Ljava/util/List;)Ljava/util/ResourceBundle$Control;",
			arg0.object()
		);
	}
	QAndroidJniObject ResourceBundle_Control::getCandidateLocales(jstring arg0, java::util::Locale arg1)
	{
		return callObjectMethod(
			"getCandidateLocales",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject ResourceBundle_Control::getFallbackLocale(jstring arg0, java::util::Locale arg1)
	{
		return callObjectMethod(
			"getFallbackLocale",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/Locale;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject ResourceBundle_Control::getFormats(jstring arg0)
	{
		return callObjectMethod(
			"getFormats",
			"(Ljava/lang/String;)Ljava/util/List;",
			arg0
		);
	}
	jlong ResourceBundle_Control::getTimeToLive(jstring arg0, java::util::Locale arg1)
	{
		return callMethod<jlong>(
			"getTimeToLive",
			"(Ljava/lang/String;Ljava/util/Locale;)J",
			arg0,
			arg1.object()
		);
	}
	jboolean ResourceBundle_Control::needsReload(jstring arg0, java::util::Locale arg1, jstring arg2, java::lang::ClassLoader arg3, java::util::ResourceBundle arg4, jlong arg5)
	{
		return callMethod<jboolean>(
			"needsReload",
			"(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/util/ResourceBundle;J)Z",
			arg0,
			arg1.object(),
			arg2,
			arg3.object(),
			arg4.object(),
			arg5
		);
	}
	QAndroidJniObject ResourceBundle_Control::newBundle(jstring arg0, java::util::Locale arg1, jstring arg2, java::lang::ClassLoader arg3, jboolean arg4)
	{
		return callObjectMethod(
			"newBundle",
			"(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;",
			arg0,
			arg1.object(),
			arg2,
			arg3.object(),
			arg4
		);
	}
	jstring ResourceBundle_Control::toBundleName(jstring arg0, java::util::Locale arg1)
	{
		return callObjectMethod(
			"toBundleName",
			"(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	jstring ResourceBundle_Control::toResourceName(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"toResourceName",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
} // namespace java::util

