#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace org::xml::sax
{
	class InputSource;
}

namespace org::xmlpull::v1::sax2
{
	class Driver : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Driver(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Driver(QAndroidJniObject obj);
		
		// Constructors
		Driver();
		Driver(__JniBaseClass arg0);
		
		// Methods
		jint getColumnNumber();
		__JniBaseClass getContentHandler();
		__JniBaseClass getDTDHandler();
		__JniBaseClass getEntityResolver();
		__JniBaseClass getErrorHandler();
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
		void parseSubTree(__JniBaseClass arg0);
		void setContentHandler(__JniBaseClass arg0);
		void setDTDHandler(__JniBaseClass arg0);
		void setEntityResolver(__JniBaseClass arg0);
		void setErrorHandler(__JniBaseClass arg0);
		void setFeature(jstring arg0, jboolean arg1);
		void setProperty(jstring arg0, jobject arg1);
	};
} // namespace org::xmlpull::v1::sax2

