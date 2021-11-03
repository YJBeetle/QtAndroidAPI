#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class BugreportManager_BugreportCallback;
}
namespace android::os
{
	class ParcelFileDescriptor;
}

namespace android::os
{
	class BugreportManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BugreportManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BugreportManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void cancelBugreport();
		void startConnectivityBugreport(android::os::ParcelFileDescriptor arg0, JObject arg1, android::os::BugreportManager_BugreportCallback arg2);
	};
} // namespace android::os

