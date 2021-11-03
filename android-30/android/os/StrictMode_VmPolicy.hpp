#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::os
{
	class StrictMode_VmPolicy : public JObject
	{
	public:
		// Fields
		static android::os::StrictMode_VmPolicy LAX();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StrictMode_VmPolicy(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StrictMode_VmPolicy(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JString toString();
	};
} // namespace android::os

