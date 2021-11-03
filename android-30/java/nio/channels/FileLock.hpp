#pragma once

#include "../../../JObject.hpp"

class JString;
namespace java::nio::channels
{
	class AsynchronousFileChannel;
}
namespace java::nio::channels
{
	class FileChannel;
}

namespace java::nio::channels
{
	class FileLock : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileLock(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FileLock(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject acquiredBy() const;
		java::nio::channels::FileChannel channel() const;
		void close() const;
		jboolean isShared() const;
		jboolean isValid() const;
		jboolean overlaps(jlong arg0, jlong arg1) const;
		jlong position() const;
		void release() const;
		jlong size() const;
		JString toString() const;
	};
} // namespace java::nio::channels

