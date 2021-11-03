#pragma once

#include "../JObject.hpp"

namespace android
{
	class Manifest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Manifest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Manifest(QJniObject obj);
		
		// Constructors
		Manifest();
		
		// Methods
	};
} // namespace android

