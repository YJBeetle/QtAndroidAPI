#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class UserHandle;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class PrintWriter;
}

namespace android::os
{
	class Binder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Binder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Binder(QAndroidJniObject obj);
		
		// Constructors
		Binder();
		
		// Methods
		static jlong clearCallingIdentity();
		static void flushPendingCommands();
		static jint getCallingPid();
		static jint getCallingUid();
		static android::os::UserHandle getCallingUserHandle();
		static void joinThreadPool();
		static void restoreCallingIdentity(jlong arg0);
		void attachInterface(JObject arg0, jstring arg1);
		void dump(java::io::FileDescriptor arg0, jarray arg1);
		void dumpAsync(java::io::FileDescriptor arg0, jarray arg1);
		jstring getInterfaceDescriptor();
		jboolean isBinderAlive();
		void linkToDeath(JObject arg0, jint arg1);
		jboolean pingBinder();
		JObject queryLocalInterface(jstring arg0);
		jboolean transact(jint arg0, android::os::Parcel arg1, android::os::Parcel arg2, jint arg3);
		jboolean unlinkToDeath(JObject arg0, jint arg1);
	};
} // namespace android::os

