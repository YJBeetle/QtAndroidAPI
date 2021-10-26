#pragma once

#ifndef ANDROID_UTIL_JSONREADER
#define ANDROID_UTIL_JSONREADER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class Reader;
}
namespace __jni_impl::android::util
{
	class JsonToken;
}

namespace __jni_impl::android::util
{
	class JsonReader : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::Reader arg0);
		
		// Methods
		jstring toString();
		jboolean hasNext();
		void close();
		QAndroidJniObject peek();
		jdouble nextDouble();
		jint nextInt();
		jlong nextLong();
		jboolean nextBoolean();
		void setLenient(jboolean arg0);
		jboolean isLenient();
		void nextNull();
		void skipValue();
		jstring nextName();
		jstring nextString();
		void beginArray();
		void endArray();
		void beginObject();
		void endObject();
	};
} // namespace __jni_impl::android::util

#include "../../java/io/Reader.hpp"
#include "JsonToken.hpp"

namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void JsonReader::__constructor(__jni_impl::java::io::Reader arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.JsonReader",
			"(Ljava/io/Reader;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jstring JsonReader::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean JsonReader::hasNext()
	{
		return __thiz.callMethod<jboolean>(
			"hasNext",
			"()Z"
		);
	}
	void JsonReader::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject JsonReader::peek()
	{
		return __thiz.callObjectMethod(
			"peek",
			"()Landroid/util/JsonToken;"
		);
	}
	jdouble JsonReader::nextDouble()
	{
		return __thiz.callMethod<jdouble>(
			"nextDouble",
			"()D"
		);
	}
	jint JsonReader::nextInt()
	{
		return __thiz.callMethod<jint>(
			"nextInt",
			"()I"
		);
	}
	jlong JsonReader::nextLong()
	{
		return __thiz.callMethod<jlong>(
			"nextLong",
			"()J"
		);
	}
	jboolean JsonReader::nextBoolean()
	{
		return __thiz.callMethod<jboolean>(
			"nextBoolean",
			"()Z"
		);
	}
	void JsonReader::setLenient(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLenient",
			"(Z)V",
			arg0
		);
	}
	jboolean JsonReader::isLenient()
	{
		return __thiz.callMethod<jboolean>(
			"isLenient",
			"()Z"
		);
	}
	void JsonReader::nextNull()
	{
		__thiz.callMethod<void>(
			"nextNull",
			"()V"
		);
	}
	void JsonReader::skipValue()
	{
		__thiz.callMethod<void>(
			"skipValue",
			"()V"
		);
	}
	jstring JsonReader::nextName()
	{
		return __thiz.callObjectMethod(
			"nextName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring JsonReader::nextString()
	{
		return __thiz.callObjectMethod(
			"nextString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void JsonReader::beginArray()
	{
		__thiz.callMethod<void>(
			"beginArray",
			"()V"
		);
	}
	void JsonReader::endArray()
	{
		__thiz.callMethod<void>(
			"endArray",
			"()V"
		);
	}
	void JsonReader::beginObject()
	{
		__thiz.callMethod<void>(
			"beginObject",
			"()V"
		);
	}
	void JsonReader::endObject()
	{
		__thiz.callMethod<void>(
			"endObject",
			"()V"
		);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class JsonReader : public __jni_impl::android::util::JsonReader
	{
	public:
		JsonReader(QAndroidJniObject obj) { __thiz = obj; }
		JsonReader(__jni_impl::java::io::Reader arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_JSONREADER

