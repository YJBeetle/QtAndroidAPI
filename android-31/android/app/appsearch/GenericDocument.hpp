#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JDoubleArray;
class JLongArray;
class JArray;
class JArray;
class JBooleanArray;
class JArray;
class JObject;
class JString;

namespace android::app::appsearch
{
	class GenericDocument : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GenericDocument(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GenericDocument(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jint getMaxIndexedProperties();
		jboolean equals(JObject arg0);
		jlong getCreationTimestampMillis();
		JString getId();
		JString getNamespace();
		JObject getProperty(JString arg0);
		jboolean getPropertyBoolean(JString arg0);
		JBooleanArray getPropertyBooleanArray(JString arg0);
		JByteArray getPropertyBytes(JString arg0);
		JArray getPropertyBytesArray(JString arg0);
		android::app::appsearch::GenericDocument getPropertyDocument(JString arg0);
		JArray getPropertyDocumentArray(JString arg0);
		jdouble getPropertyDouble(JString arg0);
		JDoubleArray getPropertyDoubleArray(JString arg0);
		jlong getPropertyLong(JString arg0);
		JLongArray getPropertyLongArray(JString arg0);
		JObject getPropertyNames();
		JString getPropertyString(JString arg0);
		JArray getPropertyStringArray(JString arg0);
		JString getSchemaType();
		jint getScore();
		jlong getTtlMillis();
		jint hashCode();
		JString toString();
	};
} // namespace android::app::appsearch

