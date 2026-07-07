#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class RemoteCallbackList;
}

namespace android::os
{
	class RemoteCallbackList_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoteCallbackList_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoteCallbackList_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RemoteCallbackList_Builder(jint arg0);
		
		// Methods
		android::os::RemoteCallbackList build() const;
		android::os::RemoteCallbackList_Builder setExecutor(JObject arg0) const;
		android::os::RemoteCallbackList_Builder setInterfaceDiedCallback(JObject arg0) const;
		android::os::RemoteCallbackList_Builder setMaxQueueSize(jint arg0) const;
	};
} // namespace android::os

