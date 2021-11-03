#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;
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
		static java::time::ZoneId of(JString arg0);
		static java::time::ZoneId of(JString arg0, JObject arg1);
		static java::time::ZoneId ofOffset(JString arg0, java::time::ZoneOffset arg1);
		static java::time::ZoneId systemDefault();
		jboolean equals(JObject arg0);
		JString getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1);
		JString getId();
		java::time::zone::ZoneRules getRules();
		jint hashCode();
		java::time::ZoneId normalized();
		JString toString();
	};
} // namespace java::time

