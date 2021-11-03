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
		jint getColumnNumber() const;
		JObject getContentHandler() const;
		JObject getDTDHandler() const;
		JObject getEntityResolver() const;
		JObject getErrorHandler() const;
		jboolean getFeature(JString arg0) const;
		jint getIndex(JString arg0) const;
		jint getIndex(JString arg0, JString arg1) const;
		jint getLength() const;
		jint getLineNumber() const;
		JString getLocalName(jint arg0) const;
		JObject getProperty(JString arg0) const;
		JString getPublicId() const;
		JString getQName(jint arg0) const;
		JString getSystemId() const;
		JString getType(jint arg0) const;
		JString getType(JString arg0) const;
		JString getType(JString arg0, JString arg1) const;
		JString getURI(jint arg0) const;
		JString getValue(jint arg0) const;
		JString getValue(JString arg0) const;
		JString getValue(JString arg0, JString arg1) const;
		void parse(JString arg0) const;
		void parse(org::xml::sax::InputSource arg0) const;
		void parseSubTree(JObject arg0) const;
		void setContentHandler(JObject arg0) const;
		void setDTDHandler(JObject arg0) const;
		void setEntityResolver(JObject arg0) const;
		void setErrorHandler(JObject arg0) const;
		void setFeature(JString arg0, jboolean arg1) const;
		void setProperty(JString arg0, JObject arg1) const;
	};
} // namespace org::xmlpull::v1::sax2

