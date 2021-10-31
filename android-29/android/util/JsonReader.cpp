#include "./JsonToken.hpp"
#include "../../java/io/Reader.hpp"
#include "./JsonReader.hpp"

namespace android::util
{
	// Fields
	
	JsonReader::JsonReader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	JsonReader::JsonReader(java::io::Reader arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.JsonReader",
			"(Ljava/io/Reader;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void JsonReader::beginArray()
	{
		__thiz.callMethod<void>(
			"beginArray",
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
	void JsonReader::close()
	{
		__thiz.callMethod<void>(
			"close",
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
	void JsonReader::endObject()
	{
		__thiz.callMethod<void>(
			"endObject",
			"()V"
		);
	}
	jboolean JsonReader::hasNext()
	{
		return __thiz.callMethod<jboolean>(
			"hasNext",
			"()Z"
		);
	}
	jboolean JsonReader::isLenient()
	{
		return __thiz.callMethod<jboolean>(
			"isLenient",
			"()Z"
		);
	}
	jboolean JsonReader::nextBoolean()
	{
		return __thiz.callMethod<jboolean>(
			"nextBoolean",
			"()Z"
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
	jstring JsonReader::nextName()
	{
		return __thiz.callObjectMethod(
			"nextName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void JsonReader::nextNull()
	{
		__thiz.callMethod<void>(
			"nextNull",
			"()V"
		);
	}
	jstring JsonReader::nextString()
	{
		return __thiz.callObjectMethod(
			"nextString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject JsonReader::peek()
	{
		return __thiz.callObjectMethod(
			"peek",
			"()Landroid/util/JsonToken;"
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
	void JsonReader::skipValue()
	{
		__thiz.callMethod<void>(
			"skipValue",
			"()V"
		);
	}
	jstring JsonReader::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::util

