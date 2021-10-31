#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::util
{
	class JsonToken;
}
namespace java::io
{
	class Reader;
}

namespace android::util
{
	class JsonReader : public __JniBaseClass
	{
	public:
		// Fields
		
		JsonReader(QAndroidJniObject obj);
		// Constructors
		JsonReader(java::io::Reader arg0);
		JsonReader() = default;
		
		// Methods
		void beginArray();
		void beginObject();
		void close();
		void endArray();
		void endObject();
		jboolean hasNext();
		jboolean isLenient();
		jboolean nextBoolean();
		jdouble nextDouble();
		jint nextInt();
		jlong nextLong();
		jstring nextName();
		void nextNull();
		jstring nextString();
		QAndroidJniObject peek();
		void setLenient(jboolean arg0);
		void skipValue();
		jstring toString();
	};
} // namespace android::util

