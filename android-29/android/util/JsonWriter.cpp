#include "../../java/io/Writer.hpp"
#include "../../java/lang/Number.hpp"
#include "./JsonWriter.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	JsonWriter::JsonWriter(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	JsonWriter::JsonWriter(java::io::Writer arg0)
		: __JniBaseClass(
			"android.util.JsonWriter",
			"(Ljava/io/Writer;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject JsonWriter::beginArray()
	{
		return callObjectMethod(
			"beginArray",
			"()Landroid/util/JsonWriter;"
		);
	}
	QAndroidJniObject JsonWriter::beginObject()
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
	QAndroidJniObject JsonWriter::endArray()
	{
		return callObjectMethod(
			"endArray",
			"()Landroid/util/JsonWriter;"
		);
	}
	QAndroidJniObject JsonWriter::endObject()
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
	QAndroidJniObject JsonWriter::name(jstring arg0)
	{
		return callObjectMethod(
			"name",
			"(Ljava/lang/String;)Landroid/util/JsonWriter;",
			arg0
		);
	}
	QAndroidJniObject JsonWriter::nullValue()
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
	QAndroidJniObject JsonWriter::value(jboolean arg0)
	{
		return callObjectMethod(
			"value",
			"(Z)Landroid/util/JsonWriter;",
			arg0
		);
	}
	QAndroidJniObject JsonWriter::value(jdouble arg0)
	{
		return callObjectMethod(
			"value",
			"(D)Landroid/util/JsonWriter;",
			arg0
		);
	}
	QAndroidJniObject JsonWriter::value(java::lang::Number arg0)
	{
		return callObjectMethod(
			"value",
			"(Ljava/lang/Number;)Landroid/util/JsonWriter;",
			arg0.object()
		);
	}
	QAndroidJniObject JsonWriter::value(jstring arg0)
	{
		return callObjectMethod(
			"value",
			"(Ljava/lang/String;)Landroid/util/JsonWriter;",
			arg0
		);
	}
	QAndroidJniObject JsonWriter::value(jlong arg0)
	{
		return callObjectMethod(
			"value",
			"(J)Landroid/util/JsonWriter;",
			arg0
		);
	}
} // namespace android::util

