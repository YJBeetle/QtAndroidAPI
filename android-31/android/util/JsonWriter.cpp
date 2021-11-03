#include "../../java/io/Writer.hpp"
#include "../../java/lang/Number.hpp"
#include "./JsonWriter.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	JsonWriter::JsonWriter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	JsonWriter::JsonWriter(java::io::Writer arg0)
		: JObject(
			"android.util.JsonWriter",
			"(Ljava/io/Writer;)V",
			arg0.object()
		) {}
	
	// Methods
	android::util::JsonWriter JsonWriter::beginArray()
	{
		return callObjectMethod(
			"beginArray",
			"()Landroid/util/JsonWriter;"
		);
	}
	android::util::JsonWriter JsonWriter::beginObject()
	{
		return callObjectMethod(
			"beginObject",
			"()Landroid/util/JsonWriter;"
		);
	}
	void JsonWriter::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::util::JsonWriter JsonWriter::endArray()
	{
		return callObjectMethod(
			"endArray",
			"()Landroid/util/JsonWriter;"
		);
	}
	android::util::JsonWriter JsonWriter::endObject()
	{
		return callObjectMethod(
			"endObject",
			"()Landroid/util/JsonWriter;"
		);
	}
	void JsonWriter::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	jboolean JsonWriter::isLenient()
	{
		return callMethod<jboolean>(
			"isLenient",
			"()Z"
		);
	}
	android::util::JsonWriter JsonWriter::name(jstring arg0)
	{
		return callObjectMethod(
			"name",
			"(Ljava/lang/String;)Landroid/util/JsonWriter;",
			arg0
		);
	}
	android::util::JsonWriter JsonWriter::nullValue()
	{
		return callObjectMethod(
			"nullValue",
			"()Landroid/util/JsonWriter;"
		);
	}
	void JsonWriter::setIndent(jstring arg0)
	{
		callMethod<void>(
			"setIndent",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void JsonWriter::setLenient(jboolean arg0)
	{
		callMethod<void>(
			"setLenient",
			"(Z)V",
			arg0
		);
	}
	android::util::JsonWriter JsonWriter::value(jboolean arg0)
	{
		return callObjectMethod(
			"value",
			"(Z)Landroid/util/JsonWriter;",
			arg0
		);
	}
	android::util::JsonWriter JsonWriter::value(jdouble arg0)
	{
		return callObjectMethod(
			"value",
			"(D)Landroid/util/JsonWriter;",
			arg0
		);
	}
	android::util::JsonWriter JsonWriter::value(java::lang::Number arg0)
	{
		return callObjectMethod(
			"value",
			"(Ljava/lang/Number;)Landroid/util/JsonWriter;",
			arg0.object()
		);
	}
	android::util::JsonWriter JsonWriter::value(jstring arg0)
	{
		return callObjectMethod(
			"value",
			"(Ljava/lang/String;)Landroid/util/JsonWriter;",
			arg0
		);
	}
	android::util::JsonWriter JsonWriter::value(jlong arg0)
	{
		return callObjectMethod(
			"value",
			"(J)Landroid/util/JsonWriter;",
			arg0
		);
	}
} // namespace android::util

