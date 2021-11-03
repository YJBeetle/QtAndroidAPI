#pragma once

#include "../JObject.hpp"

namespace android
{
	class R_fraction : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit R_fraction(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		R_fraction(QAndroidJniObject obj);
		
		// Constructors
		R_fraction();
		
		// Methods
	};
} // namespace android

