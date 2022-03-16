#pragma once

#include "../../../java/io/InputStream.def.hpp"

class JByteArray;
class JString;

namespace android::app::backup
{
	class BackupDataInputStream : public java::io::InputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BackupDataInputStream(const char *className, const char *sig, Ts...agv) : java::io::InputStream(className, sig, std::forward<Ts>(agv)...) {}
		BackupDataInputStream(QJniObject obj) : java::io::InputStream(obj) {}
		
		// Constructors
		
		// Methods
		JString getKey() const;
		jint read() const;
		jint read(JByteArray arg0) const;
		jint read(JByteArray arg0, jint arg1, jint arg2) const;
		jint size() const;
	};
} // namespace android::app::backup

