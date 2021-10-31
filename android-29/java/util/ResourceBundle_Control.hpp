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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ResourceBundle_Control(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ResourceBundle_Control(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getControl(__JniBaseClass arg0);
		static QAndroidJniObject getNoFallbackControl(__JniBaseClass arg0);
		QAndroidJniObject getCandidateLocales(jstring arg0, java::util::Locale arg1);
		QAndroidJniObject getFallbackLocale(jstring arg0, java::util::Locale arg1);
		QAndroidJniObject getFormats(jstring arg0);
		jlong getTimeToLive(jstring arg0, java::util::Locale arg1);
		jboolean needsReload(jstring arg0, java::util::Locale arg1, jstring arg2, java::lang::ClassLoader arg3, java::util::ResourceBundle arg4, jlong arg5);
		QAndroidJniObject newBundle(jstring arg0, java::util::Locale arg1, jstring arg2, java::lang::ClassLoader arg3, jboolean arg4);
		jstring toBundleName(jstring arg0, java::util::Locale arg1);
		jstring toResourceName(jstring arg0, jstring arg1);
	};
} // namespace java::util

