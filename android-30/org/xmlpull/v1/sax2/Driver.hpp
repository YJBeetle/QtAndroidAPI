#pragma once

#include "../../../../JObject.hpp"

class JObject;
class JString;
namespace org::xml::sax
{
	class InputSource;
}

namespace org::xmlpull::v1::sax2
{
	class Driver : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Driver(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Driver(QAndroidJniObject obj);
		
		// Constructors
		Driver();
		Driver(JObject arg0);
		
		// Methods
		jint getColumnNumber();
		JObject getContentHandler();
		JObject getDTDHandler();
		JObject getEntityResolver();
		JObject getErrorHandler();
		jboolean getFeature(JString arg0);
		jint getIndex(JString arg0);
		jint getIndex(JString arg0, JString arg1);
		jint getLength();
		jint getLineNumber();
		JString getLocalName(jint arg0);
		JObject getProperty(JString arg0);
		JString getPublicId();
		JString getQName(jint arg0);
		JString getSystemId();
		JString getType(jint arg0);
		JString getType(JString arg0);
		JString getType(JString arg0, JString arg1);
		JString getURI(jint arg0);
		JString getValue(jint arg0);
		JString getValue(JString arg0);
		JString getValue(JString arg0, JString arg1);
		void parse(JString arg0);
		void parse(org::xml::sax::InputSource arg0);
		void parseSubTree(JObject arg0);
		void setContentHandler(JObject arg0);
		void setDTDHandler(JObject arg0);
		void setEntityResolver(JObject arg0);
		void setErrorHandler(JObject arg0);
		void setFeature(JString arg0, jboolean arg1);
		void setProperty(JString arg0, JObject arg1);
	};
} // namespace org::xmlpull::v1::sax2

