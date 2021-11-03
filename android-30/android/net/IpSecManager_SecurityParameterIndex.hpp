#pragma once

#include "../../JObject.hpp"


namespace android::net
{
	class IpSecManager_SecurityParameterIndex : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IpSecManager_SecurityParameterIndex(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IpSecManager_SecurityParameterIndex(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		jint getSpi();
		jstring toString();
	};
} // namespace android::net

