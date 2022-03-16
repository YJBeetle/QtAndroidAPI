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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GenericDocument(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GenericDocument(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jint getMaxIndexedProperties();
		jboolean equals(JObject arg0) const;
		jlong getCreationTimestampMillis() const;
		JString getId() const;
		JString getNamespace() const;
		JObject getProperty(JString arg0) const;
		jboolean getPropertyBoolean(JString arg0) const;
		JBooleanArray getPropertyBooleanArray(JString arg0) const;
		JByteArray getPropertyBytes(JString arg0) const;
		JArray getPropertyBytesArray(JString arg0) const;
		android::app::appsearch::GenericDocument getPropertyDocument(JString arg0) const;
		JArray getPropertyDocumentArray(JString arg0) const;
		jdouble getPropertyDouble(JString arg0) const;
		JDoubleArray getPropertyDoubleArray(JString arg0) const;
		jlong getPropertyLong(JString arg0) const;
		JLongArray getPropertyLongArray(JString arg0) const;
		JObject getPropertyNames() const;
		JString getPropertyString(JString arg0) const;
		JArray getPropertyStringArray(JString arg0) const;
		JString getSchemaType() const;
		jint getScore() const;
		jlong getTtlMillis() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::app::appsearch

