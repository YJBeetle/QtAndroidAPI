#pragma once

#include "../JObject.hpp"

namespace android
{
	class R_array : public JObject
	{
	public:
		// Fields
		static jint emailAddressTypes();
		static jint imProtocols();
		static jint organizationTypes();
		static jint phoneTypes();
		static jint postalAddressTypes();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit R_array(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		R_array(QAndroidJniObject obj);
		
		// Constructors
		R_array();
		
		// Methods
	};
} // namespace android

