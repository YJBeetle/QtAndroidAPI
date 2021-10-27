#pragma once

#include "../__JniBaseClass.hpp"


namespace android
{
	class R_array : public __JniBaseClass
	{
	public:
		// Fields
		static jint emailAddressTypes();
		static jint imProtocols();
		static jint organizationTypes();
		static jint phoneTypes();
		static jint postalAddressTypes();
		
		R_array(QAndroidJniObject obj);
		// Constructors
		R_array();
		
		// Methods
	};
} // namespace android

