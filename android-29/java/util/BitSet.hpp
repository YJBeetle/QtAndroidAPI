#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
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
		
		// QJniObject forward
		template<typename ...Ts> explicit BitSet(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BitSet(QJniObject obj);
		
		// Constructors
		BitSet();
		BitSet(jint arg0);
		
		// Methods
		static java::util::BitSet valueOf(jbyteArray arg0);
		static java::util::BitSet valueOf(jlongArray arg0);
		static java::util::BitSet valueOf(java::nio::ByteBuffer arg0);
		static java::util::BitSet valueOf(java::nio::LongBuffer arg0);
		void _and(java::util::BitSet arg0);
		void andNot(java::util::BitSet arg0);
		jint cardinality();
		void clear();
		void clear(jint arg0);
		void clear(jint arg0, jint arg1);
		jobject clone();
		jboolean equals(jobject arg0);
		void flip(jint arg0);
		void flip(jint arg0, jint arg1);
		jboolean get(jint arg0);
		java::util::BitSet get(jint arg0, jint arg1);
		jint hashCode();
		jboolean intersects(java::util::BitSet arg0);
		jboolean isEmpty();
		jint length();
		jint nextClearBit(jint arg0);
		jint nextSetBit(jint arg0);
		void _or(java::util::BitSet arg0);
		jint previousClearBit(jint arg0);
		jint previousSetBit(jint arg0);
		void set(jint arg0);
		void set(jint arg0, jboolean arg1);
		void set(jint arg0, jint arg1);
		void set(jint arg0, jint arg1, jboolean arg2);
		jint size();
		JObject stream();
		jbyteArray toByteArray();
		jlongArray toLongArray();
		jstring toString();
		void _xor(java::util::BitSet arg0);
	};
} // namespace java::util

