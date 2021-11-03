#pragma once

#include "../../JObject.hpp"

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
class JString;

namespace android::util
{
	class Xml : public JObject
	{
	public:
		// Fields
		static JString FEATURE_RELAXED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Xml(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Xml(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject asAttributeSet(JObject arg0);
		static android::util::Xml_Encoding findEncodingByName(JString arg0);
		static JObject newPullParser();
		static JObject newSerializer();
		static void parse(java::io::Reader arg0, JObject arg1);
		static void parse(JString arg0, JObject arg1);
		static void parse(java::io::InputStream arg0, android::util::Xml_Encoding arg1, JObject arg2);
	};
} // namespace android::util

