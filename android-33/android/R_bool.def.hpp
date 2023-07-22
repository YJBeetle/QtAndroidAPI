#pragma once

#include "../JObject.hpp"

namespace android
{
	class R_bool : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit R_bool(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		R_bool(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		R_bool();
		
		// Methods
	};
} // namespace android

