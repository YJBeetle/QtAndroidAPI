#include "../../java/io/Writer.hpp"
#include "../../java/lang/Number.hpp"
#include "./JsonWriter.hpp"

namespace android::util
{
	// Fields
	
	JsonWriter::JsonWriter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	JsonWriter::JsonWriter(java::io::Writer &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.JsonWriter",
			"(Ljava/io/Writer;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject JsonWriter::beginArray()
	{
		return __thiz.callObjectMethod(
			"beginArray",
			"()Landroid/util/JsonWriter;"
		);
	}
	QAndroidJniObject JsonWriter::beginObject()
	{
		return __thiz.callObjectMethod(
			"beginObject",
			"()Landroid/util/JsonWriter;"
		);
	}
	void JsonWriter::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject JsonWriter::endArray()
	{
		return __thiz.callObjectMethod(
			"endArray",
			"()Landroid/util/JsonWriter;"
		);
	}
	QAndroidJniObject JsonWriter::endObject()
	{
		return __thiz.callObjectMethod(
			"endObject",
			"()Landroid/util/JsonWriter;"
		);
	}
	void JsonWriter::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	jboolean JsonWriter::isLenient()
	{
		return __thiz.callMethod<jboolean>(
			"isLenient",
			"()Z"
		);
	}
	QAndroidJniObject JsonWriter::name(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"name",
			"(Ljava/lang/String;)Landroid/util/JsonWriter;",
			arg0
		);
	}
	QAndroidJniObject JsonWriter::name(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"name",
			"(Ljava/lang/String;)Landroid/util/JsonWriter;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject JsonWriter::nullValue()
	{
		return __thiz.callObjectMethod(
			"nullValue",
			"()Landroid/util/JsonWriter;"
		);
	}
	void JsonWriter::setIndent(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setIndent",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void JsonWriter::setIndent(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setIndent",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void JsonWriter::setLenient(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLenient",
			"(Z)V",
			arg0
		);
	}
	QAndroidJniObject JsonWriter::value(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"value",
			"(Z)Landroid/util/JsonWriter;",
			arg0
		);
	}
	QAndroidJniObject JsonWriter::value(jdouble arg0)
	{
		return __thiz.callObjectMethod(
			"value",
			"(D)Landroid/util/JsonWriter;",
			arg0
		);
	}
	QAndroidJniObject JsonWriter::value(java::lang::Number arg0)
	{
		return __thiz.callObjectMethod(
			"value",
			"(Ljava/lang/Number;)Landroid/util/JsonWriter;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject JsonWriter::value(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"value",
			"(Ljava/lang/String;)Landroid/util/JsonWriter;",
			arg0
		);
	}
	QAndroidJniObject JsonWriter::value(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"value",
			"(Ljava/lang/String;)Landroid/util/JsonWriter;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject JsonWriter::value(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"value",
			"(J)Landroid/util/JsonWriter;",
			arg0
		);
	}
} // namespace android::util

