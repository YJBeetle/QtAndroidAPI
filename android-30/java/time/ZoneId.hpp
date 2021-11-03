#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::time
{
	class ZoneOffset;
}
namespace java::time::format
{
	class TextStyle;
}
namespace java::time::zone
{
	class ZoneRules;
}
namespace java::util
{
	class Locale;
}

namespace java::time
{
	class ZoneId : public JObject
	{
	public:
		// Fields
		static JObject SHORT_IDS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ZoneId(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ZoneId(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::ZoneId from(JObject arg0);
		static JObject getAvailableZoneIds();
		static java::time::ZoneId of(jstring arg0);
		static java::time::ZoneId of(jstring arg0, JObject arg1);
		static java::time::ZoneId ofOffset(jstring arg0, java::time::ZoneOffset arg1);
		static java::time::ZoneId systemDefault();
		jboolean equals(jobject arg0);
		jstring getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1);
		jstring getId();
		java::time::zone::ZoneRules getRules();
		jint hashCode();
		java::time::ZoneId normalized();
		jstring toString();
	};
} // namespace java::time

