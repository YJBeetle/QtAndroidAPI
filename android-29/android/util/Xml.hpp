#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::util
{
	class Xml_Encoding;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class Reader;
}

namespace android::util
{
	class Xml : public __JniBaseClass
	{
	public:
		// Fields
		static jstring FEATURE_RELAXED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Xml(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Xml(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static __JniBaseClass asAttributeSet(__JniBaseClass arg0);
		static android::util::Xml_Encoding findEncodingByName(jstring arg0);
		static __JniBaseClass newPullParser();
		static __JniBaseClass newSerializer();
		static void parse(java::io::Reader arg0, __JniBaseClass arg1);
		static void parse(jstring arg0, __JniBaseClass arg1);
		static void parse(java::io::InputStream arg0, android::util::Xml_Encoding arg1, __JniBaseClass arg2);
	};
} // namespace android::util

