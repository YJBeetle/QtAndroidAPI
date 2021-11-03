#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JLongArray;
class JArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JObject;
class JString;
namespace java::nio
{
	class ByteBuffer;
}
namespace java::nio
{
	class LongBuffer;
}

namespace java::util
{
	class BitSet : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BitSet(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BitSet(QAndroidJniObject obj);
		
		// Constructors
		BitSet();
		BitSet(jint arg0);
		
		// Methods
		static java::util::BitSet valueOf(JByteArray arg0);
		static java::util::BitSet valueOf(JLongArray arg0);
		static java::util::BitSet valueOf(java::nio::ByteBuffer arg0);
		static java::util::BitSet valueOf(java::nio::LongBuffer arg0);
		void _and(java::util::BitSet arg0) const;
		void andNot(java::util::BitSet arg0) const;
		jint cardinality() const;
		void clear() const;
		void clear(jint arg0) const;
		void clear(jint arg0, jint arg1) const;
		JObject clone() const;
		jboolean equals(JObject arg0) const;
		void flip(jint arg0) const;
		void flip(jint arg0, jint arg1) const;
		jboolean get(jint arg0) const;
		java::util::BitSet get(jint arg0, jint arg1) const;
		jint hashCode() const;
		jboolean intersects(java::util::BitSet arg0) const;
		jboolean isEmpty() const;
		jint length() const;
		jint nextClearBit(jint arg0) const;
		jint nextSetBit(jint arg0) const;
		void _or(java::util::BitSet arg0) const;
		jint previousClearBit(jint arg0) const;
		jint previousSetBit(jint arg0) const;
		void set(jint arg0) const;
		void set(jint arg0, jboolean arg1) const;
		void set(jint arg0, jint arg1) const;
		void set(jint arg0, jint arg1, jboolean arg2) const;
		jint size() const;
		JObject stream() const;
		JByteArray toByteArray() const;
		JLongArray toLongArray() const;
		JString toString() const;
		void _xor(java::util::BitSet arg0) const;
	};
} // namespace java::util

