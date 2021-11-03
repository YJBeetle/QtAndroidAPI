#pragma once

#include "../../../JObject.hpp"

class JClass;
class JString;
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
		static JString PROPERTY_NAME();
		
		// QJniObject forward
		template<typename ...Ts> explicit XmlPullParserFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		XmlPullParserFactory(QJniObject obj);
		
		// Constructors
		
		// Methods
		static org::xmlpull::v1::XmlPullParserFactory newInstance();
		static org::xmlpull::v1::XmlPullParserFactory newInstance(JString arg0, JClass arg1);
		jboolean getFeature(JString arg0) const;
		jboolean isNamespaceAware() const;
		jboolean isValidating() const;
		JObject newPullParser() const;
		JObject newSerializer() const;
		void setFeature(JString arg0, jboolean arg1) const;
		void setNamespaceAware(jboolean arg0) const;
		void setValidating(jboolean arg0) const;
	};
} // namespace org::xmlpull::v1

