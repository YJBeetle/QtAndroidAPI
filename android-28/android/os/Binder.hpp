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
		void attachInterface(JObject arg0, JString arg1) const;
		void dump(java::io::FileDescriptor arg0, JArray arg1) const;
		void dumpAsync(java::io::FileDescriptor arg0, JArray arg1) const;
		JString getInterfaceDescriptor() const;
		jboolean isBinderAlive() const;
		void linkToDeath(JObject arg0, jint arg1) const;
		jboolean pingBinder() const;
		JObject queryLocalInterface(JString arg0) const;
		jboolean transact(jint arg0, android::os::Parcel arg1, android::os::Parcel arg2, jint arg3) const;
		jboolean unlinkToDeath(JObject arg0, jint arg1) const;
	};
} // namespace android::os

