#pragma once

#include "../../__JniBaseClass.hpp"

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
	class ZoneId : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass SHORT_IDS();
		
		// QJniObject forward
		template<typename ...Ts> explicit ZoneId(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ZoneId(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::ZoneId from(__JniBaseClass arg0);
		static __JniBaseClass getAvailableZoneIds();
		static java::time::ZoneId of(jstring arg0);
		static java::time::ZoneId of(jstring arg0, __JniBaseClass arg1);
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

