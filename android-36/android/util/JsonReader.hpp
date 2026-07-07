#pragma once

#include "./JsonToken.def.hpp"
#include "../../java/io/Reader.def.hpp"
#include "../../JString.hpp"
#include "./JsonReader.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline JsonReader::JsonReader(java::io::Reader arg0)
		: JObject(
			"android.util.JsonReader",
			"(Ljava/io/Reader;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void JsonReader::beginArray() const
	{
		callMethod<void>(
			"beginArray",
			"()V"
		);
	}
	inline void JsonReader::beginObject() const
	{
		callMethod<void>(
			"beginObject",
			"()V"
		);
	}
	inline void JsonReader::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void JsonReader::endArray() const
	{
		callMethod<void>(
			"endArray",
			"()V"
		);
	}
	inline void JsonReader::endObject() const
	{
		callMethod<void>(
			"endObject",
			"()V"
		);
	}
	inline jboolean JsonReader::hasNext() const
	{
		return callMethod<jboolean>(
			"hasNext",
			"()Z"
		);
	}
	inline jboolean JsonReader::isLenient() const
	{
		return callMethod<jboolean>(
			"isLenient",
			"()Z"
		);
	}
	inline jboolean JsonReader::nextBoolean() const
	{
		return callMethod<jboolean>(
			"nextBoolean",
			"()Z"
		);
	}
	inline jdouble JsonReader::nextDouble() const
	{
		return callMethod<jdouble>(
			"nextDouble",
			"()D"
		);
	}
	inline jint JsonReader::nextInt() const
	{
		return callMethod<jint>(
			"nextInt",
			"()I"
		);
	}
	inline jlong JsonReader::nextLong() const
	{
		return callMethod<jlong>(
			"nextLong",
			"()J"
		);
	}
	inline JString JsonReader::nextName() const
	{
		return callObjectMethod(
			"nextName",
			"()Ljava/lang/String;"
		);
	}
	inline void JsonReader::nextNull() const
	{
		callMethod<void>(
			"nextNull",
			"()V"
		);
	}
	inline JString JsonReader::nextString() const
	{
		return callObjectMethod(
			"nextString",
			"()Ljava/lang/String;"
		);
	}
	inline android::util::JsonToken JsonReader::peek() const
	{
		return callObjectMethod(
			"peek",
			"()Landroid/util/JsonToken;"
		);
	}
	inline void JsonReader::setLenient(jboolean arg0) const
	{
		callMethod<void>(
			"setLenient",
			"(Z)V",
			arg0
		);
	}
	inline void JsonReader::skipValue() const
	{
		callMethod<void>(
			"skipValue",
			"()V"
		);
	}
	inline JString JsonReader::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
