#pragma once

#include "../JObject.hpp"


namespace android
{
	class R_plurals : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit R_plurals(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		R_plurals(QAndroidJniObject obj);
		
		// Constructors
		R_plurals();
		
		// Methods
	};
} // namespace android

