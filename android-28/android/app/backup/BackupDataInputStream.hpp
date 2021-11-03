#pragma once

#include "../../../JObject.hpp"
#include "../../../java/io/InputStream.hpp"

namespace android::app::backup
{
	class BackupDataInput;
}

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
		jstring getKey();
		jint read();
		jint read(jbyteArray arg0);
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jint size();
	};
} // namespace android::app::backup

