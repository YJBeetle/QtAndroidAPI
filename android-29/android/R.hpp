#pragma once

#include "../JObject.hpp"

namespace android
{
	class R : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit R(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		R(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		R();
		
		// Methods
	};
} // namespace android

