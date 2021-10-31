#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::app::appsearch
{
	class GenericDocument : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GenericDocument(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GenericDocument(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jint getMaxIndexedProperties();
		jboolean equals(jobject arg0);
		jlong getCreationTimestampMillis();
		jstring getId();
		jstring getNamespace();
		jobject getProperty(jstring arg0);
		jboolean getPropertyBoolean(jstring arg0);
		jbooleanArray getPropertyBooleanArray(jstring arg0);
		jbyteArray getPropertyBytes(jstring arg0);
		jarray getPropertyBytesArray(jstring arg0);
		android::app::appsearch::GenericDocument getPropertyDocument(jstring arg0);
		jarray getPropertyDocumentArray(jstring arg0);
		jdouble getPropertyDouble(jstring arg0);
		jdoubleArray getPropertyDoubleArray(jstring arg0);
		jlong getPropertyLong(jstring arg0);
		jlongArray getPropertyLongArray(jstring arg0);
		__JniBaseClass getPropertyNames();
		jstring getPropertyString(jstring arg0);
		jarray getPropertyStringArray(jstring arg0);
		jstring getSchemaType();
		jint getScore();
		jlong getTtlMillis();
		jint hashCode();
		jstring toString();
	};
} // namespace android::app::appsearch

