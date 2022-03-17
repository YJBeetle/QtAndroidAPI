#pragma once

#include "../../JObject.hpp"

namespace java::lang
{
	class ClassLoader;
}
class JString;
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
	class ResourceBundle_Control : public JObject
	{
	public:
		// Fields
		static JObject FORMAT_CLASS();
		static JObject FORMAT_DEFAULT();
		static JObject FORMAT_PROPERTIES();
		static jlong TTL_DONT_CACHE();
		static jlong TTL_NO_EXPIRATION_CONTROL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ResourceBundle_Control(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ResourceBundle_Control(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::util::ResourceBundle_Control getControl(JObject arg0);
		static java::util::ResourceBundle_Control getNoFallbackControl(JObject arg0);
		JObject getCandidateLocales(JString arg0, java::util::Locale arg1) const;
		java::util::Locale getFallbackLocale(JString arg0, java::util::Locale arg1) const;
		JObject getFormats(JString arg0) const;
		jlong getTimeToLive(JString arg0, java::util::Locale arg1) const;
		jboolean needsReload(JString arg0, java::util::Locale arg1, JString arg2, java::lang::ClassLoader arg3, java::util::ResourceBundle arg4, jlong arg5) const;
		java::util::ResourceBundle newBundle(JString arg0, java::util::Locale arg1, JString arg2, java::lang::ClassLoader arg3, jboolean arg4) const;
		JString toBundleName(JString arg0, java::util::Locale arg1) const;
		JString toResourceName(JString arg0, JString arg1) const;
	};
} // namespace java::util

