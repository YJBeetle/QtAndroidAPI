#include "../../../java/io/OutputStream.hpp"
#include "./ProtoOutputStream.hpp"

namespace android::util::proto
{
	// Fields
	jlong ProtoOutputStream::FIELD_COUNT_MASK()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_COUNT_MASK"
		);
	}
	jlong ProtoOutputStream::FIELD_COUNT_PACKED()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_COUNT_PACKED"
		);
	}
	jlong ProtoOutputStream::FIELD_COUNT_REPEATED()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_COUNT_REPEATED"
		);
	}
	jint ProtoOutputStream::FIELD_COUNT_SHIFT()
	{
		return getStaticField<jint>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_COUNT_SHIFT"
		);
	}
	jlong ProtoOutputStream::FIELD_COUNT_SINGLE()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_COUNT_SINGLE"
		);
	}
	jlong ProtoOutputStream::FIELD_COUNT_UNKNOWN()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_COUNT_UNKNOWN"
		);
	}
	jint ProtoOutputStream::FIELD_ID_SHIFT()
	{
		return getStaticField<jint>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_ID_SHIFT"
		);
	}
	jlong ProtoOutputStream::FIELD_TYPE_BOOL()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_BOOL"
		);
	}
	jlong ProtoOutputStream::FIELD_TYPE_BYTES()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_BYTES"
		);
	}
	jlong ProtoOutputStream::FIELD_TYPE_DOUBLE()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_DOUBLE"
		);
	}
	jlong ProtoOutputStream::FIELD_TYPE_ENUM()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_ENUM"
		);
	}
	jlong ProtoOutputStream::FIELD_TYPE_FIXED32()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_FIXED32"
		);
	}
	jlong ProtoOutputStream::FIELD_TYPE_FIXED64()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_FIXED64"
		);
	}
	jlong ProtoOutputStream::FIELD_TYPE_FLOAT()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_FLOAT"
		);
	}
	jlong ProtoOutputStream::FIELD_TYPE_INT32()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_INT32"
		);
	}
	jlong ProtoOutputStream::FIELD_TYPE_INT64()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_INT64"
		);
	}
	jlong ProtoOutputStream::FIELD_TYPE_MASK()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_MASK"
		);
	}
	jlong ProtoOutputStream::FIELD_TYPE_MESSAGE()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_MESSAGE"
		);
	}
	jlong ProtoOutputStream::FIELD_TYPE_SFIXED32()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_SFIXED32"
		);
	}
	jlong ProtoOutputStream::FIELD_TYPE_SFIXED64()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_SFIXED64"
		);
	}
	jint ProtoOutputStream::FIELD_TYPE_SHIFT()
	{
		return getStaticField<jint>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_SHIFT"
		);
	}
	jlong ProtoOutputStream::FIELD_TYPE_SINT32()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_SINT32"
		);
	}
	jlong ProtoOutputStream::FIELD_TYPE_SINT64()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_SINT64"
		);
	}
	jlong ProtoOutputStream::FIELD_TYPE_STRING()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_STRING"
		);
	}
	jlong ProtoOutputStream::FIELD_TYPE_UINT32()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_UINT32"
		);
	}
	jlong ProtoOutputStream::FIELD_TYPE_UINT64()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_UINT64"
		);
	}
	jint ProtoOutputStream::WIRE_TYPE_END_GROUP()
	{
		return getStaticField<jint>(
			"android.util.proto.ProtoOutputStream",
			"WIRE_TYPE_END_GROUP"
		);
	}
	jint ProtoOutputStream::WIRE_TYPE_FIXED32()
	{
		return getStaticField<jint>(
			"android.util.proto.ProtoOutputStream",
			"WIRE_TYPE_FIXED32"
		);
	}
	jint ProtoOutputStream::WIRE_TYPE_FIXED64()
	{
		return getStaticField<jint>(
			"android.util.proto.ProtoOutputStream",
			"WIRE_TYPE_FIXED64"
		);
	}
	jint ProtoOutputStream::WIRE_TYPE_LENGTH_DELIMITED()
	{
		return getStaticField<jint>(
			"android.util.proto.ProtoOutputStream",
			"WIRE_TYPE_LENGTH_DELIMITED"
		);
	}
	jint ProtoOutputStream::WIRE_TYPE_MASK()
	{
		return getStaticField<jint>(
			"android.util.proto.ProtoOutputStream",
			"WIRE_TYPE_MASK"
		);
	}
	jint ProtoOutputStream::WIRE_TYPE_START_GROUP()
	{
		return getStaticField<jint>(
			"android.util.proto.ProtoOutputStream",
			"WIRE_TYPE_START_GROUP"
		);
	}
	jint ProtoOutputStream::WIRE_TYPE_VARINT()
	{
		return getStaticField<jint>(
			"android.util.proto.ProtoOutputStream",
			"WIRE_TYPE_VARINT"
		);
	}
	
	// QJniObject forward
	ProtoOutputStream::ProtoOutputStream(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ProtoOutputStream::ProtoOutputStream()
		: __JniBaseClass(
			"android.util.proto.ProtoOutputStream",
			"()V"
		) {}
	ProtoOutputStream::ProtoOutputStream(jint arg0)
		: __JniBaseClass(
			"android.util.proto.ProtoOutputStream",
			"(I)V",
			arg0
		) {}
	ProtoOutputStream::ProtoOutputStream(java::io::OutputStream arg0)
		: __JniBaseClass(
			"android.util.proto.ProtoOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	
	// Methods
	jint ProtoOutputStream::checkFieldId(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jint>(
			"android.util.proto.ProtoOutputStream",
			"checkFieldId",
			"(JJ)I",
			arg0,
			arg1
		);
	}
	jstring ProtoOutputStream::getFieldCountString(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.util.proto.ProtoOutputStream",
			"getFieldCountString",
			"(J)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ProtoOutputStream::getFieldIdString(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.util.proto.ProtoOutputStream",
			"getFieldIdString",
			"(J)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ProtoOutputStream::getFieldTypeString(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.util.proto.ProtoOutputStream",
			"getFieldTypeString",
			"(J)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ProtoOutputStream::getWireTypeString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.util.proto.ProtoOutputStream",
			"getWireTypeString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jlong ProtoOutputStream::makeFieldId(jint arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"android.util.proto.ProtoOutputStream",
			"makeFieldId",
			"(IJ)J",
			arg0,
			arg1
		);
	}
	jlong ProtoOutputStream::makeToken(jint arg0, jboolean arg1, jint arg2, jint arg3, jint arg4)
	{
		return callStaticMethod<jlong>(
			"android.util.proto.ProtoOutputStream",
			"makeToken",
			"(IZIII)J",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jstring ProtoOutputStream::token2String(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.util.proto.ProtoOutputStream",
			"token2String",
			"(J)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void ProtoOutputStream::dump(jstring arg0)
	{
		callMethod<void>(
			"dump",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ProtoOutputStream::end(jlong arg0)
	{
		callMethod<void>(
			"end",
			"(J)V",
			arg0
		);
	}
	void ProtoOutputStream::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	jbyteArray ProtoOutputStream::getBytes()
	{
		return callObjectMethod(
			"getBytes",
			"()[B"
		).object<jbyteArray>();
	}
	jint ProtoOutputStream::getRawSize()
	{
		return callMethod<jint>(
			"getRawSize",
			"()I"
		);
	}
	jlong ProtoOutputStream::start(jlong arg0)
	{
		return callMethod<jlong>(
			"start",
			"(J)J",
			arg0
		);
	}
	void ProtoOutputStream::write(jlong arg0, jbyteArray arg1)
	{
		callMethod<void>(
			"write",
			"(J[B)V",
			arg0,
			arg1
		);
	}
	void ProtoOutputStream::write(jlong arg0, jboolean arg1)
	{
		callMethod<void>(
			"write",
			"(JZ)V",
			arg0,
			arg1
		);
	}
	void ProtoOutputStream::write(jlong arg0, jdouble arg1)
	{
		callMethod<void>(
			"write",
			"(JD)V",
			arg0,
			arg1
		);
	}
	void ProtoOutputStream::write(jlong arg0, jfloat arg1)
	{
		callMethod<void>(
			"write",
			"(JF)V",
			arg0,
			arg1
		);
	}
	void ProtoOutputStream::write(jlong arg0, jint arg1)
	{
		callMethod<void>(
			"write",
			"(JI)V",
			arg0,
			arg1
		);
	}
	void ProtoOutputStream::write(jlong arg0, jstring arg1)
	{
		callMethod<void>(
			"write",
			"(JLjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void ProtoOutputStream::write(jlong arg0, jlong arg1)
	{
		callMethod<void>(
			"write",
			"(JJ)V",
			arg0,
			arg1
		);
	}
	void ProtoOutputStream::writeTag(jint arg0, jint arg1)
	{
		callMethod<void>(
			"writeTag",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::util::proto

