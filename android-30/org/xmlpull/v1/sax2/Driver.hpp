#pragma once

#include "../../../../JObject.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit Driver(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Driver(QJniObject obj);
		
		// Constructors
		Driver();
		Driver(JObject arg0);
		
		// Methods
		jint getColumnNumber();
		JObject getContentHandler();
		JObject getDTDHandler();
		JObject getEntityResolver();
		JObject getErrorHandler();
		jboolean getFeature(jstring arg0);
		jint getIndex(jstring arg0);
		jint getIndex(jstring arg0, jstring arg1);
		jint getLength();
		jint getLineNumber();
		jstring getLocalName(jint arg0);
		jobject getProperty(jstring arg0);
		jstring getPublicId();
		jstring getQName(jint arg0);
		jstring getSystemId();
		jstring getType(jint arg0);
		jstring getType(jstring arg0);
		jstring getType(jstring arg0, jstring arg1);
		jstring getURI(jint arg0);
		jstring getValue(jint arg0);
		jstring getValue(jstring arg0);
		jstring getValue(jstring arg0, jstring arg1);
		void parse(jstring arg0);
		void parse(org::xml::sax::InputSource arg0);
		void parseSubTree(JObject arg0);
		void setContentHandler(JObject arg0);
		void setDTDHandler(JObject arg0);
		void setEntityResolver(JObject arg0);
		void setErrorHandler(JObject arg0);
		void setFeature(jstring arg0, jboolean arg1);
		void setProperty(jstring arg0, jobject arg1);
	};
} // namespace org::xmlpull::v1::sax2

