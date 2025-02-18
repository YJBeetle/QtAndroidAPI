#pragma once

#include "../../../JByteArray.hpp"
#include "../../../java/io/OutputStream.def.hpp"
#include "../../../JString.hpp"
#include "./ProtoOutputStream.def.hpp"

namespace android::util::proto
{
	// Fields
	inline jlong ProtoOutputStream::FIELD_COUNT_MASK()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_COUNT_MASK"
		);
	}
	inline jlong ProtoOutputStream::FIELD_COUNT_PACKED()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_COUNT_PACKED"
		);
	}
	inline jlong ProtoOutputStream::FIELD_COUNT_REPEATED()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_COUNT_REPEATED"
		);
	}
	inline jint ProtoOutputStream::FIELD_COUNT_SHIFT()
	{
		return getStaticField<jint>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_COUNT_SHIFT"
		);
	}
	inline jlong ProtoOutputStream::FIELD_COUNT_SINGLE()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_COUNT_SINGLE"
		);
	}
	inline jlong ProtoOutputStream::FIELD_COUNT_UNKNOWN()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_COUNT_UNKNOWN"
		);
	}
	inline jint ProtoOutputStream::FIELD_ID_SHIFT()
	{
		return getStaticField<jint>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_ID_SHIFT"
		);
	}
	inline jlong ProtoOutputStream::FIELD_TYPE_BOOL()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_BOOL"
		);
	}
	inline jlong ProtoOutputStream::FIELD_TYPE_BYTES()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_BYTES"
		);
	}
	inline jlong ProtoOutputStream::FIELD_TYPE_DOUBLE()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_DOUBLE"
		);
	}
	inline jlong ProtoOutputStream::FIELD_TYPE_ENUM()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_ENUM"
		);
	}
	inline jlong ProtoOutputStream::FIELD_TYPE_FIXED32()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_FIXED32"
		);
	}
	inline jlong ProtoOutputStream::FIELD_TYPE_FIXED64()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_FIXED64"
		);
	}
	inline jlong ProtoOutputStream::FIELD_TYPE_FLOAT()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_FLOAT"
		);
	}
	inline jlong ProtoOutputStream::FIELD_TYPE_INT32()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_INT32"
		);
	}
	inline jlong ProtoOutputStream::FIELD_TYPE_INT64()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_INT64"
		);
	}
	inline jlong ProtoOutputStream::FIELD_TYPE_MASK()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_MASK"
		);
	}
	inline jlong ProtoOutputStream::FIELD_TYPE_MESSAGE()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_MESSAGE"
		);
	}
	inline jlong ProtoOutputStream::FIELD_TYPE_SFIXED32()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_SFIXED32"
		);
	}
	inline jlong ProtoOutputStream::FIELD_TYPE_SFIXED64()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_SFIXED64"
		);
	}
	inline jint ProtoOutputStream::FIELD_TYPE_SHIFT()
	{
		return getStaticField<jint>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_SHIFT"
		);
	}
	inline jlong ProtoOutputStream::FIELD_TYPE_SINT32()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_SINT32"
		);
	}
	inline jlong ProtoOutputStream::FIELD_TYPE_SINT64()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_SINT64"
		);
	}
	inline jlong ProtoOutputStream::FIELD_TYPE_STRING()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_STRING"
		);
	}
	inline jlong ProtoOutputStream::FIELD_TYPE_UINT32()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_UINT32"
		);
	}
	inline jlong ProtoOutputStream::FIELD_TYPE_UINT64()
	{
		return getStaticField<jlong>(
			"android.util.proto.ProtoOutputStream",
			"FIELD_TYPE_UINT64"
		);
	}
	inline jint ProtoOutputStream::WIRE_TYPE_END_GROUP()
	{
		return getStaticField<jint>(
			"android.util.proto.ProtoOutputStream",
			"WIRE_TYPE_END_GROUP"
		);
	}
	inline jint ProtoOutputStream::WIRE_TYPE_FIXED32()
	{
		return getStaticField<jint>(
			"android.util.proto.ProtoOutputStream",
			"WIRE_TYPE_FIXED32"
		);
	}
	inline jint ProtoOutputStream::WIRE_TYPE_FIXED64()
	{
		return getStaticField<jint>(
			"android.util.proto.ProtoOutputStream",
			"WIRE_TYPE_FIXED64"
		);
	}
	inline jint ProtoOutputStream::WIRE_TYPE_LENGTH_DELIMITED()
	{
		return getStaticField<jint>(
			"android.util.proto.ProtoOutputStream",
			"WIRE_TYPE_LENGTH_DELIMITED"
		);
	}
	inline jint ProtoOutputStream::WIRE_TYPE_MASK()
	{
		return getStaticField<jint>(
			"android.util.proto.ProtoOutputStream",
			"WIRE_TYPE_MASK"
		);
	}
	inline jint ProtoOutputStream::WIRE_TYPE_START_GROUP()
	{
		return getStaticField<jint>(
			"android.util.proto.ProtoOutputStream",
			"WIRE_TYPE_START_GROUP"
		);
	}
	inline jint ProtoOutputStream::WIRE_TYPE_VARINT()
	{
		return getStaticField<jint>(
			"android.util.proto.ProtoOutputStream",
			"WIRE_TYPE_VARINT"
		);
	}
	
	// Constructors
	inline ProtoOutputStream::ProtoOutputStream()
		: JObject(
			"android.util.proto.ProtoOutputStream",
			"()V"
		) {}
	inline ProtoOutputStream::ProtoOutputStream(jint arg0)
		: JObject(
			"android.util.proto.ProtoOutputStream",
			"(I)V",
			arg0
		) {}
	inline ProtoOutputStream::ProtoOutputStream(java::io::OutputStream arg0)
		: JObject(
			"android.util.proto.ProtoOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint ProtoOutputStream::checkFieldId(jlong arg0, jlong arg1)
	{
		return callStaticMethod<jint>(
			"android.util.proto.ProtoOutputStream",
			"checkFieldId",
			"(JJ)I",
			arg0,
			arg1
		);
	}
	inline JString ProtoOutputStream::getFieldCountString(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.util.proto.ProtoOutputStream",
			"getFieldCountString",
			"(J)Ljava/lang/String;",
			arg0
		);
	}
	inline JString ProtoOutputStream::getFieldIdString(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.util.proto.ProtoOutputStream",
			"getFieldIdString",
			"(J)Ljava/lang/String;",
			arg0
		);
	}
	inline JString ProtoOutputStream::getFieldTypeString(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.util.proto.ProtoOutputStream",
			"getFieldTypeString",
			"(J)Ljava/lang/String;",
			arg0
		);
	}
	inline JString ProtoOutputStream::getWireTypeString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.util.proto.ProtoOutputStream",
			"getWireTypeString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jlong ProtoOutputStream::makeFieldId(jint arg0, jlong arg1)
	{
		return callStaticMethod<jlong>(
			"android.util.proto.ProtoOutputStream",
			"makeFieldId",
			"(IJ)J",
			arg0,
			arg1
		);
	}
	inline jlong ProtoOutputStream::makeToken(jint arg0, jboolean arg1, jint arg2, jint arg3, jint arg4)
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
	inline JString ProtoOutputStream::token2String(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.util.proto.ProtoOutputStream",
			"token2String",
			"(J)Ljava/lang/String;",
			arg0
		);
	}
	inline void ProtoOutputStream::dump(JString arg0) const
	{
		callMethod<void>(
			"dump",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void ProtoOutputStream::end(jlong arg0) const
	{
		callMethod<void>(
			"end",
			"(J)V",
			arg0
		);
	}
	inline void ProtoOutputStream::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline JByteArray ProtoOutputStream::getBytes() const
	{
		return callObjectMethod(
			"getBytes",
			"()[B"
		);
	}
	inline jint ProtoOutputStream::getRawSize() const
	{
		return callMethod<jint>(
			"getRawSize",
			"()I"
		);
	}
	inline jlong ProtoOutputStream::start(jlong arg0) const
	{
		return callMethod<jlong>(
			"start",
			"(J)J",
			arg0
		);
	}
	inline void ProtoOutputStream::write(jlong arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"write",
			"(J[B)V",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	inline void ProtoOutputStream::write(jlong arg0, jboolean arg1) const
	{
		callMethod<void>(
			"write",
			"(JZ)V",
			arg0,
			arg1
		);
	}
	inline void ProtoOutputStream::write(jlong arg0, jdouble arg1) const
	{
		callMethod<void>(
			"write",
			"(JD)V",
			arg0,
			arg1
		);
	}
	inline void ProtoOutputStream::write(jlong arg0, jfloat arg1) const
	{
		callMethod<void>(
			"write",
			"(JF)V",
			arg0,
			arg1
		);
	}
	inline void ProtoOutputStream::write(jlong arg0, jint arg1) const
	{
		callMethod<void>(
			"write",
			"(JI)V",
			arg0,
			arg1
		);
	}
	inline void ProtoOutputStream::write(jlong arg0, JString arg1) const
	{
		callMethod<void>(
			"write",
			"(JLjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline void ProtoOutputStream::write(jlong arg0, jlong arg1) const
	{
		callMethod<void>(
			"write",
			"(JJ)V",
			arg0,
			arg1
		);
	}
	inline void ProtoOutputStream::writeTag(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"writeTag",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::util::proto

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util::proto;
#endif
