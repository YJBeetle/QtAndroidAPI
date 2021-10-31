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
		static __JniBaseClass FORMAT_CLASS();
		static __JniBaseClass FORMAT_DEFAULT();
		static __JniBaseClass FORMAT_PROPERTIES();
		static jlong TTL_DONT_CACHE();
		static jlong TTL_NO_EXPIRATION_CONTROL();
		
		// QJniObject forward
		template<typename ...Ts> explicit ResourceBundle_Control(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ResourceBundle_Control(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::ResourceBundle_Control getControl(__JniBaseClass arg0);
		static java::util::ResourceBundle_Control getNoFallbackControl(__JniBaseClass arg0);
		__JniBaseClass getCandidateLocales(jstring arg0, java::util::Locale arg1);
		java::util::Locale getFallbackLocale(jstring arg0, java::util::Locale arg1);
		__JniBaseClass getFormats(jstring arg0);
		jlong getTimeToLive(jstring arg0, java::util::Locale arg1);
		jboolean needsReload(jstring arg0, java::util::Locale arg1, jstring arg2, java::lang::ClassLoader arg3, java::util::ResourceBundle arg4, jlong arg5);
		java::util::ResourceBundle newBundle(jstring arg0, java::util::Locale arg1, jstring arg2, java::lang::ClassLoader arg3, jboolean arg4);
		jstring toBundleName(jstring arg0, java::util::Locale arg1);
		jstring toResourceName(jstring arg0, jstring arg1);
	};
} // namespace java::util

