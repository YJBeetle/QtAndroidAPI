#include "../../java/io/Writer.hpp"
#include "../../java/lang/Number.hpp"
#include "../../JString.hpp"
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
	android::util::JsonWriter JsonWriter::beginArray() const
	{
		return callObjectMethod(
			"beginArray",
			"()Landroid/util/JsonWriter;"
		);
	}
	android::util::JsonWriter JsonWriter::beginObject() const
	{
		return callObjectMethod(
			"beginObject",
			"()Landroid/util/JsonWriter;"
		);
	}
	void JsonWriter::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::util::JsonWriter JsonWriter::endArray() const
	{
		return callObjectMethod(
			"endArray",
			"()Landroid/util/JsonWriter;"
		);
	}
	android::util::JsonWriter JsonWriter::endObject() const
	{
		return callObjectMethod(
			"endObject",
			"()Landroid/util/JsonWriter;"
		);
	}
	void JsonWriter::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	jboolean JsonWriter::isLenient() const
	{
		return callMethod<jboolean>(
			"isLenient",
			"()Z"
		);
	}
	android::util::JsonWriter JsonWriter::name(JString arg0) const
	{
		return callObjectMethod(
			"name",
			"(Ljava/lang/String;)Landroid/util/JsonWriter;",
			arg0.object<jstring>()
		);
	}
	android::util::JsonWriter JsonWriter::nullValue() const
	{
		return callObjectMethod(
			"nullValue",
			"()Landroid/util/JsonWriter;"
		);
	}
	void JsonWriter::setIndent(JString arg0) const
	{
		callMethod<void>(
			"setIndent",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void JsonWriter::setLenient(jboolean arg0) const
	{
		callMethod<void>(
			"setLenient",
			"(Z)V",
			arg0
		);
	}
	android::util::JsonWriter JsonWriter::value(jboolean arg0) const
	{
		return callObjectMethod(
			"value",
			"(Z)Landroid/util/JsonWriter;",
			arg0
		);
	}
	android::util::JsonWriter JsonWriter::value(jdouble arg0) const
	{
		return callObjectMethod(
			"value",
			"(D)Landroid/util/JsonWriter;",
			arg0
		);
	}
	android::util::JsonWriter JsonWriter::value(java::lang::Number arg0) const
	{
		return callObjectMethod(
			"value",
			"(Ljava/lang/Number;)Landroid/util/JsonWriter;",
			arg0.object()
		);
	}
	android::util::JsonWriter JsonWriter::value(JString arg0) const
	{
		return callObjectMethod(
			"value",
			"(Ljava/lang/String;)Landroid/util/JsonWriter;",
			arg0.object<jstring>()
		);
	}
	android::util::JsonWriter JsonWriter::value(jlong arg0) const
	{
		return callObjectMethod(
			"value",
			"(J)Landroid/util/JsonWriter;",
			arg0
		);
	}
} // namespace android::util

