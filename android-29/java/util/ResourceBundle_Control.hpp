#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::lang
{
	class ClassLoader;
}
namespace java::lang
{
	class Void;
}
namespace java::lang::reflect
{
	class Constructor;
}
namespace java::util
{
	class Locale;
}
namespace java::util
{
	class ResourceBundle;
}

namespace java::util
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
		
		ResourceBundle_Control(QAndroidJniObject obj);
		// Constructors
		ResourceBundle_Control() = default;
		
		// Methods
		static QAndroidJniObject getControl(__JniBaseClass arg0);
		static QAndroidJniObject getNoFallbackControl(__JniBaseClass arg0);
		QAndroidJniObject getCandidateLocales(jstring arg0, java::util::Locale arg1);
		QAndroidJniObject getCandidateLocales(const QString &arg0, java::util::Locale arg1);
		QAndroidJniObject getFallbackLocale(jstring arg0, java::util::Locale arg1);
		QAndroidJniObject getFallbackLocale(const QString &arg0, java::util::Locale arg1);
		QAndroidJniObject getFormats(jstring arg0);
		QAndroidJniObject getFormats(const QString &arg0);
		jlong getTimeToLive(jstring arg0, java::util::Locale arg1);
		jlong getTimeToLive(const QString &arg0, java::util::Locale arg1);
		jboolean needsReload(jstring arg0, java::util::Locale arg1, jstring arg2, java::lang::ClassLoader arg3, java::util::ResourceBundle arg4, jlong arg5);
		jboolean needsReload(const QString &arg0, java::util::Locale arg1, const QString &arg2, java::lang::ClassLoader arg3, java::util::ResourceBundle arg4, jlong arg5);
		QAndroidJniObject newBundle(jstring arg0, java::util::Locale arg1, jstring arg2, java::lang::ClassLoader arg3, jboolean arg4);
		QAndroidJniObject newBundle(const QString &arg0, java::util::Locale arg1, const QString &arg2, java::lang::ClassLoader arg3, jboolean arg4);
		jstring toBundleName(jstring arg0, java::util::Locale arg1);
		jstring toBundleName(const QString &arg0, java::util::Locale arg1);
		jstring toResourceName(jstring arg0, jstring arg1);
		jstring toResourceName(const QString &arg0, const QString &arg1);
	};
} // namespace java::util

