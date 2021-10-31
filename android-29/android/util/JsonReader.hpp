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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JsonReader(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		JsonReader(QAndroidJniObject obj);
		
		// Constructors
		JsonReader(java::io::Reader arg0);
		
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

