#pragma once

#include "../../../java/io/InputStream.hpp"

class JByteArray;
class JString;

namespace android::app::backup
{
	class BackupDataInputStream : public java::io::InputStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BackupDataInputStream(const char *className, const char *sig, Ts...agv) : java::io::InputStream(className, sig, std::forward<Ts>(agv)...) {}
		BackupDataInputStream(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JString getKey() const;
		jint read() const;
		jint read(JByteArray arg0) const;
		jint read(JByteArray arg0, jint arg1, jint arg2) const;
		jint size() const;
	};
} // namespace android::app::backup

