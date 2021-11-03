#pragma once

#include "../../JObject.hpp"

class JArray;
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
class JString;

namespace android::os
{
	class Binder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Binder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Binder(QJniObject obj);
		
		// Constructors
		Binder();
		Binder(JString arg0);
		
		// Methods
		static jlong clearCallingIdentity();
		static jlong clearCallingWorkSource();
		static void flushPendingCommands();
		static jint getCallingPid();
		static jint getCallingUid();
		static jint getCallingUidOrThrow();
		static android::os::UserHandle getCallingUserHandle();
		static jint getCallingWorkSourceUid();
		static void joinThreadPool();
		static void restoreCallingIdentity(jlong arg0);
		static void restoreCallingWorkSource(jlong arg0);
		static jlong setCallingWorkSourceUid(jint arg0);
		void attachInterface(JObject arg0, JString arg1);
		void dump(java::io::FileDescriptor arg0, JArray arg1);
		void dumpAsync(java::io::FileDescriptor arg0, JArray arg1);
		JString getInterfaceDescriptor();
		jboolean isBinderAlive();
		void linkToDeath(JObject arg0, jint arg1);
		jboolean pingBinder();
		JObject queryLocalInterface(JString arg0);
		jboolean transact(jint arg0, android::os::Parcel arg1, android::os::Parcel arg2, jint arg3);
		jboolean unlinkToDeath(JObject arg0, jint arg1);
	};
} // namespace android::os

