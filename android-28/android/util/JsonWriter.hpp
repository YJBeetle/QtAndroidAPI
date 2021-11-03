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
		
		// QJniObject forward
		template<typename ...Ts> explicit JsonWriter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JsonWriter(QJniObject obj);
		
		// Constructors
		JsonWriter(java::io::Writer arg0);
		
		// Methods
		android::util::JsonWriter beginArray();
		android::util::JsonWriter beginObject();
		void close();
		android::util::JsonWriter endArray();
		android::util::JsonWriter endObject();
		void flush();
		jboolean isLenient();
		android::util::JsonWriter name(JString arg0);
		android::util::JsonWriter nullValue();
		void setIndent(JString arg0);
		void setLenient(jboolean arg0);
		android::util::JsonWriter value(jboolean arg0);
		android::util::JsonWriter value(jdouble arg0);
		android::util::JsonWriter value(java::lang::Number arg0);
		android::util::JsonWriter value(JString arg0);
		android::util::JsonWriter value(jlong arg0);
	};
} // namespace android::util

