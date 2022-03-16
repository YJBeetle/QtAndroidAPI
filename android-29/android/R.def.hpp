#pragma once

#include "../JObject.hpp"

namespace android
{
	class R : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit R(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		R(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		R();
		
		// Methods
	};
} // namespace android

