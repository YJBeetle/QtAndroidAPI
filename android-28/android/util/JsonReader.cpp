#include "./JsonToken.hpp"
#include "../../java/io/Reader.hpp"
#include "../../JString.hpp"
#include "./JsonReader.hpp"

namespace android::util
{
	// Fields
	
	// QJniObject forward
	JsonReader::JsonReader(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	JsonReader::JsonReader(java::io::Reader arg0)
		: JObject(
			"android.util.JsonReader",
			"(Ljava/io/Reader;)V",
			arg0.object()
		) {}
	
	// Methods
	void JsonReader::beginArray() const
	{
		callMethod<void>(
			"beginArray",
			"()V"
		);
	}
	void JsonReader::beginObject() const
	{
		callMethod<void>(
			"beginObject",
			"()V"
		);
	}
	void JsonReader::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void JsonReader::endArray() const
	{
		callMethod<void>(
			"endArray",
			"()V"
		);
	}
	void JsonReader::endObject() const
	{
		callMethod<void>(
			"endObject",
			"()V"
		);
	}
	jboolean JsonReader::hasNext() const
	{
		return callMethod<jboolean>(
			"hasNext",
			"()Z"
		);
	}
	jboolean JsonReader::isLenient() const
	{
		return callMethod<jboolean>(
			"isLenient",
			"()Z"
		);
	}
	jboolean JsonReader::nextBoolean() const
	{
		return callMethod<jboolean>(
			"nextBoolean",
			"()Z"
		);
	}
	jdouble JsonReader::nextDouble() const
	{
		return callMethod<jdouble>(
			"nextDouble",
			"()D"
		);
	}
	jint JsonReader::nextInt() const
	{
		return callMethod<jint>(
			"nextInt",
			"()I"
		);
	}
	jlong JsonReader::nextLong() const
	{
		return callMethod<jlong>(
			"nextLong",
			"()J"
		);
	}
	JString JsonReader::nextName() const
	{
		return callObjectMethod(
			"nextName",
			"()Ljava/lang/String;"
		);
	}
	void JsonReader::nextNull() const
	{
		callMethod<void>(
			"nextNull",
			"()V"
		);
	}
	JString JsonReader::nextString() const
	{
		return callObjectMethod(
			"nextString",
			"()Ljava/lang/String;"
		);
	}
	android::util::JsonToken JsonReader::peek() const
	{
		return callObjectMethod(
			"peek",
			"()Landroid/util/JsonToken;"
		);
	}
	void JsonReader::setLenient(jboolean arg0) const
	{
		callMethod<void>(
			"setLenient",
			"(Z)V",
			arg0
		);
	}
	void JsonReader::skipValue() const
	{
		callMethod<void>(
			"skipValue",
			"()V"
		);
	}
	JString JsonReader::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::util

