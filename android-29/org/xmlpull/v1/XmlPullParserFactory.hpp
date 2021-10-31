#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class XmlPullParserFactory : public __JniBaseClass
	{
	public:
		// Fields
		static jstring PROPERTY_NAME();
		
		XmlPullParserFactory(QAndroidJniObject obj);
		// Constructors
		XmlPullParserFactory() = default;
		
		// Methods
		static QAndroidJniObject newInstance();
		static QAndroidJniObject newInstance(jstring arg0, jclass arg1);
		jboolean getFeature(jstring arg0);
		jboolean isNamespaceAware();
		jboolean isValidating();
		QAndroidJniObject newPullParser();
		QAndroidJniObject newSerializer();
		void setFeature(jstring arg0, jboolean arg1);
		void setNamespaceAware(jboolean arg0);
		void setValidating(jboolean arg0);
	};
} // namespace org::xmlpull::v1

