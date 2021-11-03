#pragma once

#include "../../../JObject.hpp"

class JArray;
class JArray;
class JObject;
namespace java::nio
{
	class ByteBuffer;
}
namespace java::nio::channels
{
	class FileLock;
}

namespace java::nio::channels
{
	class AsynchronousFileChannel : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AsynchronousFileChannel(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AsynchronousFileChannel(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::channels::AsynchronousFileChannel open(JObject arg0, JArray arg1);
		static java::nio::channels::AsynchronousFileChannel open(JObject arg0, JObject arg1, JObject arg2, JArray arg3);
		void force(jboolean arg0);
		JObject lock();
		JObject lock(jlong arg0, jlong arg1, jboolean arg2);
		void lock(JObject arg0, JObject arg1);
		void lock(jlong arg0, jlong arg1, jboolean arg2, JObject arg3, JObject arg4);
		JObject read(java::nio::ByteBuffer arg0, jlong arg1);
		void read(java::nio::ByteBuffer arg0, jlong arg1, JObject arg2, JObject arg3);
		jlong size();
		java::nio::channels::AsynchronousFileChannel truncate(jlong arg0);
		java::nio::channels::FileLock tryLock();
		java::nio::channels::FileLock tryLock(jlong arg0, jlong arg1, jboolean arg2);
		JObject write(java::nio::ByteBuffer arg0, jlong arg1);
		void write(java::nio::ByteBuffer arg0, jlong arg1, JObject arg2, JObject arg3);
	};
} // namespace java::nio::channels

