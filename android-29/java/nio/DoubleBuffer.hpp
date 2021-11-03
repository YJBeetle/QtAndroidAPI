#pragma once

#include "./Buffer.hpp"

class JDoubleArray;
class JObject;
class JString;
namespace java::nio
{
	class Buffer;
}
namespace java::nio
{
	class ByteOrder;
}

namespace java::nio
{
	class DoubleBuffer : public java::nio::Buffer
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DoubleBuffer(const char *className, const char *sig, Ts...agv) : java::nio::Buffer(className, sig, std::forward<Ts>(agv)...) {}
		DoubleBuffer(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::DoubleBuffer allocate(jint arg0);
		static java::nio::DoubleBuffer wrap(JDoubleArray arg0);
		static java::nio::DoubleBuffer wrap(JDoubleArray arg0, jint arg1, jint arg2);
		JDoubleArray array() const;
		jint arrayOffset() const;
		java::nio::DoubleBuffer asReadOnlyBuffer() const;
		java::nio::DoubleBuffer clear() const;
		java::nio::DoubleBuffer compact() const;
		jint compareTo(JObject arg0) const;
		jint compareTo(java::nio::DoubleBuffer arg0) const;
		java::nio::DoubleBuffer duplicate() const;
		jboolean equals(JObject arg0) const;
		java::nio::DoubleBuffer flip() const;
		jdouble get() const;
		jdouble get(jint arg0) const;
		java::nio::DoubleBuffer get(JDoubleArray arg0) const;
		java::nio::DoubleBuffer get(jint arg0, JDoubleArray arg1) const;
		java::nio::DoubleBuffer get(JDoubleArray arg0, jint arg1, jint arg2) const;
		java::nio::DoubleBuffer get(jint arg0, JDoubleArray arg1, jint arg2, jint arg3) const;
		jboolean hasArray() const;
		jint hashCode() const;
		jboolean isDirect() const;
		java::nio::DoubleBuffer limit(jint arg0) const;
		java::nio::DoubleBuffer mark() const;
		jint mismatch(java::nio::DoubleBuffer arg0) const;
		java::nio::ByteOrder order() const;
		java::nio::DoubleBuffer position(jint arg0) const;
		java::nio::DoubleBuffer put(JDoubleArray arg0) const;
		java::nio::DoubleBuffer put(jdouble arg0) const;
		java::nio::DoubleBuffer put(java::nio::DoubleBuffer arg0) const;
		java::nio::DoubleBuffer put(jint arg0, JDoubleArray arg1) const;
		java::nio::DoubleBuffer put(jint arg0, jdouble arg1) const;
		java::nio::DoubleBuffer put(JDoubleArray arg0, jint arg1, jint arg2) const;
		java::nio::DoubleBuffer put(jint arg0, JDoubleArray arg1, jint arg2, jint arg3) const;
		java::nio::DoubleBuffer put(jint arg0, java::nio::DoubleBuffer arg1, jint arg2, jint arg3) const;
		java::nio::DoubleBuffer reset() const;
		java::nio::DoubleBuffer rewind() const;
		java::nio::DoubleBuffer slice() const;
		java::nio::DoubleBuffer slice(jint arg0, jint arg1) const;
		JString toString() const;
	};
} // namespace java::nio

