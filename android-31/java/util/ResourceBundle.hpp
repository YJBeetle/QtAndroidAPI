#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::lang
{
	class ClassLoader;
}
namespace java::lang::ref
{
	class ReferenceQueue;
}
namespace java::util
{
	class Locale;
}
namespace java::util
{
	class ResourceBundle_Control;
}
namespace java::util
{
	class ServiceLoader;
}

namespace java::util
{
	class ResourceBundle : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ResourceBundle(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ResourceBundle(QAndroidJniObject obj);
		
		// Constructors
		ResourceBundle();
		
		// Methods
		static void clearCache();
		static void clearCache(java::lang::ClassLoader arg0);
		static java::util::ResourceBundle getBundle(jstring arg0);
		static java::util::ResourceBundle getBundle(jstring arg0, __JniBaseClass arg1);
		static java::util::ResourceBundle getBundle(jstring arg0, java::util::Locale arg1);
		static java::util::ResourceBundle getBundle(jstring arg0, java::util::ResourceBundle_Control arg1);
		static java::util::ResourceBundle getBundle(jstring arg0, java::util::Locale arg1, java::lang::ClassLoader arg2);
		static java::util::ResourceBundle getBundle(jstring arg0, java::util::Locale arg1, __JniBaseClass arg2);
		static java::util::ResourceBundle getBundle(jstring arg0, java::util::Locale arg1, java::util::ResourceBundle_Control arg2);
		static java::util::ResourceBundle getBundle(jstring arg0, java::util::Locale arg1, java::lang::ClassLoader arg2, java::util::ResourceBundle_Control arg3);
		jboolean containsKey(jstring arg0);
		jstring getBaseBundleName();
		__JniBaseClass getKeys();
		java::util::Locale getLocale();
		jobject getObject(jstring arg0);
		jstring getString(jstring arg0);
		jarray getStringArray(jstring arg0);
		__JniBaseClass keySet();
	};
} // namespace java::util

