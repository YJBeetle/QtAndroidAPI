#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace java::io
{
	class OutputStream;
}
class JString;

namespace android::util::proto
{
	class ProtoOutputStream : public JObject
	{
	public:
		// Fields
		static jlong FIELD_COUNT_MASK();
		static jlong FIELD_COUNT_PACKED();
		static jlong FIELD_COUNT_REPEATED();
		static jint FIELD_COUNT_SHIFT();
		static jlong FIELD_COUNT_SINGLE();
		static jlong FIELD_COUNT_UNKNOWN();
		static jint FIELD_ID_SHIFT();
		static jlong FIELD_TYPE_BOOL();
		static jlong FIELD_TYPE_BYTES();
		static jlong FIELD_TYPE_DOUBLE();
		static jlong FIELD_TYPE_ENUM();
		static jlong FIELD_TYPE_FIXED32();
		static jlong FIELD_TYPE_FIXED64();
		static jlong FIELD_TYPE_FLOAT();
		static jlong FIELD_TYPE_INT32();
		static jlong FIELD_TYPE_INT64();
		static jlong FIELD_TYPE_MASK();
		static jlong FIELD_TYPE_MESSAGE();
		static jlong FIELD_TYPE_SFIXED32();
		static jlong FIELD_TYPE_SFIXED64();
		static jint FIELD_TYPE_SHIFT();
		static jlong FIELD_TYPE_SINT32();
		static jlong FIELD_TYPE_SINT64();
		static jlong FIELD_TYPE_STRING();
		static jlong FIELD_TYPE_UINT32();
		static jlong FIELD_TYPE_UINT64();
		static jint WIRE_TYPE_END_GROUP();
		static jint WIRE_TYPE_FIXED32();
		static jint WIRE_TYPE_FIXED64();
		static jint WIRE_TYPE_LENGTH_DELIMITED();
		static jint WIRE_TYPE_MASK();
		static jint WIRE_TYPE_START_GROUP();
		static jint WIRE_TYPE_VARINT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ProtoOutputStream(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ProtoOutputStream(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ProtoOutputStream();
		ProtoOutputStream(jint arg0);
		ProtoOutputStream(java::io::OutputStream arg0);
		
		// Methods
		static jint checkFieldId(jlong arg0, jlong arg1);
		static JString getFieldCountString(jlong arg0);
		static JString getFieldIdString(jlong arg0);
		static JString getFieldTypeString(jlong arg0);
		static JString getWireTypeString(jint arg0);
		static jlong makeFieldId(jint arg0, jlong arg1);
		static jlong makeToken(jint arg0, jboolean arg1, jint arg2, jint arg3, jint arg4);
		static JString token2String(jlong arg0);
		void dump(JString arg0) const;
		void end(jlong arg0) const;
		void flush() const;
		JByteArray getBytes() const;
		jint getRawSize() const;
		jlong start(jlong arg0) const;
		void write(jlong arg0, JByteArray arg1) const;
		void write(jlong arg0, jboolean arg1) const;
		void write(jlong arg0, jdouble arg1) const;
		void write(jlong arg0, jfloat arg1) const;
		void write(jlong arg0, jint arg1) const;
		void write(jlong arg0, JString arg1) const;
		void write(jlong arg0, jlong arg1) const;
		void writeTag(jint arg0, jint arg1) const;
	};
} // namespace android::util::proto

