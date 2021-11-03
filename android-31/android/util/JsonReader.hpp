#pragma once

#include "../../JObject.hpp"

namespace android::util
{
	class JsonToken;
}
namespace java::io
{
	class Reader;
}
class JString;

namespace android::util
{
	class JsonReader : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit JsonReader(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JsonReader(QJniObject obj);
		
		// Constructors
		JsonReader(java::io::Reader arg0);
		
		// Methods
		void beginArray() const;
		void beginObject() const;
		void close() const;
		void endArray() const;
		void endObject() const;
		jboolean hasNext() const;
		jboolean isLenient() const;
		jboolean nextBoolean() const;
		jdouble nextDouble() const;
		jint nextInt() const;
		jlong nextLong() const;
		JString nextName() const;
		void nextNull() const;
		JString nextString() const;
		android::util::JsonToken peek() const;
		void setLenient(jboolean arg0) const;
		void skipValue() const;
		JString toString() const;
	};
} // namespace android::util

