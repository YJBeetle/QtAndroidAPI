#pragma once

#include "../../../JObject.hpp"

namespace java::util
{
	class ArrayList;
}
namespace java::util
{
	class HashMap;
}

namespace org::xmlpull::v1
{
	class XmlPullParserFactory : public JObject
	{
	public:
		// Fields
		static jstring PROPERTY_NAME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit XmlPullParserFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		XmlPullParserFactory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static org::xmlpull::v1::XmlPullParserFactory newInstance();
		static org::xmlpull::v1::XmlPullParserFactory newInstance(jstring arg0, jclass arg1);
		jboolean getFeature(jstring arg0);
		jboolean isNamespaceAware();
		jboolean isValidating();
		JObject newPullParser();
		JObject newSerializer();
		void setFeature(jstring arg0, jboolean arg1);
		void setNamespaceAware(jboolean arg0);
		void setValidating(jboolean arg0);
	};
} // namespace org::xmlpull::v1

