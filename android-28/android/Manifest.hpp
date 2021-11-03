#pragma once

#include "../JObject.hpp"

namespace android
{
	class Manifest : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Manifest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Manifest(QAndroidJniObject obj);
		
		// Constructors
		Manifest();
		
		// Methods
	};
} // namespace android

