#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/io/InputStream.hpp"


namespace android::app::backup
{
	class BackupDataInputStream : public java::io::InputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BackupDataInputStream(const char *className, const char *sig, Ts...agv) : java::io::InputStream(className, sig, std::forward<Ts>(agv)...) {}
		BackupDataInputStream(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getKey();
		jint read();
		jint read(jbyteArray arg0);
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jint size();
	};
} // namespace android::app::backup

