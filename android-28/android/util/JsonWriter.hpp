#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class Writer;
}
namespace java::lang
{
	class Number;
}
class JString;

namespace android::util
{
	class JsonWriter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JsonWriter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JsonWriter(QAndroidJniObject obj);
		
		// Constructors
		JsonWriter(java::io::Writer arg0);
		
		// Methods
		android::util::JsonWriter beginArray() const;
		android::util::JsonWriter beginObject() const;
		void close() const;
		android::util::JsonWriter endArray() const;
		android::util::JsonWriter endObject() const;
		void flush() const;
		jboolean isLenient() const;
		android::util::JsonWriter name(JString arg0) const;
		android::util::JsonWriter nullValue() const;
		void setIndent(JString arg0) const;
		void setLenient(jboolean arg0) const;
		android::util::JsonWriter value(jboolean arg0) const;
		android::util::JsonWriter value(jdouble arg0) const;
		android::util::JsonWriter value(java::lang::Number arg0) const;
		android::util::JsonWriter value(JString arg0) const;
		android::util::JsonWriter value(jlong arg0) const;
	};
} // namespace android::util

