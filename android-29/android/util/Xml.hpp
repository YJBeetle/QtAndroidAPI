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
		
		Xml(QAndroidJniObject obj);
		// Constructors
		Xml() = default;
		
		// Methods
		static QAndroidJniObject asAttributeSet(__JniBaseClass arg0);
		static QAndroidJniObject findEncodingByName(jstring arg0);
		static QAndroidJniObject findEncodingByName(const QString &arg0);
		static QAndroidJniObject newPullParser();
		static QAndroidJniObject newSerializer();
		static void parse(java::io::Reader arg0, __JniBaseClass arg1);
		static void parse(jstring arg0, __JniBaseClass arg1);
		static void parse(const QString &arg0, __JniBaseClass arg1);
		static void parse(java::io::InputStream arg0, android::util::Xml_Encoding arg1, __JniBaseClass arg2);
	};
} // namespace android::util

