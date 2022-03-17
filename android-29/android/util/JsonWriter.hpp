#pragma once

#include "../../java/io/Writer.def.hpp"
#include "../../java/lang/Number.def.hpp"
#include "../../JString.hpp"
#include "./JsonWriter.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline JsonWriter::JsonWriter(java::io::Writer arg0)
		: JObject(
			"android.util.JsonWriter",
			"(Ljava/io/Writer;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::util::JsonWriter JsonWriter::beginArray() const
	{
		return callObjectMethod(
			"beginArray",
			"()Landroid/util/JsonWriter;"
		);
	}
	inline android::util::JsonWriter JsonWriter::beginObject() const
	{
		return callObjectMethod(
			"beginObject",
			"()Landroid/util/JsonWriter;"
		);
	}
	inline void JsonWriter::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline android::util::JsonWriter JsonWriter::endArray() const
	{
		return callObjectMethod(
			"endArray",
			"()Landroid/util/JsonWriter;"
		);
	}
	inline android::util::JsonWriter JsonWriter::endObject() const
	{
		return callObjectMethod(
			"endObject",
			"()Landroid/util/JsonWriter;"
		);
	}
	inline void JsonWriter::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline jboolean JsonWriter::isLenient() const
	{
		return callMethod<jboolean>(
			"isLenient",
			"()Z"
		);
	}
	inline android::util::JsonWriter JsonWriter::name(JString arg0) const
	{
		return callObjectMethod(
			"name",
			"(Ljava/lang/String;)Landroid/util/JsonWriter;",
			arg0.object<jstring>()
		);
	}
	inline android::util::JsonWriter JsonWriter::nullValue() const
	{
		return callObjectMethod(
			"nullValue",
			"()Landroid/util/JsonWriter;"
		);
	}
	inline void JsonWriter::setIndent(JString arg0) const
	{
		callMethod<void>(
			"setIndent",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void JsonWriter::setLenient(jboolean arg0) const
	{
		callMethod<void>(
			"setLenient",
			"(Z)V",
			arg0
		);
	}
	inline android::util::JsonWriter JsonWriter::value(jboolean arg0) const
	{
		return callObjectMethod(
			"value",
			"(Z)Landroid/util/JsonWriter;",
			arg0
		);
	}
	inline android::util::JsonWriter JsonWriter::value(jdouble arg0) const
	{
		return callObjectMethod(
			"value",
			"(D)Landroid/util/JsonWriter;",
			arg0
		);
	}
	inline android::util::JsonWriter JsonWriter::value(java::lang::Number arg0) const
	{
		return callObjectMethod(
			"value",
			"(Ljava/lang/Number;)Landroid/util/JsonWriter;",
			arg0.object()
		);
	}
	inline android::util::JsonWriter JsonWriter::value(JString arg0) const
	{
		return callObjectMethod(
			"value",
			"(Ljava/lang/String;)Landroid/util/JsonWriter;",
			arg0.object<jstring>()
		);
	}
	inline android::util::JsonWriter JsonWriter::value(jlong arg0) const
	{
		return callObjectMethod(
			"value",
			"(J)Landroid/util/JsonWriter;",
			arg0
		);
	}
} // namespace android::util

// Base class headers

