#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class Writer;
}
namespace java::lang
{
	class Number;
}

namespace android::util
{
	class JsonWriter : public __JniBaseClass
	{
	public:
		// Fields
		
		JsonWriter(QAndroidJniObject obj);
		// Constructors
		JsonWriter(java::io::Writer arg0);
		JsonWriter() = default;
		
		// Methods
		QAndroidJniObject beginArray();
		QAndroidJniObject beginObject();
		void close();
		QAndroidJniObject endArray();
		QAndroidJniObject endObject();
		void flush();
		jboolean isLenient();
		QAndroidJniObject name(jstring arg0);
		QAndroidJniObject nullValue();
		void setIndent(jstring arg0);
		void setLenient(jboolean arg0);
		QAndroidJniObject value(jboolean arg0);
		QAndroidJniObject value(jdouble arg0);
		QAndroidJniObject value(java::lang::Number arg0);
		QAndroidJniObject value(jstring arg0);
		QAndroidJniObject value(jlong arg0);
	};
} // namespace android::util

