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
		static QAndroidJniObject SHORT_IDS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ZoneId(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ZoneId(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject from(__JniBaseClass arg0);
		static QAndroidJniObject getAvailableZoneIds();
		static QAndroidJniObject of(jstring arg0);
		static QAndroidJniObject of(jstring arg0, __JniBaseClass arg1);
		static QAndroidJniObject ofOffset(jstring arg0, java::time::ZoneOffset arg1);
		static QAndroidJniObject systemDefault();
		jboolean equals(jobject arg0);
		jstring getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1);
		jstring getId();
		QAndroidJniObject getRules();
		jint hashCode();
		QAndroidJniObject normalized();
		jstring toString();
	};
} // namespace java::time

