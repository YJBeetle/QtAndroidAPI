#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class FragmentManagerNonConfig : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FragmentManagerNonConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FragmentManagerNonConfig(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::app

