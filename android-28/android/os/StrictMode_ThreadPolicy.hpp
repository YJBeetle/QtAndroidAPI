#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::os
{
	class StrictMode_ThreadPolicy : public JObject
	{
	public:
		// Fields
		static android::os::StrictMode_ThreadPolicy LAX();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StrictMode_ThreadPolicy(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StrictMode_ThreadPolicy(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString toString() const;
	};
} // namespace android::os

